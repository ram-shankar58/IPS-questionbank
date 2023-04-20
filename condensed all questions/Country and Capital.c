//COUNTRY AND CAPITAL
#include <stdio.h>
#include <string.h>
char*cap(char*inp){
    int len=strlen(inp);
    if (strcmp(inp,"India\n")==0){
        strcpy(inp,"New Delhi\n");
    }
    else if (strcmp(inp,"Australia\n")==0){
        strcpy(inp,"Canberra\n");
    }
    else if (strcmp(inp,"Bangladesh\n")==0){
        strcpy(inp,"Dhaka\n");
    }
    else if (strcmp(inp,"Bhutan\n")==0){
        strcpy(inp,"Thimpu\n");
    }
    else if (strcmp(inp,"Canada\n")==0){
        strcpy(inp,"Ottawa\n");
    }
    else if (strcmp(inp,"China\n")==0){
        strcpy(inp,"Beijing\n");
    }
    else if (strcmp(inp,"Japan\n")==0){
        strcpy(inp,"Tokyo\n");
    }
    return inp;
    
}

int main(){
    char inp[100];
    fgets(inp,sizeof(inp),stdin);
    while (strcmp(inp,"End")!=0){
        cap(inp);
        fputs(inp,stdout);
        fgets(inp,sizeof(inp),stdin);
    }
    return 0;
}
