#include <stdio.h>
#include <string.h>

typedef struct string
{
    char str[100];
    int len;
} string;

string sub;
int cur = 0, ind = 0;

int max(int a, int b)
{
    return (a > b ? a : b);
}

int LCS(string s1, string s2, int i, int j)
{
    int cnt = 0;
    if (i == 0 || j == 0)
        cnt = 0;
    else if (s1.str[i - 1] == s2.str[j - 1])
        cnt = 1 + LCS(s1, s2, i - 1, j - 1);
    else
        cnt = max(LCS(s1, s2, i - 1, j), LCS(s1, s2, i, j - 1));
    if (cnt > cur)
    {
        cur = cnt;
        sub.str[ind++] = s1.str[i - 1];
    }
    return cnt;
}

int main()
{
    string str1, str2;
    printf("Enter the first string: ");
    scanf("%s", str1.str);
    printf("Enter the second string: ");
    scanf("%s", str2.str);
    str1.len = strlen(str1.str);
    str2.len = strlen(str2.str);
    sub.len = 0;
    printf("The length of the LCS is %d\n", LCS(str1, str2, str1.len, str2.len));
    sub.str[sub.len] = '\0';
    printf("The longest common substring is: %s\n", sub.str);
    return 0;
}