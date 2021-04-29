/* Menu driven program to implement Depth first Search
   Code written by 4gh0ri
   Date of Submission:22/04/2021
*/
#include <stdio.h>
void menu(void);
int a[20][20], reach[20], n;
///Function for depth first search
void dfs(int v)
{
    int i;
    reach[v] = 1;
    for (i = 1; i <= n; i++)
        if (a[v][i] && !reach[i])
        {
            printf("\n %d->%d", v, i);
            dfs(i);
        }
}
void main()
{
    int i, j, count = 0, num;
    do
    {
        menu(); //Printing Menu
        scanf("%d", &num);
        switch (num)
        {
        case 1:; //Inserting Data
            printf("\nEnter number of vertices:");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
            {
                reach[i] = 0;
                for (j = 1; j <= n; j++)
                    a[i][j] = 0;
            }
            printf("\nEnter the adjacency matrix:\n");
            for (i = 1; i <= n; i++)
                for (j = 1; j <= n; j++)
                    scanf("%d", &a[i][j]);
            break;
        case 2:; //DFS
            dfs(1);
            printf("\n");
            for (i = 1; i <= n; i++)
            {
                if (reach[i])
                    count++;
            }
            if (count == n)
                printf("\nGraph is connected");
            else
                printf("\nGraph is not connected");
            break;
        }
    } while (num != 3);
}
void menu()
{
    printf("\n\n---------------------------------");
    printf("\n              Menu              ");
    printf("\n---------------------------------\n");
    printf("\n1) Enter Adjacency Matix");
    printf("\n2) Depth First Search");
    printf("\n3) Exit");
    printf("\nEnter your choice :");
}
