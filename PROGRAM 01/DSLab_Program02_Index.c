/* Write a menu-driven program to find the index of a pattern in a given string and to extract a substring.
   Code Written By 4gh0ri
   Date of Submission:07/01/2021
 */
#include <stdio.h>
#include <string.h>
#define MAX 20

//Function Prototypes
void menu(void);
void r_data(char *, char *);

int main()
{
    int num;
    char str1[MAX], str2[MAX], str[MAX], cpstr[MAX];
    char ch;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:;
            char *ptr1, *ptr2, *ptr;
            printf("\nEnter String:");
            scanf("%s", str1);
            fflush(stdin);
            printf("\nEnter character to be searched:");
            scanf("%c", &ch);
            ptr1 = str1;
            ptr = strchr(str1, ch);
            printf("\naddr of string:%d\n addr of char:%d", ptr1, ptr);
            printf("\nIndex is:%d", ptr - ptr1);
            break;
        case 2: //CONCATENATE
            r_data(str1, str2);
            strncat(str2, str1, MAX);
            printf("\nConcanated String is:%s", str2);
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
void r_data(char st1[MAX], char st2[MAX])
{
    fflush(stdin);
    printf("\nEnter String 1:");
    fgets(st1, MAX, stdin);
    fflush(stdin);
    printf("\nEnter String 2:");
    fgets(st2, MAX, stdin);
    fflush(stdin);
}
