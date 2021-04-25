/* Write a program to implement Binary Search using Recursion
   Code Written By Om Chetwani
   Date of Submission:11/02/2021
 */
#include <stdio.h>
#include <stdlib.h>
//Function Prototypes
void menu(void);
int b_search(int *, int, int, int);
void bubble_sort(int*,int);
int main()
{
    int *ptr, num, i, n, ar[50];
    unsigned int size;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:; //Reading Data from User
            printf("Enter Size of array:");
            scanf("%u", &size);
            printf("\nEnter Elements:\n");
            for (i = 0; i < size; i++)
            {
                scanf("%d", &ar[i]);
            }
            break;
        case 2:;
        bubble_sort(ar,size);
        printf("\nArray Sorted!!");
        /*printf("\nSorted array is:");
        for(i=0;i<size;i++)
        {
            printf("\n%d",ar[i]);
        }*/
            break;
        case 3:;
            printf("\nEnter no. to be searched:");
            scanf("%u", &n);
            int ind = b_search(ar, 0, size - 1, n);
            if (ind == -1)
                printf("\nElement not Found!!");
            else
                printf("\nElement Found at [%d] Index", ind);
            break;
        }
    } while (num != 4);
    return 0;
}
void menu()
{
    printf("\n\n---------------------------------");
    printf("\n              Menu              ");
    printf("\n---------------------------------\n");
    printf("\n1) Enter Data");
    printf("\n2) Sort Array");
    printf("\n3) Binary Search");
    printf("\n4) Exit");
    printf("\nEnter your choice :");
}
int b_search(int arr[], int low, int high, int no)
{
    if (low <= high)
    {
        int mid = low + (high - 1) / 2;
        if (arr[mid] == no)
            return mid;
        if (arr[mid] > no)
            return b_search(arr, low, mid - 1, no);
        return b_search(arr, mid + 1, high, no);
    }
    return -1;
}
void bubble_sort(int arr[],int s)
{
    int i,j;
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
    }
}