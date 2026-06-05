/*#include <stdio.h>

int main() {
    int file_data = 2;
    int new_file_data = 202;

    int *file_ptr = &file_data;
    int **file_ref_ptr = &file_ptr;

    printf("Original file data: %d\n", **file_ref_ptr);

    *file_ref_ptr = &new_file_data;

    printf("New file data after transfer: %d\n", **file_ref_ptr);

    return 0;
}*/
#include <stdio.h>
int main() {
    int N;
    int count=0;
    scanf("%d",N);
    for(int i=1;i<=N;i++){
        if(N%i==0){
            count++;
        }
    }
    if(count>2){
        printf("no");
    }
    else{
        printf("yes");
    }
    return 0;
   
}