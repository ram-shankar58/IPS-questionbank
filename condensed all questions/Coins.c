//Coins
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    int i;
    int s=0;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if (i<n-1){
            printf("%d, ",ar[i]);
        }
        else{
            printf("%d",ar[i]);
        }
        s+=ar[i];
    }
    printf("\n%d",s);
    return 0;
}
