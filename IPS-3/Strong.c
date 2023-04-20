// Sum of factorial of digits = n
// 145 = 1! + 4! + 5!
#include <stdio.h>

int factorial(int n) {
  int i,fact=1;
  for (i=1;i<=n;i++) fact *= i;
  return fact;
}

int main() {
  int ll,ul;
  printf("\nEnter lower, upper limits: ");
  scanf("%d,%d",&ll,&ul);
  int i;
  int tmp;
  for (i=ll;i<=ul;i++) {
    int sum=0;
    tmp = i;
    while (tmp>0) {
      sum += factorial(tmp%10);
      tmp /= 10;
    }
    if (sum==i) printf("%d is a strong number\n",i);
  }
  return 0;
}
