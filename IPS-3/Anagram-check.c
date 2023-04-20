// Anagram checker
#include <stdio.h>
#include <string.h>

char* sort(char* array) {
  int i,j;
  char tmp;

  int n = strlen(array);
  for (i=0;i<n-1;i++) {
     for (j=i+1;j<n;j++) {
         if (array[i]>array[j]) {
             tmp = array[j];
             array[j]=array[i];
             array[i]=tmp;
         }
     }
  }
return array;
}

int main() {
  char a[64];
  char b[64];
  scanf("%s",a);
  scanf("%s",b);
  printf("%s",sort(a));
  printf("\n");
  printf("%s",sort(b));
  printf("\n");

  if (strcmp(sort(a),sort(b))==0) printf("Anagrams");
  else printf("Not Anagrams");
  return 0;
}
