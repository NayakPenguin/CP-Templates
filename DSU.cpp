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
