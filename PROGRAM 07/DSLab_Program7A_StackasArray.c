/* Write a menu driven program to implement different operations on a stack using an array
   Code Written By 4gh0ri
   Date of Submission:11/03/2021
 */
#include<stdio.h>
#include<conio.h>
#define MAX 5

typedef struct stack
{
 int data[MAX];
 int top;
}stack;

void initialize(stack *);
int isEmpty(stack *);
int isFull(stack *);
void push(stack *,int);
void pop(stack *);
void display(stack *);

int main()
{
 stack s;
 int choice;
 int n,x;
 initialize(&s);
 do
 {
  printf("1. Push\n");
  printf("2. Pop\n");
  printf("3. Display\n");
  printf("4. Exit\n");
  printf("Select your option:-\n");
  scn:scanf("%d",&choice);
  switch(choice)
  {
   case 1: printf("Enter Element To Push: ");
    scanf("%d",&n);
    push(&s,n);
    getch();
    break;
   case 2: pop(&s);
    getch();
    break;
   case 3: display(&s);
    getch();
    break;
   case 4: break;
   default:printf("Invalid Option. Enter Again\n");
    goto scn;
  }
 }while(choice!=4);
 return 0;
}
void initialize(stack *s)
{
 s->top = -1;
}
int isEmpty(stack *s)
{
 if (s->top==-1)
  return 1;
 else
  return 0;
}
int isFull(stack *s)
{
 if(s->top==4)
  return 1;
 else
  return 0;
}

void push(stack *s,int n)
{
 if(isFull(s))
  printf("Stack Full\n");
 else
 {
  s->top = s->top + 1;
  s->data[s->top]=n;
  printf("%d Added To Stack\n",n);
 }
}

void pop(stack *s)
{
 if(isEmpty(s))
  printf("Stack Empty");
 else
 {
  int x = s->data[s->top];
  s->top = s->top - 1;
  printf("%d Popped From Stack\n",x);
 }
}

void display(stack *s)
{
 int i;
 if(isEmpty(s))
  printf("Stack Empty");
 else
 {
  printf("Stack:-\n");
  for(i=0;i<=s->top;i++)
   printf("%d ",s->data[i]);
 }
}
