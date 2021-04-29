/* Code Written By 4gh0ri*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *lchild, *rchild;
} node;

void insert(node *, node *);
node *search(node *, int, node **);

void main()
{
    int choice;
    char ans = 'N';
    int key;
    node *new_node, *root, *tmp, *parent;
    node *get_node();
    root = NULL;

    do
    {
        system("cls");
        printf("\n\t Insertion in Binary Seach Tree");
        printf("\n\t---------------------------------");
        printf("\n\t\t1. Insert");
        printf("\n\t\t2. Check");
        printf("\n\t\t3. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &choice);
        system("cls");

        switch (choice)
        {
        case 1:
            do
            {
                new_node = get_node();
                printf("\nEnter The Element ");
                scanf("%d", &new_node->data);

                if (root == NULL) //Tree is not Created 
                    root = new_node;
                else
                    insert(root, new_node);

                printf("\nWant To insert More Elements?(y/n)");
                ans = getch();
            } while (ans == 'y');
            break;

        case 2:
            printf("\nEnter Element to be searched :");
            scanf("%d", &key);

            tmp = search(root, key, &parent);
            printf("\nParent of node %d is %d", tmp->data, parent->data);
            getch();
            break;

        case 4:
            printf("Thank You");
            break;
        }
    } while (choice != 3);
}

node *get_node()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}
//Function for creation of BST
void insert(node *root, node *new_node)
{
    if (new_node->data < root->data)
    {
        if (root->lchild == NULL)
            root->lchild = new_node;
        else
            insert(root->lchild, new_node);
    }

    if (new_node->data > root->data)
    {
        if (root->rchild == NULL)
            root->rchild = new_node;
        else
            insert(root->rchild, new_node);
    }
}
//Function for search in tree
node *search(node *root, int key, node **parent)
{
    node *temp;
    temp = root;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("\nThe %d Element is Present", temp->data);
            return temp;
        }
        *parent = temp;

        if (temp->data > key)
            temp = temp->lchild;
        else
            temp = temp->rchild;
    }
    return NULL;
}
