//MATRIX MULTIPLICATION
#include <stdio.h>
int mul(int n1,int n2,int n3,int a[n1][n2],int b[n2][n3]){
    int i,j,k;
    int c[n1][n3];
    for(i=0;i<n1;i++){
        for (j=0;j<n3;j++){
            c[i][j]=0;
            for (k=0;k<n2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }    
        }
    }
    for(i=0;i<n1;i++){
        for (j=0;j<n3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    int i,j;
    int a[n1][n2];
    int b[n2][n3];
    for (i=0;i<n1;i++){
        for (j=0;j<n2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n2;i++){
        for (j=0;j<n3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    mul(n1,n2,n3,a,b);
}
