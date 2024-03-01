#include <bits/stdc++.h>
using namespace std;

//overloadings
template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
template<typename T> istream& operator>>(istream& is, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cin >> a; return is; }

#define clr(x) memset(x, 0, sizeof(x))


//macros
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
typedef vector<string> vs;
typedef vector<int>::iterator vit;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef set<int> si;
typedef map<int, int> mii;

#define sz(x) (int)x.size()
#define all(X) X, X
#define rall(X) X.rbegin(), X.rend()

//constants
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

//utilities
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopd(i, a, b) for (int i = a; i > b; i--)
#define loopit(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define pr(x) cerr << #x << " = " << (x) << endl
#define prar(x, n) cerr << #x << " = "; for(int i = 0; i < n; ++i) cerr << x[i] << " "; cerr << endl
#define prvec(x) cerr << #x << " = "; for(const auto &element : x) cerr << element << " "; cerr << endl
#define prpair(x) cerr << #x << " = (" << x.first << ", " << x.second << ")" << endl
#define prstr(x) cerr << #x << " = " << x << endl


void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
