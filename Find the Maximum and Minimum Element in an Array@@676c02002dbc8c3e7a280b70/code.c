// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i;
    int arr[N];

    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0],b=arr[0];
    for(i=1;i<N;i++){
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