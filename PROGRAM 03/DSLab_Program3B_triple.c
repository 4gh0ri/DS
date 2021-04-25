/*  Write a program to print the appropriately triple < row, column, "value" > 
    that represents the elements in the sparse matrix.
   Code Written By Om Chetwani
   Date of Submission:04/02/2021
 */
#include <stdio.h>
#define ROW 3
#define COL 3
//Function prototypes
int sparse(int arr[ROW][COL]);
int main()
{
    int arr[ROW][COL],check;
    //Reading Input
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("\nEnter Element[%d][%d]:", i, j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n");
    check = sparse(arr);//Checking if matrix is sparse or not
    if (check==1)
    {
    //Printing Result 
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < ROW; j++)
        {
            if(arr[i][j] != 0)
            {
                printf("Row: %d Col: %d Value: %d\n",i,j,arr[i][j]);
            }
            
        }
    }
    }
    else
    printf("\nIt's not A sparse Matrix");
    return 0;
}
int sparse(int ar[ROW][COL])
{
    float spi;
    int c = 0,flag,i,j;
    spi = (ROW * COL) * 2 / 3;
    //Checking non-zero elements
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (ar[i][j] == 0)
            {
                c++;
            }
        }
    }
    if (c >= spi)
        flag=1;
    else
        flag=0;
    return flag;
}