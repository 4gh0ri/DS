/* Write a program to implement linear search 
   Code Written By Om Chetwani
   Date of Submission:11/02/2021
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, i, flag = 0;
    unsigned int size;
    printf("Enter Size of array:");
    scanf("%u", &size);
    //Dynamically Allocating Memory
    ptr = (int *)calloc(size, sizeof(int));
    if (ptr != NULL)
    {
        printf("\nEnter Elements:");
        for (i = 0; i < size; i++)
        {
            scanf("%d", &ptr[i]);
        }
    }
    printf("\nEnter Element to be searched:");
    scanf("%d", &n);
    //Linear Search
    for (i = 0; i < size; i++)
    {
        if (*(ptr + i) == n)
            flag = 1;
    }
    if (flag == 1)
        printf("\nElement Found!!");
    else
        printf("\nElement Not Found!!");
    free(ptr);
    return 0;
}