/* Code Written By 4gh0ri */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct BST
{
   int data;
   struct BST *lchild, *rchild;
} node;

void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);

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
      printf("\n\t Traversal in Binary Seach Tree");
      printf("\n\t---------------------------------");
      printf("\n\t\t1. Create");
      printf("\n\t\t2. Inorder Traversal");
      printf("\n\t\t3. Preorder Traversal");
      printf("\n\t\t4. Postorder Traversal");
      printf("\n\t\t5. Exit");
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

            if (root == NULL) /* Tree is not Created */
               root = new_node;
            else
               insert(root, new_node);

            printf("\nWant To enter More Elements?(y/n)");
            ans = getch();
         } while (ans == 'y');
         break;

      case 2:
         if (root == NULL)
            printf("Tree Is Not Created");
         else
         {
            printf("\nThe Inorder display : ");
            inorder(root);
         }
         getch();
         break;

      case 3:
         if (root == NULL)
            printf("Tree Is Not Created");
         else
         {
            printf("\nThe Preorder display : ");
            preorder(root);
         }
         getch();
         break;

      case 4:
         if (root == NULL)
            printf("Tree Is Not Created");
         else
         {
            printf("\nThe Postorder display : ");
            postorder(root);
         }
         getch();
         break;

      case 5:
         printf(" Thank You");
         break;
      }
   } while (choice != 5);
}
/*
 Get new Node
 */
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
 //Function for inorder travesal
void inorder(node *temp)
{
   if (temp != NULL)
   {
      inorder(temp->lchild);
      printf("%d ", temp->data);
      inorder(temp->rchild);
   }
}
 //Function for preorder travesal
void preorder(node *temp)
{
   if (temp != NULL)
   {
      printf("%d ", temp->data);
      preorder(temp->lchild);
      preorder(temp->rchild);
   }
}
//Function for postorder travesal
void postorder(node *temp)
{
   if (temp != NULL)
   {
      postorder(temp->lchild);
      postorder(temp->rchild);
      printf("%d ", temp->data);
   }
}
