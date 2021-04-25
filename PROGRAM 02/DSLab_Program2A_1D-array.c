/* Write a menu-driven program to traverse, insert, delete elements in 1D arrays.
   Code Written By Om Chetwani
   Date of Submission:21/01/2021
 */
#include <stdio.h>

//Function Prototypes
void menu(void);
int insert(int *, int, int, int);
int delete (int *, int, int, int);
int size = 0;
int main()
{
    int num, i, arr[50] = {0}, ps, elmt;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:; //Reading Data from User
            printf("\n\t\t\tEnter Size of array:");
            scanf("%d", &size);
            printf("\n\t\t\tEnter Array:");
            for (i = 0; i < size; i++)
            {
                scanf("\n\t\t\t %d", &arr[i]);
            }
            printf("\n\t\t\tData Entered Sucessfully!!");
            break;
        case 2: //Traversing & Printing Array
            printf("\n\t\t\tArray is:");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            break;
        case 3:; //Insertion at Begining
            printf("\n\t\t\tEnter Element to be Inserted:");
            scanf("%d", &elmt);
            insert(arr, size, 1, elmt);
            //printf("\n\t\t\tsize at:%d", size);
            break;
        case 4: //Insertion at End
            printf("\n\t\t\tEnter Element to be Inserted:");
            scanf("%d", &elmt);
            insert(arr, size, size + 1, elmt);
            //printf("\n\t\t\tsize at:%d", size);
            break;
        case 5: //Insertion at any Location
            printf("\n\t\t\tEnter Element to be Inserted:");
            scanf("%d", &elmt);
            printf("\n\t\t\tEnter Position of Insertion:");
            scanf("%d", &ps);
            insert(arr, size, ps, elmt);
            break;
        case 6:; //Deletion at Begining
            printf("\n\t\t\tEnter Element to be Deleted:");
            scanf("%d", &elmt);
            delete (arr, size, 1, elmt);
            //printf("\n\t\t\tsize at:%d", size);
            break;
        case 7:; //Deletion at End
            printf("\n\t\t\tEnter Element to be Deleted:");
            scanf("%d", &elmt);
            delete (arr, size, size+1, elmt);
            //printf("\n\t\t\tsize at:%d", size);
            break;
        case 8:; //Deletion at Any Location
            printf("\n\t\t\tEnter Element to be Deleted:");
            scanf("%d", &elmt);
            printf("\n\t\t\tEnter Position of Deletion:");
            scanf("%d", &ps);
            delete (arr, size, ps, elmt) ;
            break;
        }
    } while (num != 9);
    return 0;
}
void menu()
{
    printf("\n\n\t\t\t---------------------------------");
    printf("\n\t\t\t                Menu              ");
    printf("\n\t\t\t---------------------------------\n");
    printf("\n\t\t\t1) Enter Data");
    printf("\n\t\t\t2) Traverse Array");
    printf("\n\t\t\t3) Insertion at Start");
    printf("\n\t\t\t4) Insertion at End");
    printf("\n\t\t\t5) Insertion at Random");
    printf("\n\t\t\t6) Deletion at Start");
    printf("\n\t\t\t7) Deletion at End");
    printf("\n\t\t\t8) Deletion at Random");
    printf("\n\t\t\t9) Exit");
    printf("\n\t\t\tEnter your choice :");
}
int insert(int a[50], int s, int pos, int item)
{
    int j, k;
    s++;
    size = s;
    for (j = s - 1; j >= pos; j--)
    {
        a[j] = a[j - 1];
    }
    a[pos - 1] = item;
    printf("\n\t\t\tInsertion Sucessfull!!");
    printf("\n\t\t\tArray is:");
    for (k = 0; k < s; k++)
    {
        printf("%d ", a[k]);
    }
    //printf("\n\t\t\tsize:%d", s);
    return 0;
}
int delete (int a[50], int s, int pos, int item)
{
    int j, k;
    for (j = pos-1; j <= s; j++)
    {
        a[j] = a[j + 1];
    }
    s = s - 1;
    size = s;
    printf("\n\t\t\tDeletion Sucessfull!!");
    printf("\n\t\t\tArray is:");
    for (k = 0; k < s; k++)
    {
        printf("%d ", a[k]);
    }
    //printf("\n\t\t\tsize:%d", s);
    return 0;
}