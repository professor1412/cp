#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      int mini=min(a*b,a+c);
      cout<<mini<<endl;
      

   }
   return 0;
}