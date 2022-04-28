#include<stdio.h>
#include<conio.h>

#define size 100

void push(int STACK[] , int *, int );
int  pop (int STACK[] , int  *);
int  peek(int STACK[], int );


void main()
{
 int top =-1,item;
 int STACK[size],choice;

  while (1)
  {
   scanf("%d",&choice);
   switch(choice)
   {
   case 1: scanf("%d",item);
	   push(STACK,&top,item);
	   break;
   case 2: item = pop(STACK,&top);
	   printf("%d",item);
	   break;
   case 3: item = peek(STACK, top);
	   printf("%d",item);
	   break;
   default : exit(0);
   }
  }
}
/* if (top== size - 1){
 printf("overflow"); }
 else
 {

 }*/

  void push (int STACK[],int *top , int item)
  {
  *top = *top+1;
  STACK[*top]=item;
  }

  int pop (int STACK[], int *top)
  {
  int item;
  item = STACK[*top];
  *top=*top-1;
  return(item);
  }

  int peek (int STACK[], int top)
  {
  return(STACK[top]);
  }