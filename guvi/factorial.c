#include<stdio.h>
long long factorial (int n) {
    if(n<0){
        return -1;
    }
    long long result = 1;
    for(int i =1;i<=n;++i){
          result *= i;
    }
    return result;
}
int main(){
    int input_num;
    if(scanf("%d", &input_num)==1){
        long long result = factorial(input_num);
        if(result == -1) {
            printf("invalid input(negative number)\n");
        }
        else{
            printf("%11d", result);
        }
    }
return 0;
}