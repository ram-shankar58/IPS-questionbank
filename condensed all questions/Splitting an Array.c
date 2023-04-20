//splitting an array based on middle element
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    int i;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    int x=N/2;
    int b[x];
    int c[x];
    int p=0;
    int q=0;
    for (i=0;i<N;i++){
        
        if (i<x){
            b[p]=a[i];
            p++;
        }
        else{
            c[q]=a[i];
            q++;
        }
        
    }
    printf("List 1:\n");
    for (i=0;i<x;i++){
        printf("%d\n",b[i]);
    }
    printf("List 2:\n");
    for (i=0;i<x;i++){
        printf("%d\n",c[i]);
    }
}
