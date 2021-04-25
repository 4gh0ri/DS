/* Write a menu-driven program to find the index of a pattern in a given string and to extract a substring.
   Code Written By Om Chetwani
   Date of Submission:07/01/2021
 */
#include <stdio.h>
#include <string.h>
#define MAX 20

//Function Prototypes
void menu(void);
void substr(char *, char *);

int main()
{
    char str1[MAX], str2[MAX], str[MAX],ch;
    int num;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:;                        //INDEX
            char *ptr1, *ptr2, *ptr;
            fflush(stdin);
            printf("\n\t\t\t\tEnter String:");
            gets(str1);
            fflush(stdin);
            printf("\n\t\t\t\tEnter character to be searched:");
            scanf("%c", &ch);
            ptr1 = str1;
            ptr = strchr(str1,ch);
            //printf("\naddr of string:%d\n addr of char:%d", ptr1, ptr);
            printf("\n\t\t\t\tIndex of '%c' is:%d",ch,ptr - ptr1);
            break;
        case 2:;                //SUBSTRING
            fflush(stdin);
            printf("\n\t\t\t\tEnter String:");
            gets(str1);
            fflush(stdin);
            printf("\n\t\t\t\tEnter substring:");
            gets(str2);
            fflush(stdin);
            substr(str1, str2);
            break;
        }
    } while (num != 3);
    return 0;
}
//Function Bodies
void menu()
{
    printf("\n\n\t\t\t\t---------------------------------");
    printf("\n\t\t\t\t                Menu              ");
    printf("\n\t\t\t\t---------------------------------\n");
    printf("\n\t\t\t\t1) Find Index");
    printf("\n\t\t\t\t2) Extract Substring");
    printf("\n\t\t\t\t3) Exit");
    printf("\n\t\t\t\tEnter your choice :");
}
void substr(char s1[], char s2[])
{
    char *p, *p1, *p2;
    p1 = s1;
    p2 = s2;
    int no = strlen(s2) - 1;
    p = strstr(s1, s2);
    printf("\n\t\t\t\tSUBSTRING IS:");
    for (int i = 0; i <= no; i++)
    {
        printf("%c", *p++);
    }
}