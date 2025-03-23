// Your code here...
#include<stdio.h>
void frequency(int arr[],int N){
    int visited[N];
    int count =1;
    int i,j;
    for(i=0;i<N;i++){
        visited[i]=0;
    }
    for(i=0;i<N;i++){
        if(visited[i]==1){
            continue;
        }
        //int count=1;
        for(j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }

        }
    }
    printf("%d | %d\n",arr[i],count);
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }
    frequency(arr,n);
    return 0;
}