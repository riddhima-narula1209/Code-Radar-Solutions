// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i,a=N,b=N;
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(a<arr[i]){
            a=arr[i];
        }
        else if(b>arr[i]){
            b=arr[i];
        }
        
    }
    printf("%d ",a);
    printf("%d",b);
    return 0;
}