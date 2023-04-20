#include <stdio.h>

void main() {
  int a,b;
  int i;
  printf("Enter lower limit: ");
  scanf("%d",&a);
  printf("Enter upper limit: ");
  scanf("%d",&b);
  for (i=a;i<=b;i++) {
    int arm=0,ld,tmp=i;
    while (tmp>0) {
      ld = tmp%10;
      arm += ld*ld*ld;
      tmp/=10;
    }
    if (arm==i) printf("%d\n",i);
  }
}
