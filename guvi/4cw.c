#include<stdio.h>
int main(){
int totalstudents =7;
int attendeance [7];

for (int i=0;i<totalstudents;i++)

{
     printf("Enter attendeance of student %d: ",i+1);
      scanf("%d",&attendeance[i]);
    }
int *attptr=attendeance;
int totalattendeance=0;
printf("Student Attendeance Records:");


for(int i=0;i<totalstudents;i++)

{
     printf("student %d: %d\n", i+1," (attptr+i)); 
        totalattendeance+=*(attptr+i));

} float avgattendeance-totalattendeance/totalstudents; printf("Average Attendeance: %.2f\n", avgattendeance);

printf("Student's with Low Attendeance (<75): \n");

for(int i=0;i<totalstudents;i++)

{

if(*(attptr+i)<75)

{ printf("Student %d: %d\n", i+1,*(attptr+i));

}

}

return 0;
}
