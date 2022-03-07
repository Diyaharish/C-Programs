#include<stdio.h>
void read(int [],int);
void qsort(int [] , int , int );
int partition(int [] , int , int );
void swap(int* , int * );
void display(int [],int);
void main()
{
  int n , i, a[100] ;
  printf("Enter the no: of elements to be sorted : \n " );
  scanf("%d",&n);
  read(a,n);
  qsort(a,0,(n-1));
  display(a,n);
  
}
void read(int x[],int n)
{ int i;
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
}
 
void qsort(int a[] , int lb , int ub )
{ int start;
  if(lb<ub)
  {
    int start = partition(a,lb,ub);
    qsort(a,lb,(start-1));
    qsort(a,(start+1),ub);
  }
}


int partition(int a [], int lb , int ub )
{
   int key = a[lb];
   int i = (lb+1);
    int j = ub ;
  do
  {
    while(a[i]<key && i < j )
         i++;
    while(a[j]>key&& j>lb)
         j--;
    if (i<j)
      swap(&a[i],&a[j]);
   } while(i<j);
  swap(&a[lb],&a[j]);
    return(j);
}

void swap(int *p, int *q)
{
  int t ;
  t = *p;
  *p = *q;
  *q= t ;
}
void display(int x[],int n)
{
    printf("Sorted array is \n " );
  for(int i=0;i<n;i++)
  {
    printf("\n%d",x[i]);
  }
}

  
