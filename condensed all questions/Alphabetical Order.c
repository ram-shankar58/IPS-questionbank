//NAMES IN ALPHABETICAL ORDER
#include <stdio.h>
#include<string.h>
static int n;
char* alphab(char str[100][100]){
    char name[100];
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (strcmp(str[i],str[j])>0){
                strcpy(name,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],name);
            }
        }
    }
}
int main(){
    scanf("%d",&n);
    char str[100][100];
    int i;
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    alphab(str);
    for (i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    
    return 0;
}
