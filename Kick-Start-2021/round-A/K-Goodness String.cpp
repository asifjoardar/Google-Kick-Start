#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
    ll t,l;
    cin>>t;
    for(l=1;l<=t;l++){
        ll i,j,n,k,count=0,ans;
        string s;
        cin>>n>>k>>s;
        for(i=0,j=n-1;i<(n/2);i++,j--){
            if(s[i]!=s[j]){
                count++;
            }
        }
        ans=abs(k-count);
        printf("Case #%lld: %lld\n",l,ans);
    }
    return 0;
}
