#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a && c>b) cout<<"STAIR"<<endl;
        else if(b>a&&b>c) cout<<"PEAK"<<endl;
        else cout<<"NONE"<<endl;        
      }
    return 0;
}