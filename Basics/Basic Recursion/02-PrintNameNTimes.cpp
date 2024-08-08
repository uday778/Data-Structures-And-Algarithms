#include <bits/stdc++.h>
using namespace std;


void f( int i, int N )
{
   if(i>N) return;
 cout<<"Uday"<<endl;
   f( i+1,N );
}
main()
{
  int n;
  cin>>n;
  f(1,n);
}


