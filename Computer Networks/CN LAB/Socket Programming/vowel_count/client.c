#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define SERVERPORT 4952
#define MAXBUFLEN 200
int main()
{
    int sockfd;
    struct sockaddr_in their_addr;
    int numbytes;
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
    {
        perror("socket");
        exit(1);
    }
    their_addr.sin_family = AF_INET;
    their_addr.sin_port = htons(SERVERPORT);
    their_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    char arg[30];
    printf("Enter a string: ");
    scanf("%s", arg);
    if ((numbytes = sendto(sockfd, arg, strlen(arg), 0,
                           (struct sockaddr *)&their_addr, sizeof their_addr)) == -1)
    {
        perror("sendto");
        exit(1);
    }
    printf("sent %d bytes to %s\n", numbytes, inet_ntoa(their_addr.sin_addr));
    int buf[MAXBUFLEN];
    socklen_t addr_len;
    if ((numbytes = recvfrom(sockfd, buf, MAXBUFLEN - 1, 0,
                             (struct sockaddr *)&their_addr, &addr_len)) == -1)
    {
        perror("recvfrom");
        exit(1);
    }
    printf("got packet from %s\n", inet_ntoa(their_addr.sin_addr));
    printf("packet is %d bytes long\n", numbytes);
    printf("packet contains %d \n", buf[0]);
    close(sockfd);
    return 0;
}