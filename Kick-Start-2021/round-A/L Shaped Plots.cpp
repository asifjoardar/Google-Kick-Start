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
        ll i,j,r,c,ans=0,p,q,cnt=0;
        cin>>r>>c;
        ll a[r+1][c+1],danthekebame[r+1][c+2],bamthekedane[r+1][c+2];
        memset(danthekebame,0,sizeof danthekebame);
        memset(bamthekedane,0,sizeof bamthekedane);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                cin>>a[i][j];
                if(a[i][j]==1)
                    danthekebame[i][j]=a[i][j]+danthekebame[i][j-1];
            }
            for(j=c;j>=1;j--){
                if(a[i][j]==1)
                    bamthekedane[i][j]=a[i][j]+bamthekedane[i][j+1];
            }
        }
        for(j=1;j<=c;j++){
            cnt=0;
            for(i=1;i<=r;i++){
                if(a[i][j]==1)
                    cnt++;
                else
                    cnt=0;
                for(p=2;(p<=cnt and (p*2)<=danthekebame[i][j]);p++)
                    ans++;
                for(p=2;(p<=cnt and (p*2)<=bamthekedane[i][j]);p++)
                    ans++;
                for(p=2;(p<=danthekebame[i][j] and (p*2)<=cnt);p++)
                    ans++;
                for(p=2;(p<=bamthekedane[i][j] and (p*2)<=cnt);p++)
                    ans++;
            }
        }
        for(j=1;j<=c;j++){
            cnt=0;
            for(i=r;i>=1;i--){
                if(a[i][j]==1)
                    cnt++;
                else
                    cnt=0;
                for(p=2;(p<=cnt and (p*2)<=danthekebame[i][j]);p++)
                    ans++;
                for(p=2;(p<=cnt and (p*2)<=bamthekedane[i][j]);p++)
                    ans++;
                for(p=2;(p<=danthekebame[i][j] and (p*2)<=cnt);p++)
                    ans++;
                for(p=2;(p<=bamthekedane[i][j] and (p*2)<=cnt);p++)
                    ans++;
            }
        }
        printf("Case #%lld: %lld\n",l,ans);
    }
    return 0;
}
