/* Write a menu driven program to implement insertion sort
   Code Written By 4gh0ri
   Date of Submission:25/02/2021
 */
#include <stdio.h>
//Function prototypes
void menu(void);
void insertionSort(int *, int);
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
        case 2: //Insertion Sort
            insertionSort(arr, size);
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
    printf("\n2) Insertion Sort");
    printf("\n3) Display Array");
    printf("\n4) Exit");
    printf("\nEnter your choice :");
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
