//To sort an array in ascending order
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int ar[num];
    int i;
    for(i=0;i<num;i++){
        scanf("%d",&ar[i]);
    
    }
    int temp,k,j;
    for(k=0;k<num-1;k++){
        for(j=k;j<num;j++){
            if(ar[k]>ar[j]){
               temp=ar[k];
               ar[k]=ar[j];
               ar[j]=temp;
               
            }
        }
    }
    for(i=0;i<num;i++){
        printf("%d\n",ar[i]);
        
    }
    return 0;
}
