#include<stdio.h>
#include<conio.h>
int a[50],i,n,item;
void linear_search(int a[50],int n,int item);
int binary_search(int a[50],int n,int item);
void main()
{ int choice;
clrscr();
printf("Enter the size of array:");
scanf("%d",&n);
printf("\nEnter the elements of Array:");
for(i=0; i<n; i++)
{
  scanf("%d",&a[i]);
}
for (i=0; i<n; i++)
{
  printf("%d  ",a[i]);
}
printf("\n\nEnter the item to search:");
scanf("%d",&item);
printf("\nEnter the operation:");
scanf("%d", &choice);
switch (choice)
{
 case 1: linear_search(a,n,item); break;
 case 2: binary_search(a,n,item); break;
 default : printf("invalid choice");
}
getch();
}
void linear_search(int a[50],int n,int item)
{
for (i=0; i<n; i++)
{
 if(item==a[i])
{
  printf("\nitem found");
  printf("\n\nitem found at %d location",i+1);
  break;
}
}
if(i==n)
printf("\nItem not found");
}

int binary_search(int a[50],int n, int item)
{
 int beg , end, mid;
    beg = 0;
    end = n - 1;
    mid = (end-beg)*1/2;
  while( beg<=end &&  a[mid]!=item  )
  {
   if (item<a[mid])
    end=mid-1;
   else
    beg=mid+1;
    mid=(beg-end)*1/2;
    return -1;
  }

  if(beg>end)

   return mid;
}
