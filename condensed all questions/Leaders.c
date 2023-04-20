//LEADERS
// A leader element is an element in an array which is greater than all the other elements to its right. Last element of an array is always a leader element.
#include <stdio.h>
static int lead[100];
static int n;
int leaders(int*arr){
    int j,k;
    int flag=0;
    int c=0;
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            
            if (arr[j]<arr[k]){
                flag=1;
            }
        }    
        if (flag==0){
            lead[c]=arr[j];
            c++;
        }
        flag=0;
        
    }
    return c;
}
int main(){
    scanf("%d",&n);
    int i=0;
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b=leaders(arr);
    printf("Leaders are ");
    for(i=0;i<b;i++){
        if (i==b-1){
            printf("%d",lead[i]);
        }
        else{
            printf("%d, ",lead[i]);
        }
    }
    return 0;
}
