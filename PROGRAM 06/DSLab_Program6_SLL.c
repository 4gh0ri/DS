/* Write a menu driven program to implement singly linked lists 
   creation,insertion and deletion
   Code Written By 4gh0ri
   Date of Submission:11/02/2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Function Prototypes
void menu(void);
void insert();
void display();
void delete ();
struct node
{
    int data;
    struct node *next;
};
struct node *ptr, *new, *head, *p, *last;
int main()
{
    int num, i;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:;                //Creation
            fflush(stdin);
            new = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &new->data);
            //struct node *head = (struct node *)malloc(sizeof(struct node));
            break;
        case 2:;                 //Insertion
            fflush(stdin);
            insert();
            break;
        case 3:;                //Deletion
            fflush(stdin);
            delete ();
            break;
        case 4:                 //Display
            fflush(stdin);
            display();
            break;
        }
    } while (num != 5);
    return 0;
}
void menu()
{
    printf("\n\n---------------------------------");
    printf("\n              Menu              ");
    printf("\n---------------------------------\n");
    printf("\n1) Creation");
    printf("\n2) Insertion");
    printf("\n3) Deletion");
    printf("\n4) Display");
    printf("\n5) Exit");
    printf("\nEnter your choice :");
}
void display()
{
    system("cls");
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("No Linked List");
    }
    else
    {
        //printf("\nprinting values . . . . .\n");
        printf("\nLinked list:");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}
void insert()
{
    int n;
    do
    {
        printf("\n");
        printf("\n1) Insertion At Begining");
        printf("\n2) Insertion At End");
        printf("\n3) Display");
        printf("\n4) Exit");
        printf("\nEnter your choice :");
        scanf("%d", &n);
        switch (n)
        {
        case 1:; //Insertion At Begining
            {
                struct node *ptr;
                int item;
                ptr = (struct node *)malloc(sizeof(struct node *));
                if (ptr == NULL)
                {
                    printf("\nOVERFLOW");
                }
                else
                {
                    printf("\nEnter value:\n");
                    scanf("%d", &item);
                    ptr->data = item;
                    ptr->next = head;
                    head = ptr;
                    printf("\nNode inserted");
                }
            }
            break;
        case 2:; //Insertion At End
            {
                struct node *ptr, *temp;
                int item;
                ptr = (struct node *)malloc(sizeof(struct node));
                if (ptr == NULL)
                {
                    printf("\nOVERFLOW");
                }
                else
                {
                    printf("\nEnter value:\n");
                    scanf("%d", &item);
                    ptr->data = item;
                    if (head == NULL)
                    {
                        ptr->next = NULL;
                        head = ptr;
                        printf("\nNode inserted");
                    }
                    else
                    {
                        temp = head;
                        while (temp->next != NULL)
                        {
                            temp = temp->next;
                        }
                        temp->next = ptr;
                        ptr->next = NULL;
                        printf("\nNode inserted");
                    }
                }
            }
            break;
        case 3:
            display();
            break;
        }
    } while (n != 4);
}
void delete ()
{
    int n;
    do
    {
        
        printf("\n1) Deletion At Begining");
        printf("\n2) Deletion At End");
        printf("\n3) Display");
        printf("\n4) Exit");
        printf("\nEnter your choice :");
        scanf("%d", &n);
        switch (n)
        {
        case 1:; //Deletion At Begining
            {
                struct node *ptr;
                if (head == NULL)
                {
                    printf("\nList is empty\n");
                }
                else
                {
                    ptr = head;
                    head = ptr->next;
                    free(ptr);
                    printf("\nNode deleted from the begining\n");
                }
            }
            break;
        case 2:; //Deletion At End
            {
                struct node *ptr, *ptr1;
                if (head == NULL)
                {
                    printf("\nlist is empty");
                }
                else if (head->next == NULL)
                {
                    head = NULL;
                    free(head);
                    printf("\nOnly node of the list deleted\n");
                }
                else
                {
                    ptr = head;
                    while (ptr->next != NULL)
                    {
                        ptr1 = ptr;
                        ptr = ptr->next;
                    }
                    ptr1->next = NULL;
                    free(ptr);
                    printf("\nDeleted Node from the last\n");
                }
            }
            break;
        case 3:
            display();
            break;
        }
    } while (n != 4);
}
