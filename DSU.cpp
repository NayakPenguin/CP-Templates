const int N = (2 * 1e5) + 7;

ll representative[N];
ll Size[N];

void make(ll v){
    representative[v] = v;
    Size[v] = 1;
}

ll findRepresentative(ll v){
    if(v == representative[v]) return  v;
    // else return findRepresentative(representative[v]);
    // path compression : 
    else return representative[v] = findRepresentative(representative[v]);
}

void Union(ll a, ll b){
    a = findRepresentative(a);
    b = findRepresentative(b);

    if(a != b){
        if(Size[a] < Size[b]) swap(a, b);
        representative[b] = a;
        Size[a] += Size[b];
    }
}


void solve(){
    ll n, m; cin>>n>>m;

    fr(i, n) make(i);

    ll u, v;
    while(m--){
        cin>>u>>v;
        u--, v--;
        Union(u, v);
    }   
} 
