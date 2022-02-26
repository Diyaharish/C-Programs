#include <stdio.h>
int linearsearch(int[],int,int);
void main()
{
  int a[50],key,i,n,j;
  printf("Enter the no. of elements: ");
  scanf("%d",&n);
  printf("Enter %d numbers: ",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Entr the element to be searched");
  scanf("%d",&key);
  j=linearsearch(a,n,key);
if(j==-1)
  printf("%d is not present in array",key);
else
  printf("%d is present at %d",key,j+1);
}

int linearsearch(int x[],int n,int search)
{
 int b;
 for(b=0;b<n;b++)
 {
   if(x[b]==search)
   return b;
 }
return -1;
}

