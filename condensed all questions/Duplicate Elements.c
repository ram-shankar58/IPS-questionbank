//Printing and removing duplicate elements
#include <stdio.h>
int main(){
    int n,i,j,k,p;
    scanf("%d",&n);
    int a[n],b[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (i==n-1){
            printf("%d",a[i]);
        }
        else{
            printf("%d, ",a[i]);
        }
    }
    
    for(j=0;j<n-1;j++){
        for(k=j+1;k<n;k++){
            if (a[j]==a[k]){
                printf("\n%d",a[j]);
                for(p=k;p<n-1;p++){
                    a[p]=a[p+1];
                    
                }
                n--;
                k--;
                
            }
            
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        if (i==n-1){
            printf("%d",a[i]);
        }
        else{
            printf("%d, ",a[i]);
        }
    }
    return 0;
    
}
