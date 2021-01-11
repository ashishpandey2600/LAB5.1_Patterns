#include<stdio.h>
int main()
{
    /*  To print the pattern :-
                                ABCDEFGFEDCBA
                                ABCDEF FEDCBA
                                ABCDE   EDCBA
                                ABCD     DCBA
                                ABC       CBA
                                AB         BA
                                A           A

    breaking  this pattern in 5 parts and coding each of them in sequence manner
                               {first_ loop for aphabets} [A]         
                                    ||
                                    ||
                                    \/ 
                                                    FEDCBA  <---- [c]
                                    ABCDEFG           
                                    ABCDEF    -      FEDCBA <----- [D]
                                    ABCDE    -- -     EDCBA
                                    ABCD    --- --     DCBA
                                    ABC    ---- ---     CBA
                                    AB    ----- ----     BA
                                    A    ------ -----     A
                                          ^       [E]
                                          |         
                                {second loop for spaces}[B]

    */
   for(int i=71;i>=65;i--){ //loop for seven rows

    for(int j=65;j<=i;j++){ //loop for first pattern  [A]
           printf("%c",j);}
           if(i!=71)
           {
               for(int k=70;k>=i;k--) //loop for first triangle space [B]
               printf(" ");
           }
           if(i<=69)
           {
               for(int m=69;m>=i;m--)// loop for the second triangle space [E]
               {
                   printf(" ");
               }
           }
          if(i==71)
           {
               for(int l=70;l>=65;l--) //loop for  alphabet  first line  for [C]
               printf("%c",l);
           }
           else if(i<=70){    //loop for seconf alphabet triangle  for [D]
               for(int l=i;l>=65;l--)
               printf("%c",l);}
           
           
       
       printf("\n");
   
   }
   
      


    return 0;
}