#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    int c[3][3];
    for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      {
      printf("array element[%d][%d]->",i,j);
      scanf("%d",&a[i][j]);

      }
    }
      

      printf("\nenter the second matrix array\n");


      for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      {
                printf("array element[%d][%d]->",i,j);
        scanf("%d",&b[i][j]);

      }
    }

   

       printf("\nthe additon of two array \n");

    
        for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      { 
             c[i][j]= a[i][j]+b[i][j];

   printf("%d\t",c[i][j]);

  
      }
      printf("\n");
    }

    getch();
}