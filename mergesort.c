#include <stdio.h>
int simplemerge(int [],int,int,int);
void merge(int [],int,int);
void display(int [],int );
void main()
{
 int n,i;
 int a[100],top=0,bot=n,t;
 printf("Enter the no. of elements:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 merge(a,0,n-1);
 display(a,n);
 
}

int simplemerge(int x[],int f,int s,int t)
{
 int k=0,i,j,temp[100];
 i=f;
 j=s;
while(i<s &&j<=t)
{

 if(x[i]<x[j])
 temp[k++]=x[i++];
 else
 temp[k++]=x[j++];
}
 while(i<s)
 {
 temp[k++]=x[i++];
 }
 while(j<=t)
 temp[k++]=x[j++];

 for(i=f,j=0;j<k;) 
 {
  x[i++]=temp[j++];
 }
return 0;
}

void merge(int x[],int t,int b)
{
 int mid;
 if(t<b)
{
  mid=(t+b)/2;
  merge(x,t,mid);
  merge(x,mid+1,b);
  simplemerge(x,t,mid+1,b);
}

}
void display(int x[],int n)
{
 int i;
 for(i=0;i<n;i++)
 printf("\n %d ",x[i]);
}

