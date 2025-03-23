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
    int largest=arr[0];
    int secondlargest=arr[0];
    for(i=0;i<N;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
        else{
            printf("-1");
        }
    }
    printf("%d",arr[i]);
    return 0;
}