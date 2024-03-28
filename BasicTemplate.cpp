// “I see myself as the best footballer in the world. If you don't believe you are the best, then you will never achieve all that you are capable of." - Cristiano Ronaldo.

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <iterator>
#include <set>
#include <cstring>
#include <deque>
#include <stack>
#include <bitset>
#include <complex>

#define ll long long
#define ull unsigned long long
#define pb push_back
#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for (ll i=1;i<n;i++)
#define fr2(i,st,ed) for (ll i=st;i<ed;i++)

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

#define endl "\n"
#define all(v) v.begin(), v.end()
#define sum(v) accumulate(all(v), 0LL)
#define lcm(a,b) (a*b)/gcd(a,b)
#define pop_count(n) __builtin_popcount(n)

#define vin(v) for(auto &it:v) cin>>it;
#define vout(v) for(auto &it:v) cout<<it;

#define yes cout<<"YES"<<'\n'
#define no  cout<<"NO"<<'\n'

#define INF 10000000000000007
const ll mod = 1000000007;
const double PI = 3.141592653589793238460;

#define raftaar ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

const int MOD = 1e9 + 7; 

bool compareInterval(pair<ll, ll> p1, pair<ll, ll> p2){
    if(p1.first == p2.first) return (p1.second < p2.second);
    return (p1.first < p2.first);
}

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
template<typename T>
void print_vector(const vector<T>& v) {
    for(const auto& it : v) cout<<it<<" ";
    cout<<endl;
}

const int N = (2 * 1e5) + 7;
int arr[N];

void initializeArray() {
    memset(arr, -1, sizeof(arr));
}

void solve(){
    ll n; cin>>n;
    vector<ll> v(n, 0); fr(i, n) cin>>v[i];
    

} 

int main(){
    raftaar
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    #endif

    cout<<fixed;
    cout<<setprecision(10);
    
    ull tc; cin>>tc;
    while (tc--)
        // cout<<endl<<"----------- T E S T  C A S E -----------"<<endl<<endl,
    solve();
    
    return 0;
}
