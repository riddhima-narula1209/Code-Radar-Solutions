// Your code here...
#include<stdio.h>
int main(){
    char n;
    scanf("%d",&n);
    if(n>=65 && n<=90){
        printf("Uppercase");
    }
    else if(n>=97 && n<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}