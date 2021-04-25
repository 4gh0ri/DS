/* Write a menu-driven program to find the index of a pattern in a given string and to extract a substring.
   Date of Submission:07/01/2021
 */
#include <stdio.h>
#include <string.h>
#define MAX 20

//Function Prototypes
void menu(void);
void r_data(char *, char *);
void substr(char *, char *);

int num;
int main()
{

    char str1[MAX], str2[MAX], str[MAX], cpstr[MAX];
    char ch;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:; //INDEX
            char *ptr1, *ptr2, *ptr;
            r_data(str1, ch);
            /*printf("\nEnter String:");
            scanf("%s", str1);
            fflush(stdin);
            printf("\nEnter character to be searched:");
            scanf("%c", &ch);*/
            ptr1 = str1;
            ptr = strchr(str1, ch);
            printf("\naddr of string:%d\n addr of char:%d", ptr1, ptr);
            printf("\nIndex is:%d", ptr - ptr1);
            break;
        case 2:; //SUBSTRING
            r_data(str1, str2);
            //char *sub;
            /*printf("\nEnter String:");
            scanf("%s", str1);
            fflush(stdin);
            printf("\nEnter substring:");
            scanf("%s", str2);*/
            substr(str1, str2);
            //char *rest = str1;
            /*char *p1,*p2,*p;
            p1 = str1;
            p2 = str2;
            int no = strlen(str2) - 1; 
            p = strstr(str1,str2);
            printf("\nSUBSTRING IS:");
            for(int i=0;i<=no;i++)
            {
                printf("%c",*p++);
            }*/
            //WORKING
            /*int n =strlen(str2);
            printf("\n len is:%d",n);
            char *sub = strstr(str1,str2);
            printf("\nString is:%s", sub);*/
            break;
        }
    } while (num != 3);
    return 0;
}
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
void r_data(char st1[MAX], char st2[MAX], char c)
{
    printf("\nEnter String:");
    scanf("%s", st1);
    fflush(stdin);
    if (num == 1)
    {
        printf("\nEnter character to be searched:");
        scanf("%c", &c);
    }
    else
    {
        printf("\nEnter substring:");
        scanf("%s", st2);
    }
    /*fflush(stdin);
    printf("\nEnter String 1:");
    fgets(st1, MAX, stdin);
    fflush(stdin);
    printf("\nEnter String 2:");
    fgets(st2, MAX, stdin);
    fflush(stdin);*/
}
void substr(char s1[], char s2[])
{
    char *p, *p1, *p2;
    p1 = s1;
    p2 = s2;
    int no = strlen(s2) - 1;
    p = strstr(s1, s2);
    printf("\nSUBSTRING IS:");
    for (int i = 0; i <= no; i++)
    {
        printf("%c", *p++);
    }
}
