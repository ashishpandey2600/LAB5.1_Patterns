#include<stdio.h>
int main()
{
      /*  To print the pattern


        *
        **
        ***
        ****
        *****
        ******
        *******
        ********
    */


   for(int i=1;i<=8;i++)//loop for iteration for loop init
   {
       for(int j=1;j<=i;j++){//loop for printing '*'
       printf("*");}
       printf("\n");

   }
   return 0;
}