#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}