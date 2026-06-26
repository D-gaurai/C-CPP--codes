//wave print of a matrix
#include<stdio.h>
int main(){
    int m;
    printf("enter the no of rows of ist matrix :");
    scanf("%d",&m);
    int n;
     printf("enter the no of columns of ist matrix :");
    scanf("%d",&n);
    int a[m][n];
    printf("\nenter elements of ist matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //wave print
    printf("\n");
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
