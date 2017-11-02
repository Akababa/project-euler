#include <bits/stdc++.h>
using namespace std;
#define fst first
#define sec second
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
const ll INF=LLONG_MAX,MOD=1e9+7;

ll powmod(ll a,ll b){
	if(b==0){
		return 1LL;
	}
	if(b%2)
		return (a*powmod((a*a)%MOD,b/2))%MOD;
	else
		return powmod((a*a)%MOD,b/2)%MOD;
}

ll inv(ll k){
	return powmod(k,MOD-2);
}

ll choose(ll n,ll k){
	if(k==0) return 1LL;
	return (((choose(n-1,k-1)*n)%MOD)*inv(k))%MOD;
}

ll c(ll n,ll k){
	ll ans=0;
	ll ch=1;
	for(ll t=0;t<=k;t++){
		ans=(ans+powmod(k-t,n)*ch*powmod(-1,t&1))%MOD;
		ch=(((ch*(n+1-t))%MOD)*inv(t+1))%MOD;
	}
	return (ans%MOD+MOD)%MOD;
}

int main(){
	ios::sync_with_stdio(false);
	ll n,k;cin>>n>>k;
	cout<<c(n,k)<<endl;
	return 0;
}