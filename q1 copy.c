#include<stdio.h>
int main()
{  /*Print the following pattern
 
      1   
    2   2   
  3   3   3   
4   4   4   4   
  3   3   3   
    2   2   
      1   


*/

for(int i=1;i<5;i++)//loop for upper triangle 1 to 4;
{
    for(int k=4-i;k>=1;k--)//loop for spaces
    {
        printf("  ");
    }
    for(int j=i;j>=1;j--)//loop for number printing
    {
        printf("%d   ",i);
    }
    printf("\n");
}
for(int i=3;i>=1;i--)
{
    for(int k=4-i;k>=1;k--)
    {
        printf("  ");
    }
    for(int j=i;j>=1;j--)
    {
        printf("%d   ",i);
    }
    printf("\n");

}




    return 0;
}
