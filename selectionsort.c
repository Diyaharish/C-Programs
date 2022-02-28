#include <stdio.h>
void read(int[],int);
void selectionsort(int[],int);
void swap(int*,int*);
void display(int[],int);

void main()
{
 int a[100],n;
 printf("Enter the no. of elements:");
 scanf("%d",&n);
 read(a,n);
 selectionsort(a,n);
 display(a,n);
}
void read(int x[],int n)
{
 int i;
 printf("Enter the numbers:");
for (i=0;i<n;i++)
  scanf("%d",&x[i]);

}

void selectionsort(int x[],int n)
{
 int p,c,small,ind;
 for(p=0;p<n-1;p++)
{
  small=x[p];
  ind=p;
  for(c=p+1;c<n;c++)
  {
    if (x[c]<small)
    {
     small=x[c];
     ind=c;
    }
 
 }
 
 swap(&x[p],&x[ind]);
}
}

void swap(int*a,int*b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
}

void display(int x[],int n)
{
 printf("Sorted element= \n");
 for(int i=0;i<n;++i)
  printf("%d \n",x[i]);
}
