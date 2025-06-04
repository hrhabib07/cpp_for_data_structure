#include <bits/stdc++.h>
using namespace std;

// 🚀 Fast I/O
#define fastIO() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

// 🔁 Macros
#define int long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fi first
#define se second

// 📚 Typedefs
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
const int INF = 1e18;
const int MOD = 1e9+7;

// 🧮 Modular Arithmetic
int mod_add(int a, int b) { return ((a % MOD + b % MOD) % MOD); }
int mod_sub(int a, int b) { return ((a % MOD - b % MOD + MOD) % MOD); }
int mod_mul(int a, int b) { return ((a % MOD * b % MOD) % MOD); }
int mod_pow(int a, int b) {
    int res = 1; a %= MOD;
    while (b > 0) {
        if (b & 1) res = mod_mul(res, a);
        a = mod_mul(a, a); b >>= 1;
    }
    return res;
}
int mod_inv(int a) { return mod_pow(a, MOD - 2); }

// 🧠 Bit Tricks
#define setbits(x) __builtin_popconll(x)
#define tz(x) __builtin_ctzll(x)
#define lz(x) __builtin_clzll(x)
#define parity(x) __builtin_parityll(x)

// 📦 DSU (Disjoint Set Union)
struct DSU {
    vi parent, sz;
    DSU(int n) {
        parent.resize(n); sz.assign(n, 1);
        iota(all(parent), 0);
    }
    int find(int x) {
        if (x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }
    void unite(int x, int y) {
        x = find(x), y = find(y);
        if (x != y) {
            if (sz[x] < sz[y]) swap(x, y);
            parent[y] = x; sz[x] += sz[y];
        }
    }
};

// 🔍 Binary Search Template
int binary_search_fn(function<bool(int)> check, int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (check(mid)) hi = mid;
        else lo = mid + 1;
    }
    return lo;
}

// 🧮 GCD & LCM
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

// 🧪 Timer
struct Timer {
    chrono::time_point<chrono::high_resolution_clock> start;
    Timer() { start = chrono::high_resolution_clock::now(); }
    ~Timer() {
        auto end = chrono::high_resolution_clock::now();
        cerr << "Time: " << chrono::duration<double>(end - start).count() << "s\n";
    }
};


const int mx=2e4+123;
vi adj[mx];
bool vis[mx];
int con=0,cl1=0;

void dfs(int u, int col){
    vis[u]=1;
    con++;
    if(col) cl1++;
    int temp =!col;
    for(auto v: adj[u]){
        if(!vis[v]) dfs(v,temp);
    };
}



// ✅ Main Function
int32_t main() {
    fastIO();
    Timer timer; // remove during conests if not needed

    int t = 1;
    cin >> t;
    int cs =t;
    while (t--) {
        int n; cin>>n;
        for (int i = 1; i <=n; i++)
        {
            int u,v; cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        int cn=0;
        for (int i = 1; i <=20000; i++)
        {
            if(cn==n || con==n) break;
            if(adj[i].size()){
                dfs(i,1);
                cn++;
            }
        }
        cout<<"Case "<<(cs-t)<<": "<<max((con-cl1),cl1)<<endl;
        con=0; cl1=0;
        
    }

    return 0;
}
