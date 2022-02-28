#include<stdio.h>
void bubblesort(int[],int);
void read(int[],int);
void print(int [],int);
int a[100],n;
void main()
{
printf("How many elements required:");
scanf("%d",&n);
read(a,n);
bubblesort(a,n);
print(a,n);
}

void read(int x[],int n)
{
 int i;
 printf("Enter  %d numbers:",n);
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
void print(int x[],int n)
{
int i;
printf("Sorted Array \n");
for(i=0;i<n;i++)
printf("%d \n",x[i]);
}
