#include <bits/stdc++.h>
using namespace std;
#define fst first
#define sec second
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
const ll INF=LLONG_MAX,MOD=1e9+7;
const int L=17,N=1<<L;

ll n;

int main(){
	ios::sync_with_stdio(false);
	int sum=0;
	for(int i=1;i<1000;i++){
		if(i%3==0 || i%5==0){
			sum+=i;	
		}
	}
	cout<<sum<<endl;
	return 0;
}