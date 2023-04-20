//To print array having nos. divisible by 5 and less than 150
#include <stdio.h>
int main(){
    int ar[100];
    int b[100];
    int num;
    int x=0;
    int i;
    int c=0;
    scanf("%d",&num);
    while(num<=150){
        ar[x]=num;
        x++;
        scanf("%d",&num);
    }
    for (i=0;i<x;i++){
        if(ar[i]%5==0){
            b[c]=ar[i];
            printf("%d\n",ar[i]);
            c++;
        }
    }
    return 0;
}
