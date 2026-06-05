//This program rotates an array to the left by one position. The first element of the array is moved to the end, and all other elements are shifted one position to the left. The time complexity of this algorithm is O(n) because we need to iterate through the array once to perform the rotation. The space complexity for the algorithm is O(1) since we are using only a constant amount of extra space for the temporary variable. However, the space complexity for the input array is O(n) since we need to store n elements in the array.
/*#include<bits/stdc++.h>
using namespace std;
vector<int> rotatearray(vector<int>&arr,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=rotatearray(arr,n);
    cout<<"The rotated array is: ";
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}*/
//time complexity: O(n)
//space complexity for the algorithium: O(1)
//space complexity for the input array: O(n)

//...........................................................................

//This program rotates an array to the left by d positions.
//  The first d elements of the array are moved to the end,
//  and all other elements are shifted d positions to the left.
//  The time complexity of this algorithm is O(n) because we need
//  to iterate through the array once to perform the rotation. 
// The space complexity for the algorithm is O(d) since we are
//  using a temporary array of size d to store the first d elements.
//  However, the space complexity for the input array is O(n) since
//  we need to store n elements in the array.
/*#include<bits/stdc++.h>
using namespace std;
void leftrotatearray(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}
int main(){
    int n,d;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of positions to rotate: ";
    cin>>d;
    leftrotatearray(arr,n,d);
    cout<<"The rotated array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
//time complexity: O(2n)
//space complexity for the algorithium: O(1)
#include<bits/stdc++.h>
using namespace std;
void leftrotatearray(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n,d;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of positions to rotate: ";
    cin>>d;
    leftrotatearray(arr,n,d);
    cout<<"The rotated array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}