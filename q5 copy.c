#include<stdio.h>
int main()
{
    /*  To print the pattern


    *******
    ******
    *****
    ****
    ***
    **
    *
    

    
    */
   for(int i=7;i>=1;i--)
   {
       for(int j=i;j>=1;j--)
       {
           printf("*");
       }
       printf("\n");
   }
     
    return 0;
}