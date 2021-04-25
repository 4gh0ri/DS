/* Write a menu-driven program to compare, concatenate, copy strings and find the length of a string.
   Code Written By Om Chetwani
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
        case 1:;                      //COMPARE
            r_data(str1, str2);
            int cmp;
            cmp = strcmp(str1, str2);
            printf(cmp == 0 ? "\nStrings are EQUAL!!" : "\nStrings are Different!!");
            break;
        case 2:                         //CONCATENATE
            //r_data(str1, str2);
            printf("\nEnter String 1:");
            scanf("%s",str1);
            printf("\nEnter String 2:");
            scanf("%s",str2);
            strncat(str2, str1, MAX);
            printf("\nConcatanated String is:%s", str2);
            break;
        case 3:                         //COPY
            fflush(stdin);
            printf("\nEnter String to be copied:");
            fgets(str, MAX, stdin);
            fflush(stdin);
            memcpy(cpstr, str, MAX);
            //memccpy(cpstr,str,'\0',MAX);
            printf("\nCopied String is:%s", cpstr);
            break;
        case 4:;                        //LENGTH
            int n;
            fflush(stdin);
            printf("\nEnter String:");
            fgets(str, MAX, stdin);
            fflush(stdin);
            n = strlen(str)-1;
            printf("\nLength of String is:%d", n);
            break;
        }
    } while (num != 5);
    return 0;
}
void menu()
{
    printf("\n\n\t\t\t\t---------------------------------");
    printf("\n\t\t\t\t                Menu              ");
    printf("\n\t\t\t\t---------------------------------\n");
    printf("\n\t\t\t\t1) Compare");
    printf("\n\t\t\t\t2) Concatenate");
    printf("\n\t\t\t\t3) Copy Strings");
    printf("\n\t\t\t\t4) Length");
    printf("\n\t\t\t\t5) Exit");
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