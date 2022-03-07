#include<stdio.h>
typedef struct
{
  int coef;
  int exp_x ;
  int exp_y;
  int exp_z;
} term;

int main()
{
  int i,n ;
  printf("Enter the no: of terms: ");
  scanf("%d",&n);
   term poly[n];
  for(i=0;i<n;i++)
  {
    printf("Enter the coefficients of the term %d :", (i+1));
    scanf("%d",&poly[i].coef);

    printf("Enter the exponent of the x in term %d : ", (i+1));
    scanf("%d",&poly[i].exp_x);
    printf("Enter the exponent of the y in term %d : ", (i+1));
    scanf("%d",&poly[i].exp_y);
    printf("Enter the exponent of the z term  %d : ", (i+1));
    scanf("%d",&poly[i].exp_z);
  }
  printf("Polynomial :\n");
  for(i=0;i<n;i++)
  {
   printf("%dx^%d y^%d z^%d",poly[i].coef,poly[i].exp_x,poly[i].exp_y,poly[i].exp_z);
   if(i!=(n-1))
     printf("+");
  }
  return 0 ;
}
