// check if number is positive ,negative or zero;
/*#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter a number:"<<endl;
    cin>>N;
    if(N>0){
        cout<<"the number is positive";

    }
    else if(N<0){
        cout<<"number is negative";
    }
    else{
        cout<<"number is zero";
    }
    return 0;
}*/


//check if number is even or odd;
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(n%2==0){
        cout<<"the number is even"; 
    }
    else{
        cout<<"the number is odd";
    }
    return 0;
}*/

//check if number is divisible by both 3 and 5
/*#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter the number:";
    cin>>N;
    if(N%3==0 && N%5==0){
        cout<<"number is divisible by both 3 and 5";
    }
    else{
        cout<<"number is not divisible by both";
    }
    return 0;
}*/
//take three nuber and print larger one
/*#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number:";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"a is larger than two number";
    }
    else if(b>=a && b>=c){
        cout<<"b is greater than two number";
    }
    else{
        cout<<"c is greater than two number";
    }
return 0;
}*/
//take a character and  check if its vowel and consonant;
/*#include<iostream>
#include<string>
using namespace std;

int main(){
    char a;
    cout<<"enter the character:";
    cin>>a;
    if(a=='a' ||a=='A' ||a=='e' ||a=='E' ||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
        cout<<"the character is vowel";

    }
    else{
        cout<<"the number is consonant";
    }
return 0;
}*/

//take a character and check its upper,lower,digit or special character
/*#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the character:";
    cin>>a;
    if(a>='A' && a<='Z'){
        cout<<"the character is uppercase";
    }
    else if(a>='a' && a<='z'){
        cout<<"the character is lower case";
    }
    else if(a>='0'&& a<='9'){
        cout<<"the character is digit";
    }
    else {
        cout<<"the character is special";
    }
    return 0;
}*/
// input three sides of triangle and check whether is valid or not;
/*#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the sides of a triangle:";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"the triangle is valid";
    }
    else{
        cout<<"the triangle is invalid";
    }
    return 0;
}*/


// check whether a valid triangle is equilateral,
/*#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the sides of a triangle:";
    cin>>a>>b>>c;{
    if(a+b>c && a+c>b && b+c>a){
        cout<<"the triangle is valid"<<endl;
    }
    else{
        cout<<"the triangle is invalid"<<endl;
    }
}
    if(a==b && b==c && a==c){
        cout<<"the triangle is equilateral"<<endl;
    }
    else if(a!=b && b!=c && a!=c){
cout<<"the triangle is scalene"<<endl;
    }
    else{
        cout<<"the triangle is isosceles triangle"<<endl;
        
    }
    return 0;}*/

    //check if one out of two number is multiple of other;
    /*#include<iostream>
    using namespace std;
    int main(){
        int n,m;
        cout<<"enter the numbers:"<<endl;
        cin>>n>>m;
        if(n%m==0 ){
            cout<<"the number is multiple m"<<endl;
        }
        else if(m%n==0){
            cout<<"the number is multiple n"<<endl;
        }
        else{
            cout<<"the number is not the multiple of other"<<endl;
        }
    }*/
// take a hour of a day and print greeting
    /*#include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter the number between 0 to 23:";
        cin>>n;
        if(n<12){
            cout<<"GOOD MORNING!"<<endl;
        }
        else if(n>=12 && n<16){
            cout<<"GOOD AFTER NOON"<<endl;
        }
        else if(n>=16 && n<20){
            cout<<"GOOD EVENING"<<endl;
        }
        else{
            cout<<"GOOD NIGHT"<<endl;
        }
        return 0;
    }*/

    //check two numbers and tell both are true ,both are odd or one is odd or
    /*#include<iostream>
    using namespace std;
    int main(){
        int n,m;
        cout<<"enter the number :"<<endl;
        cin>>n>>m;
        if(n%2==0 && m%2==0){
            cout<<"both are even"<<endl;
        }
        else if(n%2!=0 && m%2!=0){
            cout<<"both number are odd"<<endl;
        }
        else{
            cout<<"one is even and one is odd"<<endl;
        }
        return 0;
    }*/

    //take an alphabet charactel and check if it lie between a to m and n to z;

   /* #include<iostream>
    using namespace std;
    int main(){
        char a;
        cout<<"enter the character:"<<endl;
        cin>>a;
        if(a>='A' && a<='M'){
cout<<"it lies between A to M"<<endl;
        }
        else if(a>='a' && a<='m'){
            cout<<"it lies between a to m"<<endl;
        }
        else if(a>='n' && a<='z'){
            cout<<"it lies between n to z"<<endl;
        }
        else {
            cout<<"it lies between N to Z"<<endl;
        }
        return 0;
    }*/

    //

    