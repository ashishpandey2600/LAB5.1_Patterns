#include<stdio.h>
int main()
{           /* Program for printing 




              1
             232
            34543
           4567654
            34543
             232
              1






*/
    
    for(int i=1;i<=4;i++)
    {
       for(int k=4-i;k>=1;k--)//loop for prnting spaces upper triangle
       {
         printf(" ");
       }
       for(int j=i;j<=2*i-1;j++) //loop for printing number of upper half  triangle
       {
         printf("%d",j);
       }
       for(int l=2*(i-1);l>i-1;l--)//loop for printing right side triangle
       {
         printf("%d",l);
       }
       printf("\n");
    }
    for(int i=3;i>=1;i--)
    {
      for(int k=4-i;k>=1;k--)//loop for spaces
      {
        printf(" ");
      }
      for(int j=i;j<=2*i-1;j++)//loop for number triangle left side
      {
        printf("%d",j);
      }
      for(int l=2*(i-1);l>=i;l--)//loop for number triangle right side 
      {if(l>1){            //if statement for not printing 1
        printf("%d",l);}
        
      }
      
      printf("\n");
     }



    return 0;
}