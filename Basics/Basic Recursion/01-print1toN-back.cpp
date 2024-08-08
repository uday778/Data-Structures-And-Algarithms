#include <bits/stdc++.h>
using namespace std;


void f( int i, int N )
{
   if(i<1) return;

   f( i-1,N ); 
   cout<<i<<endl;
}
main()
{
  int n;
  cin>>n;
  f(n,n);
}

// backtracking f