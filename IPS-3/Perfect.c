// Sum of digits = number
// 1+2+3 = 6

#include <stdio.h>

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d",&n);
  int i;
  int sum=0;
  for (i=1;i<n;i++) {
    if (n%i==0) sum += i;
  }
  if (sum==n) printf("%d is a perfect number",n);
  else printf("%d is not a perfect number",n);
}
