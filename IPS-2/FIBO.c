//fibonacci series
#include <stdio.h>
int fibo(int num);
int main(){
    int n;
    scanf("%d",&n);
    fibo(n);
    return 0;
}
int fibo(int num){
    int n1=-1;
    int n2=1;
    int n3;
    int num1=-1;
    int num2=1;
    int num3;
    int i;
    int c;
    int s1=0;
    int s2=0;
    for (i=1;i<100;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if (n3==num){
            c=i;
        }
    }
    int j;
    for (j=0;j<c;j++){
        num3=num1+num2;
        num1=num2;
        num2=num3;
        if (j%2==0){
            s2+=num3;
        }
        else {
            s1+=num3;
        }
        if (j==c-1){
            printf("%d",num3);
        
        }
        else{
            printf("%d, ",num3);
        }
    
    }
    printf("\n%d",s1);
    printf("\n%d",s2);
    
    return 0;
}
