/* Write a menu-driven program to compare, concatenate, copy strings and find the length of a string.
   Code Written By 4gh0ri
   Date of Submission:22/01/2021
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
            printf(cmp == 0 ? "\n\t\t\t\tStrings are EQUAL!!" : "\n\t\t\t\tStrings are Different!!");
            break;
        case 2:                         //CONCATENATE
            r_data(str1, str2);
            int no = strlen(str1);
            printf("\n\t\t\t\t length is:%d",no);
            strncat(str2, str1, MAX);
            printf("\n\t\t\t\tConcatenated String is:%s", str2);
            break;
        case 3:                         //COPY
            fflush(stdin);
            printf("\n\t\t\t\tEnter String to be copied:");
            fgets(str, MAX, stdin);
            fflush(stdin);
            memcpy(cpstr, str, MAX);
            //memccpy(cpstr,str,'\0',MAX);
            printf("\n\t\t\t\tCopied String is:%s", cpstr);
            break;
        case 4:;                        //LENGTH
            int n;
            fflush(stdin);
            printf("\n\t\t\t\tEnter String:");
            fgets(str, MAX, stdin);
            fflush(stdin);
            n = strlen(str)-1;
            printf("\n\t\t\t\tLength of String is:%d", n);
            break;
            case 6:;     //INDEX
            char *ptr1, *ptr2, *ptr;
            printf("\nEnter String:");
            scanf("%s", str1);
            fflush(stdin);
            printf("\nEnter character to be searched:");
            scanf("%c", &ch);
            ptr1 = str1;
            ptr = strchr(str1, ch);
            //printf("\naddr of string:%d\n addr of char:%d", ptr1, ptr);
            printf("\nIndex is:%d", ptr - ptr1);
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
    printf("\n\t\t\t\t5) Index");
    printf("\n\t\t\t\t6) Exit");
    printf("\n\t\t\t\tEnter your choice :");
}
void r_data(char st1[MAX], char st2[MAX])
{
    fflush(stdin);
    printf("\n\t\t\t\tEnter String 1:");
    fgets(st1, MAX, stdin);
    fflush(stdin);
    printf("\n\t\t\t\tEnter String 2:");
    fgets(st2, MAX, stdin);
    //fflush(stdin);
    int len1 = strlen(st1);
    int len2 = strlen(st2);
    if(st1[len1-1] == '\n' || st1[len2-1] == '\n')
    {
    st1[len1-1] = '\0';
    st2[len2-1] = '\0';
    }
}
