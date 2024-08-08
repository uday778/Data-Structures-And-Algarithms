#include<bits\stdc++.h>
using namespace std;
bool checkPlaindrome(int i, string &set){
    if(i >= set.size()/2) {
        return true ;
        }

    if(set[i] != set[set.size()-i-1]) return false ;
    return checkPlaindrome(i+1,set);
    
    



}

int main(){
    string set = "MADhAM";
    cout<<checkPlaindrome(0,set);


    return 0;

}