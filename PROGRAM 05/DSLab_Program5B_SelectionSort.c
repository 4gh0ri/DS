/* Write a menu driven program to implement selection sort
   Code Written By 4gh0ri
   Date of Submission:25/02/2021
 */
#include <stdio.h>
//Function prototypes
void menu(void);
void selectionSort(int *, int);
void swap(int *, int *);
void printArray(int *, int);
int main()
{
    int n;
    int arr[50], size, i;
    do
    {
        menu();
        scanf("%d", &n);
        switch (n)
        {
        case 1: //Reading Data from user
            printf("\nEnter Size of array:");
            scanf("%d", &size);
            printf("\nEnter Array:");
            for (i = 0; i < size; i++)
            {
                scanf("\n%d", &arr[i]);
            }
            printf("\nData Entered Sucessfully!!");
            break;
        case 2: //selection Sort
            selectionSort(arr, size);
            break;
        case 3: // Printing Array
            printArray(arr, size);
            break;
        }
    } while (n != 4);
}
void menu()
{
    printf("\n\n---------------------------------");
    printf("\n                Menu              ");
    printf("\n---------------------------------\n");
    printf("\n1) Enter Data");
    printf("\n2) Selection Sort");
    printf("\n3) Display Array");
    printf("\n4) Exit");
    printf("\nEnter your choice :");
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        // Swaping
        swap(&arr[min_idx], &arr[i]);
    }
    printf("\nSorting Completed");
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
