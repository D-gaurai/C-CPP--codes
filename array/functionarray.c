/*#include<stdio.h>
void fun(int x[]){
    x[0] = 109;
    return;
}
int main(){
    int arr[2] = {2,9};
    printf("%d %d\n", arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n", arr[0],arr[1]);
    return 0;
}*/

//swap two number in a array
#include<stdio.h>
void fun(int x[]){
    int temp = x[0];
    x[0] = x[1];
    x[1]= temp;
    return;
}
int main(){
    int arr[2] = {2,9};
    printf("%d %d\n", arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n", arr[0],arr[1]);
    return 0;
}
