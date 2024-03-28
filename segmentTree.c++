// template ---->
class SegmentTree {
private:
    vector<ll> tree;
    vector<ll> nums;
    ll n;

    void buildTree(ll node, ll start, ll end) {
        if (start == end) {
            tree[node] = nums[start];
        } else {
            ll mid = start + (end - start) / 2;
            buildTree(2 * node + 1, start, mid);
            buildTree(2 * node + 2, mid + 1, end);
            tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
        }
    }

    ll queryRange(ll node, ll start, ll end, ll left, ll right) {
        if (start > right || end < left) {
            return LLONG_MAX; 
        } else if (left <= start && end <= right) {
            return tree[node];
        } else {
            ll mid = start + (end - start) / 2;
            return min(queryRange(2 * node + 1, start, mid, left, right),
                       queryRange(2 * node + 2, mid + 1, end, left, right));
        }
    }

    void updateValue(ll node, ll start, ll end, ll idx, ll newValue) {
        if (start == end) {
            tree[node] = newValue;
        } else {
            ll mid = start + (end - start) / 2;
            if (idx <= mid) {
                updateValue(2 * node + 1, start, mid, idx, newValue);
            } else {
                updateValue(2 * node + 2, mid + 1, end, idx, newValue);
            }
            tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
        }
    }

public:
    SegmentTree(const vector<ll>& nums) {
        this->nums = nums;
        n = nums.size();
        tree.resize(4 * n, LLONG_MAX);
        buildTree(0, 0, n - 1);
    }

    ll query(ll left, ll right) {
        return queryRange(0, 0, n - 1, left, right);
    }

    void update(ll idx, ll newValue) {
        updateValue(0, 0, n - 1, idx, newValue);
    }
};

// how to use ---->
void solve(){
    ll n; cin>>n; 
    vector<ll> v(n, 0); 
    for(ll i = 0; i<n; i++) cin>>v[i];
    
    SegmentTree segmentTree(v);

    ll q, t, x, y;
    cin>>q;

    while(q--){
        cin>>t>>x>>y;

        if(t == 1){
            cout<<(segmentTree.query(x, y))<<endl;
        }
        else {
            segmentTree.update(x, y);
        }
    }
} 
