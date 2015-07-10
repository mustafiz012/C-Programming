#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *f1, *f2, *fm;

   char ch, file1[20], file2[20], fileMerged[20];

   printf("File1: \n");
   gets(file1);

   printf("File2: \n");
   gets(file2);

   printf("Merged file: \n");
   gets(fileMerged);

   f1 = fopen(file1,"r");
   f2 = fopen(file2,"r");
   fm = fopen(fileMerged,"w");

   if( f1 == NULL || f2 == NULL || fm == NULL)
   {
      perror("Error ");
      printf("Any key to exit!\n");
      exit(EXIT_FAILURE);
   }

   while( ( ch = fgetc(f1) ) != EOF || ( ch = fgetc(f2) ) != EOF )
      fputc(ch,fm);

   printf("Files merged into %s.\n",fileMerged);

   fclose(f1);
   fclose(f2);
   fclose(fm);

   return 0;
}
