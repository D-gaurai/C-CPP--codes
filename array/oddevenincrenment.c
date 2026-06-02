/*#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    for(int i=0; i<=6;i++){
        if(i%2!=0) arr[i]*=2;
        
        else arr[i]+=10;
        }
        for(int i=0;i<=6;i++){
            printf("%d ",arr[i]);
        }
        return 0;
    }*/

    //find the difference between the sum of element at even inex to the sum of element at odd index

    /*#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumeven = 0;
    int sumodd = 0;
    for(int i=0; i<=6;i++){
        if(i%2!=0){
            sumeven += arr[i];
        }
        else {
            sumodd += arr[i];
        }
    }
        int res = sumeven - sumodd;
        printf("%d\n", res);
        //printf("/n");
        printf("%d\n",sumodd);
        printf("%d\n",sumeven);
        
        return 0;
    }*/

    #include<stdio.h>
    int main(){
        int i;
        int sumodd=0;
        int sumeven=0;
        int arr[7]= {23,34,67,34,98,56,34};
        for(i=0;i<=6;i++){
            if(i%2!=0){
                sumeven +=arr[i];
            }
            else{
                sumodd +=arr[i];
            }
        
        }
         int res= sumeven*sumodd;
            printf("%d\n",res);
            printf("%d\n",sumodd);
            printf("%d\n",sumeven);

            return 0;
    }

