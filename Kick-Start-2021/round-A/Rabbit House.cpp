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
        ll i,j,r,c,ans=0,ans1=0;
        cin>>r>>c;
        ll a[r][c],b[r][c];
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cin>>a[i][j];
                b[i][j]=a[i][j];
            }
        }
        for(ll p=0;p<500;p++){
            for(i=0;i<r;i++){
                for(j=0;j<c-1;j++){
                    if(a[i][j]>a[i][j+1]){
                        ans+=(a[i][j]-1)-a[i][j+1];
                        a[i][j+1]=a[i][j]-1;
                    }
                    else if(a[i][j]<a[i][j+1]){
                        ans+=(a[i][j+1]-1)-a[i][j];
                        a[i][j]=a[i][j+1]-1;
                    }
                }
            }
            for(j=0;j<c;j++){
                for(i=0;i<r-1;i++){
                    if(a[i][j]>a[i+1][j]){
                        ans+=(a[i][j]-1)-a[i+1][j];
                        a[i+1][j]=a[i][j]-1;
                    }
                    else if(a[i][j]<a[i+1][j]){
                        ans+=(a[i+1][j]-1)-a[i][j];
                        a[i][j]=a[i+1][j]-1;
                    }
                }
            }
        }
        printf("Case #%lld: %lld\n",l,ans);
    }
    return 0;
}
