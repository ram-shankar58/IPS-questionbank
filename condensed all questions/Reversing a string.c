//REVERSING A STRING
#include <stdio.h>
#include <string.h>
char *reverse(char *str1){
    int i=0;
    int len=strlen(str1);         //initializing length
    char revstr[len];
    strcpy(revstr,str1);       //copying the str1
    int c=0;
    for(i=len-1;i>=0;i--){
        str1[c]=revstr[i];
        ++c;
    
    }
    return str1;
}


int main(){
    char str1[9];
    fgets(str1,sizeof(str1),stdin);     //getting input from user
    reverse(str1);   //function call
    fputs(str1,stdout);  //printing the output
    return 0;
}
