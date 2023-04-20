//To print the largest element in an array
#include <stdio.h>
int main(){
    int N;
    scanf("%d (N value)",&N);
    int a[N];
    int i;
    int max=0;
    printf("The array:\n");
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);
        if (a[i]>max){
            max=a[i];
        }
    }
    printf("The largest number:\n%d",max);
    
    return 0;
}
