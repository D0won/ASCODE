#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main(void)
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        int check = 0;
        char c[1025] = { 0 }, cp[1025] = { 0 };
        scanf("%s", c);
        int len = strlen(c);
        int j = 0;
        for (int i = 0; i < len; i++)
        {

            if ((c[i] == 'c'|| c[i] == 'C') && (c[i + 1] == 'h' || c[i+1] == 'H') && (c[i + 2] == 'a' || c[i+2] == 'A') && (c[i + 3] == 'r' || c[i+3] == 'R'))
            {
                check++;
                i += 3;
            }
            else
            {
                cp[j++] = c[i];
            }
        }
        cp[j] = '\0';
        if (check >= 2)
        {
            if (strcmp(cp, "") == 0)
                printf("I Hate CharChar!\n");
            else
                printf("%s\n", cp);

        }
        else
        {
            printf("%s\n", c);
        }
    }
}