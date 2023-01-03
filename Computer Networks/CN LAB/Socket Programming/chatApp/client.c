#include <stdio.h>
#include <sys/types.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> /* netbd.h is needed for struct hostent =) */
#include <fcntl.h>

#define MAXDATASIZE 100 /* Max number of bytes of data */
#define STDIN 0

int main(int argc, char *argv[])
{
    int fd, numbytes, nval;
    char buf[MAXDATASIZE];

    struct hostent *he;
    struct sockaddr_in server;

    if (argc != 3)
    {
        printf("Usage: %s<IP Address> <port>\n", argv[0]);
        exit(-1);
    }

    if ((fd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        printf("socket() error\n");
        exit(-1);
    }

    server.sin_family = AF_INET;
    server.sin_port = htons(atoi(argv[2]));
    server.sin_addr.s_addr = inet_addr(argv[1]);
    bzero(&(server.sin_zero), 8);

    if (connect(fd, (struct sockaddr *)&server, sizeof(struct sockaddr) == -1))
    {
        printf("connect() error\n");
        exit(-1);
    }

    static char buf1[1000];
    fd_set rset, master, wset;
    struct timeval timeout;
    FD_ZERO(&rset);
    FD_ZERO(&master);
    FD_SET(fd, &master);
    FD_SET(STDIN, &master);

    do
    {
        rset = master;
        timeout.tv_sec = 100;
        timeout.tv_usec = 0;
        nval = select(fd + 1, &rset, NULL, NULL, &timeout);
        if (FD_ISSET(fd, &rset))
        {
            numbytes = recv(fd, buf, MAXDATASIZE, 0);
            buf[numbytes] = '\0';
            printf("Sever Message: %s\n", buf);
        }
        if (FD_ISSET(STDIN, &rset))
        {
            fgets(buf1, 1000, stdin);
            send(fd, buf1, strlen(buf1), 0);
        }
    } while (strncmp(buf, "exit", 4) != 0);

    close(fd);
    return 0;
}