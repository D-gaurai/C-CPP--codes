#include<stdio.h>
int main(){
    int arr[ ]={12,5,0,1,4,6,9,8,4,2,11,10};
    int x=24;
    int totaltriplets=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    totaltriplets++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }

            }
        }
    }
    printf("%d ",n);
    return 0;
}