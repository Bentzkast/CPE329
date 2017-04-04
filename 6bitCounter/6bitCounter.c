#include<stdio.h>


int main(int argc, char *argv[])
{
   printf("D5 D4 D3 D2 D1 D0\n");
   printf("-----------------\n");
   int a,b,c,d,e,f;

   for(a = 0; a < 2;a++)
   {
      for(b = 0; b < 2;b++)
      {
         for(c = 0; c < 2;c++)
         {
            for(d = 0; d < 2;d++)
            {
               for(e = 0;e < 2;e++)
               {
                  for(f = 0;f < 2;f++)
                  {
                     printf("%d  %d  %d  %d  %d  %d\n",a,b,c,d,e,f);
                  }
               }
            }
         }
      }
   }
   printf("0  0  0  0  0  0\n");
   return 0;
}
