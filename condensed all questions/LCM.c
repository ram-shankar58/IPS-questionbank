//LCM
#include <stdio.h>
int lcm(int a,int b);
int main(){
    int n1;
    int n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    lcm(n1,n2);
}
int lcm(int a, int b){
    int c=b;
    int ans;
    while (true){
        if ( (c%a==0) && (c%b==0)){
            ans=c;
            break;
        
        }
        c+=1;
        
    }
    printf("%d",ans);
    
}
