/*#include<iostream>
#include<string>
using namespace std;
//concatenating two strings
int main(){
    string str1,str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    string str3=str1+str2;
    cout<<"The concatenated string is: "<<str3;
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
//find length of the string
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int length=str.length();
    cout<<"The length of the string is: "<<length;
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
//appending a string to another string
int main(){
    string str1,str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    str1.append(str2);
    cout<<"The appended string is: "<<str1;
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
//substr function
int main(){
    string str="Hello World";
    string substr=str.substr(2,3);
    cout<<"The substring is: "<<substr;

}*/
/*#include<iostream>
#include<string>
using namespace std;
//comparing two strings
int main(){
    string str1,str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    if(str1==str2){
        cout<<"The strings are equal.";
    }
    else{
        cout<<"The strings are not equal.";
    }
    return 0;
}*/
/*#include<iostream>
#include<string>
using namespace std;
//compare two strings
int main(){
    string str1="Hello";
    string str2="World";    
    string str3="Hello";
    cout<<"The result of comparing the two strings is: "<<str1.compare(str2)<<endl;
    cout<<"The result of comparing the two strings is: "<<str1.compare(str3);
    return 0;


}*/
/*#include<bits/stdc++.h>
using namespace std;
//print element of stack
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
for(int i=0;i<5;i++){
    cout<<s.top()<<" ";
    s.pop();
}
    return 0;
}*/
//map in c++
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    m["apple"]=1;
    m["banana"]=2;
    m["orange"]=3;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}*/
//file handling in c++
 /*   #include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout("example.txt");
    fout<<"Hello World";
    fout.close();
    ifstream fin("example.txt");
    string str;
    fin>>str;
    cout<<"The content of the file is: "<<str;
    fin.close();
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream file("students.txt");
    file<<"Name: deep\n";
    file.close();
    cout<<"File created successfully."<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file;
    file.open("students.txt",ios::out);
    file<<"welcome to c++ programming";
    file.close();
    file.open("students.txt",ios::in);
    string str;
    while(getline(file,str)){
        cout<<str<<endl;
    }
    file.close();
    return 0;
}
