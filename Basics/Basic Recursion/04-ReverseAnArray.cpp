#include <bits\stdc++.h>
using namespace std;



void reversefunc(int i, int arr[],int n){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    reversefunc(i+1,arr,n);
    
}


int main()
{
   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reversefunc(0,arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<endl;

    return 0;
}