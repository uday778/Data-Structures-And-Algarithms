#include<bits/stdc++.h>
using namespace std;



void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void selection_sort(int arr[],int n){
    // step 1 find the minimum in 
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini= j;
            }
        } 
        //step 2
        swap(arr[i],arr[mini]);
    }

   

}


int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    print(arr,n);

    return 0;
}