#include <stdio.h>
int read(int [],int);
int binarysearch(int[],int,int);
void bubblesort(int [],int);

int main()
{
 int a[100],n,key,search,i;
 printf("Enter the number of elements: ");
 scanf("%d",&n);
 read(a,n);
 bubblesort(a,n);
 printf("Sorted Array \n");
for(i=0;i<n;i++)
printf("%d \n",a[i]);
 printf("Enter the number to be searched:");
 scanf("%d",&key);
 search=binarysearch(a,n,key);
  if(search==0)
   printf("Element not found");
  else 
   printf("Element found at position %d",search);
   return 0;
 
}
int read(int x[],int n)
{
 int i;
 printf("Enter  the elements: \n ");
 for(i=0;i<n;i++)
  scanf("%d",&x[i]);
}
void bubblesort(int x[],int n)
{

 int p,c,t;
 for(p=1;p<n;p++)
 {
  for(c=0;c<n-p;c++)
  {
    if(x[c]>x[c+1])
    {
     t=x[c];
     x[c]=x[c+1];
     x[c+1]=t;
    }
  }
 }
}

int binarysearch(int x[],int n,int key)
{
 int i=0,b=n-1,mid;

 while(i<=b)
 {
  mid=(i+b)/2;
   if(x[mid]==key)
    return(mid+1);
  
   else
   {
    if(key<x[mid])
   
    b=mid-1;
   
    else
   
    i=mid+1;
   
  }
 }
return 0;
}
