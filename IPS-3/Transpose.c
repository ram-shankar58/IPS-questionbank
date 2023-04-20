/*#include <stdio.h>

void main() {
  int row_input,col_input;
  int i,j;
  printf("Enter number of rows: ");
  scanf("%d",&row_input);
  printf("Enter number of columns: ");
  scanf("%d",&col_input);

  int a[64][64];
  int b[64][64];
  for(i=0;i<row_input;i++) {
    for(j=0;j<col_input;j++) {
      scanf("%d",&a[i][j]);
    }
  }

  printf("Input matrix: \n");
  for(i=0;i<row_input;i++) {
    for (j=0;j<col_input;j++) {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }

  for(i=0;i<col_input;i++) {
    for (j=0;j<row_input;j++) {
      b[i][j] = a[j][i];
    }
  }

  printf("Output matrix: \n");
  for(i=0;i<col_input;i++) {
    for (j=0;j<row_input;j++) {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
}*/
#include <stdio.h>
int tran(int mat[64][64],int n1,int n2){
    int b[n1][n2];
    int i;
    int j;
    for (i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            b[i][j]=mat[j][i];
        }
    }
    printf ("Transpose matrix:\n");
     for (i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
     }
    
}

int main(){
    int n1;
    scanf("%d",&n1);
    int n2;
    scanf("%d",&n2);
    int mat[64][64];
    int i,j;
    for (i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    tran(mat,n1,n2);
    
}
