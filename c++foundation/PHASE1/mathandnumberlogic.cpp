//take 3 digit number and check if all digits are distinct
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the 3 digit number:"<<endl;
    cin>>n;
    
        int rem1 =n%10;
        int rem2 =n/10%10;
        int rem3 =n/100%10;

    
    if(rem1!=rem2 && rem2!=rem3 && rem1!=rem3){
        cout<<"all the digits are distinct"<<endl;
    }
    else{
        cout<<"all the digits are  not distinct"<<endl;
    }
    return 0;
}*/

//take a 3 digit number and check the middle digit is largest smalest or neither of them
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the 3 digit number"<<endl;
    cin>>n;
    int rem1=n%10;
    int rem2=n/10%10;
    int rem3=n/100%10;
    if(rem2>rem1 && rem2>rem3){
        cout<<"middle digit is largest"<<endl;
    }
    else if(rem2<rem1 && rem2<rem3){
        cout<<"middle digit is smallest"<<endl;
    }
    else{
        cout<<"all digit are equal"<<endl;
    }
    return 0;
}*/


// take a 4 digit number and check if first and last digit are equal
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the 4 digit number"<<endl;
    cin>>n;
    int rem1=n%10;
    int rem2=n/10%10;
    int rem3=n/100%10;
    int rem4=n/1000%10;
    if(rem1==rem4){
        cout<<"the first and last digit is equal"<<endl;
    }
    else{
        cout<<"the first and last digit are not equal"<<endl;
    }
    return 0;}*/

    //check whether a number is single digit double digit and multi digit

    /*#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the number :"<<endl;
        cin>>n;
        if(n<0){
            cout<<"please enter a valid positive number"<<endl;
        }
        else if(n<10){
            cout<<"the number is single digit"<<endl;
        }
        else if(n>=10 && n<100){
            cout<<"the number is double digit"<<endl;
        }
        else{
            cout<<"the number is multi digit"<<endl;
        }
    }*/

    //check a number is divisible by 7 or end with 7
    /*#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter a number:"<<endl;
        cin>>n;
        if(n%7==0 && n%10==7){
            cout<<"a number is divisible by 7 or end with 7"<<endl;
        }
        else if(n%7!=0){
            cout<<"the number is  not divisible by 7 but  end with 7"<<endl;
        }
        else if(n%10!=7){
            cout<<"the number is divisible by 7 but not end with 7"<<endl;
        }
        else{
            cout<<"a number is not divisible by 7 or end with 7";
        }
    }*/

    //.​Take coordinates (x, y) and determine which quadrant the point lies in.
    /*#include<iostream>
    using namespace std;
    int main(){
        int x;
        int y;
        cout<<"enter the  X and Y coordinates:";
        cin>>x>>y;
        if(x>0 && y>0){
            cout<<"the point lies in first quardrant"<<endl;
        }
        else if(x<0 && y>0){
            cout<<"the point lies in second quadrant"<<endl;
        }
                else if(x<0 && y<0){
            cout<<"the point lies in third quadrant"<<endl;
        }
                else if(x>0 && y<0){
            cout<<"the point lies in fourth quadrant"<<endl;
        }
        else{
            cout<<"the point lies in origin"<<endl;
        }
    }*/

    //Check if an amount can be evenly divided into 2000, 500, and 100 currency notes

   /* #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the amount:"<<endl;
        cin>>n;
        if(n%2000==0){
            cout<<"the amount can be evenly divided into 2000, 500, and 100 currency notes"<<endl;
        }
        else{
            cout<<"the amount not  evenly divided into 2000, 500, and 100 currency notes";
        }
    }*/

    //9.​Take two angles of a triangle and compute the third angle.
    /*#include<iostream>
    using namespace std;
    int main(){
        int a,b;
    cout<<"enter the angles of triangle"<<endl;
    cin>>a>>b;
    int c=a+b;
    int z=180-c;
    cout<<"the third angle is :"<<z<<endl;

    }*/

    //10.​Check whether a number is a perfect square (without using the square root function).
    /*#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the number :";
        cin>>n;
        int i;
        while(i*i<n){
            i++;
        }
        if(i*i==n){
            cout<<n<<"is the perfect square ="<<i<<endl;
        }
        else{
            cout<< n <<"is not a perfect square";
        }

    }*/
    