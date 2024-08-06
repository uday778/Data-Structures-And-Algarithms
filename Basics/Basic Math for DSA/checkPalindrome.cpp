                            
#include <iostream>
using namespace std;

// Function to check if a
// given integer is a palindrome
bool ispalindrome(int x)
{
    if(x<0) return false;
        long long ans = 0;
    int dup=x;
    while (x>0)
    {
        long long rem = x % 10;         
        ans = ans * 10 + rem;
        x /= 10;
    }
    if(dup==ans)return true;
    else return false;
}


int main() {
    int number ;
    cin>>number;
    

    if (ispalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
                            
                        