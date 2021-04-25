/* Write a menu driven program to read a sparse matrix of integer values and
   to search the sparse matrix for any element specified by the user.
   Code Written By Om Chetwani
   Date of Submission:04/02/2021
 */
#include <stdio.h>
#define ROW 2
#define COL 2
//Function prototypes
void menu(void);
int sparse(int arr[ROW][COL]);
void search(int arr[ROW][COL]);
int i, j;
int main()
{
    int n, c, r;
    int spm[ROW][COL];
    do
    {
        menu();
        scanf("%d", &n);
        switch (n)
        {
        case 1: //Reading Data from user
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("\nEnter Element[%d][%d]:", i, j);
                    scanf("%d", &spm[i][j]);
                }
            }
            break;
        case 2: //Checking Sparse Matrix
            sparse(spm);
            break;
        case 3://Searching Element
            search(spm);
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
    printf("\n2) Check Sparse Matrix");
    printf("\n3) Search Element");
    printf("\n4) Exit");
    printf("\nEnter your choice :");
}
int sparse(int arr[ROW][COL])
{
    float spi;
    int c = 0;
    spi = (ROW * COL) * 2 / 3;
    //Checking non-zero elements
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (arr[i][j] == 0)
            {
                c++;
            }
        }
    }
    if (c >= spi)
        printf("\nIt's A sparse Matrix");
    else
        printf("\nIt's not A sparse Matrix");
    return 0;
}
void search(int arr[ROW][COL])
{
    int n,flag;
    printf("\nEnter element to be searched:");
    scanf("%d",&n);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (arr[i][j] == n)
            flag =1;
        }
    }
    if (flag == 1)
        printf("\nElement Found!!");
    else
        printf("\nElement not found!");
}