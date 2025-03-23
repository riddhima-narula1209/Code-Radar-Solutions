// Your code here...
#include<stdio.h>
void sumdigits(int r,int n,int sum=0){
    //int sum=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main(){
    int N;
    scanf("%d",&N);
    int i;
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        printf("%d ",sumdigits(n,r,sum));
    }
    return 0;
}