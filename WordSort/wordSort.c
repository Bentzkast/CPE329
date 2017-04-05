#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int cmpfunc(const void *a, const void *b)
{
   return strcmp(*((const char**)a), *((const char**)b));
}

void getWord(int size)
{
   char **array;
   char temp[MAX];
   int i = 0;
   array = malloc(MAX * size);
   if(array == NULL)
   {
      perror(NULL);
      exit(EXIT_FAILURE);
   }
   for(i = 0;i<size;i++)
   {
      scanf("%s ",temp);
      array[i] = malloc(sizeof(char) * strlen(temp) + 1);
      if(array[i] == NULL)
      {
         perror(NULL);
         exit(EXIT_FAILURE);
      }
      strcpy(array[i],temp);
   }
   qsort(array,size,sizeof(char*),cmpfunc);

   printf("Sorted List\n");
   for(i = 0; i < size;i++)
   {
      printf("%s\n",array[i]);
      free(array[i]);
   }
   free(array);
}
int main(void)
{
   int size;

   scanf(" %d",&size);
   getWord(size);

   return 0;
}
