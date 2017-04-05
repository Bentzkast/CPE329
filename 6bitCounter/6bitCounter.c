#include<stdio.h>


int main(int argc, char *argv[])
{
   printf("D5 D4 D3 D2 D1 D0\n");
   printf("-----------------\n");
   int i,j;

   for(i = 0; i < 64;i++)
   {
      for(j = 0; j < 6;j++)
      {
         printf("%d  ",(i >> (5 - j)) & 1);
      }
      printf("\n");
   }
   printf("0  0  0  0  0  0\n");
   return 0;
}
