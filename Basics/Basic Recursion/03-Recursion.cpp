#include <bits/stdc++.h>
using namespace std;

// int sum(  int n )
// {
//   if(n==0)return 0;
//   return n+sum(n-1);
// }
// main()
// {
//   int n;
//   cin>>n;
//   cout<<sum(n)<<endl;
// }



/// factorial of N


int sum(  int n )
{
  if(n==1)return 1;
  return n*sum(n-1);
}
main()
{
  int n;
  cin>>n;
  cout<<sum(n)<<endl;
}

