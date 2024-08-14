#include<iostream>
#include <limits.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

  
        int ans=0;
        while(x)
        {
            int rem=x%10;
            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) 
                return 0; 
            ans=ans*10+rem;
            x/=10;
        }
        cout<<ans<<endl;
        return 0;
    
}