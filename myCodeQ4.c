#include<stdio.h>
#include<string.h>
   int main(){
      int i,j,n;
      char str[25][25],s[25];
      n = 3;
      printf("\nEnter your three strings:\n");
      for(i = 0; i<n; i++){
         scanf("%s", str[i]);
     }
     for(i = 0; i<n; i++){
        for(j = i+1; j<n; j++){
           if(strcmp(str[i], str[j])>0){
              strcpy(s, str[i]);
              strcpy(str[i], str[j]);
              strcpy(str[j], s);
           }
        }
     }
     printf("\nThe strings sorted in order:\n");
     for(i=0; i<n; i++){
        printf("%s\n", str[i]);
     }
  }
  
