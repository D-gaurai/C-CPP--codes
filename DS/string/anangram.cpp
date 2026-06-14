//anangram in a string
#include<iostream>
#include<string>
using namespace std;
bool anangram(string s1,string s2)
{
    int count[256]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
    }
    for(int i=0;i<s2.length();i++)
    {
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    cout<<"enter the first string: ";
    cin>>s1;
    cout<<"enter the second string: ";
    cin>>s2;
    if(anangram(s1,s2))
    {
        cout<<"the two strings are anangram";
    }
    else
    {
        cout<<"the two strings are not anangram";
    }
}
