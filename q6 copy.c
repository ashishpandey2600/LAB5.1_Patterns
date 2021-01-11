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


    */



   for(int i=1;i<=7;i++)//loop for rows
   {
       for(int k=7-i;k>=1;k--){   //loop for spaces
          printf(" ");  
       }
       for(int j=1;j<=i;j++)    //loop for printing '*'
       {
           printf("*");
       }
        printf("\n");  // going to next line after every sequences of star '*' is printed
   }
     
    return 0;
}