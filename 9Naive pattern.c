#include<stdio.h>
#include<string.h>

void search(char* pat, char* txt)
{
    int M = strlen(pat),i,j;
    int N = strlen(txt);
   
    for(i=0;i<=N-M;i++)
     {
      for(j=0;j<M;j++)
          if(txt[i+j] != pat[j])
            break;
      if(j == M) 
         printf("Pattern found at index %d \n",i);
    }
}

int main()
{
   char txt[]="AABAACAADAABAAABAA";
   char pat[] = "AABA";
   search(pat, txt);
   return 0;
}
