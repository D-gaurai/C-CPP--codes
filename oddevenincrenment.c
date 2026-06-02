
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

