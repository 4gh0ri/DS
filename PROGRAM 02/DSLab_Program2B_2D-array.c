/* Write a menu-driven program to traverse, insert, delete elements in 1D arrays.
   Code Written By Om Chetwani
   Date of Submission:28/01/2021
 */
#include <stdio.h>
#define NROW 4
#define NCOL 3
//Function Prototypes
void menu(void);
int size = 0;
int a[NROW][NCOL] = {0};
int main()
{
    int num,k, i,j, arr[50] = {0}, ps, elmt,row,col;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:; //Reading Data from User
            puts("Enter the elements");
            for (i = 0; i < (NROW - 1); ++i)
            {
                for (j = 0; j < NCOL; ++j)
                {
                    if (scanf("%d", &a[i][j]) != 1)
                    {
                        puts("invalid value");
                        return -1;
                    }
                }
            }
            printf("\n\t\t\tData Entered Sucessfully!!");
            break;
        case 2: //Traversing & Printing Array
            printf("\n\t\t\tArray is:\n");
            for (i = 0; i < NROW; ++i)
            {
                for (j = 0; j < NCOL; ++j)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:; //Insertion in 2D-Array
            puts("Enter the number:");
            if (scanf("%d", &k) != 1)
            {
                puts("invalid value");
                return -1;
            }
            printf("Enter row (1..%d) and column (1..%d):", NROW - 1, NCOL);
            if ((scanf("%d %d", &row, &col) != 2) ||
                (row < 1) || (row >= NROW) || (col < 1) || (col > NCOL))
            {
                puts("invalid value");
                return -1;
            }
            row--;
            col--;
            /* i,j at the new last cell position */
            i = NROW - 1;
            j = 0;
            do
            {
                int previ, prevj; /* the cell before i,j */
                if (j == 0)
                {
                    previ = i - 1;
                    prevj = NCOL - 1;
                }
                else
                {
                    previ = i;
                    prevj = j - 1;
                }
                a[i][j] = a[previ][prevj];
                i = previ;
                j = prevj;
            } while ((i != row) || (j != col));
            a[row][col] = k;
            for (i = 0; i < NROW; ++i)
            {
                for (j = 0; j < NCOL; ++j)
                    printf("%d ", a[i][j]);
                printf("\n");
            }
            break;
        case 4: //Deletion in 2D-Array
            printf("Enter row (1..%d) and column (1..%d):", NROW - 1, NCOL);
            if ((scanf("%d %d", &row, &col) != 2) ||
                (row < 1) || (row >= NROW) || (col < 1) || (col > NCOL))
            {
                puts("invalid value");
                return -1;
            }
            int y;
            for (y = col; y < 5; y++)
            {
                a[row][y] = a[row][y + 1];
            }
            a[row][y] = " ";
            //display
            for (i = 0; i < NROW; ++i)
            {
                for (j = 0; j < NCOL; ++j)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            break;
        }
    } while (num != 5);
    return 0;
}
void menu()
{
    printf("\n\n\t\t\t---------------------------------");
    printf("\n\t\t\t                Menu              ");
    printf("\n\t\t\t---------------------------------\n");
    printf("\n\t\t\t1) Enter Data");
    printf("\n\t\t\t2) Traverse Array");
    printf("\n\t\t\t3) Insertion");
    printf("\n\t\t\t4) Deletion");
    printf("\n\t\t\t5) Exit");
    printf("\n\t\t\tEnter your choice :");
}