#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;


#define __404__()              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long int ll;
typedef unsigned long int ull;
typedef double ld;
typedef long double lld;

#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define mi map<int, int>
#define mii map<ll,ll>
#define umi unordered_map<int, int>
#define pr pair<int, int>
#define pri pair<ll,ll>

#define rep(i, s, e) for (int i = (s); i <= (e); i++)
#define per(i, s, e) for (int i = (s); i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)((x).size()))

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define neg cout<<"-1"<<endl
#define ln '\n'
#define lnn cout<<ln;
#define lnnn cout<<ln<<ln;

#define b_inf LLONG_MAX
#define s_inf LLONG_MIN

const ld pi = 3.141592653589793238;
const ll MOD = 998244353;
// const ll N = 2e5 + 9;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



//         ██████████████               ██████████████           //
//    ██████              ██ ███████ ██              ███████     //
//     ████                ███      █                 ██         //
//       ██  █              ██     ██                █ █         //
//       ██    █      █████████    ████████       ██   █         //
//        █      █          ██      █            █    ██         //
//        ██      ██       █         █        ██     ██          //
//          █    █████   ██           ██  ███████  ██           //
//            ███     ███               ██       ███             //

// ███╗░░░███╗░█████╗░██╗░░██╗░█████╗░██████╗░██╗░░░██╗██████╗░  // 
// ████╗░████║██╔══██╗██║░░██║██╔══██╗██╔══██╗██║░░░██║██╔══██╗  // 
// ██╔████╔██║███████║███████║███████║██████╦╝██║░░░██║██████╦╝  // 
// ██║╚██╔╝██║██╔══██║██╔══██║██╔══██║██╔══██╗██║░░░██║██╔══██╗  // 
// ██║░╚═╝░██║██║░░██║██║░░██║██║░░██║██████╦╝╚██████╔╝██████╦╝  // 
// ╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░░╚═════╝░╚═════╝░  // 

ll mod_exp(ll base, ll exp, ll mod) {
    ll ans = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return ans;
}

void InFiNiTe() {
    // write code
    ll n;
    cin >> n;

    string s = to_string(n);

    ll pw_t = mod_exp(10, sz(s), MOD);

    ll pw_mod = mod_exp(pw_t, n, MOD);

    ll sum;
    if (pw_t == 1) {
        sum = n % MOD;
    }
    else {
        sum = (pw_mod - 1) * mod_exp(pw_t - 1, MOD - 2, MOD) % MOD;
    }

    ll ans = (n * sum) % MOD;

    cout << ans << endl;
}

int main() {

    __404__();

    int t = 1;
    // cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}
