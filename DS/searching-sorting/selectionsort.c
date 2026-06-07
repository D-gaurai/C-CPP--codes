#include<stdio.h>
int main(){
    //int a[10];
    int p,s,index,temp,min;
    int a[]={67,34,18,5,29,2};
   // printf("enter the range:");
   // scanf("%d",&n);
   //   printf("enter %d numbers:\n",n);
   /* for(p=0;p<n;p++){
        scanf("%d",a[p]);
    }*/
        for(p=0;p<5;p++)
        {
            min=a[p];
            index=p;
            for(s=p+1;s<6;s++){
                if(min>a[s])
                {
                    min=a[s];
                    index=s;
                }
            }
            temp=a[p];
            a[p]=a[index];
            a[index]=temp;
        }
        printf("after sorting:\n");
        for(p=0;p<5;p++){
            printf("%d ,",a[p]);
        }
    printf("\n");
    return 0;
}