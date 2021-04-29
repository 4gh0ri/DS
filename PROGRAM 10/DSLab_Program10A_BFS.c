/* Menu driven program to implement Bread first Search
   Code written by 4gh0ri
   Date of Submission:22/04/2021
*/
#include <stdio.h>
//Function Prototypes
void menu(void);
int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;
//Function For Breadth First Search
void bfs(int v)
{
    for (i = 1; i <= n; i++)
        if (a[v][i] && !visited[i])
            q[++r] = i;
    if (f <= r)
    {
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}
void main()
{
    int num, i, v;
    do
    {
        menu();
        scanf("%d", &num);
        switch (num)
        {
        case 1:; //Insertion
            printf("\n Enter the number of vertices:");
            scanf("%d", &n);
            for (i = 1; i <= n; i++)
            {
                q[i] = 0;
                visited[i] = 0;
            }
            printf("\n Enter graph data in matrix form:\n");
            for (i = 1; i <= n; i++)
                for (j = 1; j <= n; j++)
                    scanf("%d", &a[i][j]);
            break;
        case 2:; //BFS
            printf("\nEnter the starting vertex:");
            scanf("%d", &v);
            bfs(v);
            printf("\nThe node which are reachable are:\n");
            for (i = 1; i <= n; i++)
                if (visited[i])
                    printf("%d\t", i);
                else
                    printf("\nBFS is not possible");
            break;
        }
    } while (num != 3);
}
void menu()
{
    printf("\n\n---------------------------------");
    printf("\n              Menu              ");
    printf("\n---------------------------------\n");
    printf("\n1) Enter Adjacency Matrix");
    printf("\n2) Breadth First Search");
    printf("\n3) Exit");
    printf("\nEnter your choice :");
}
