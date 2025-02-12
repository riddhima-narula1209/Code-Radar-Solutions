// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
        printf("Vowel");
    }
    else if(isalpha(n)){
        printf("Consonant");
    }
    else if(isdigit(n)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;

    
}