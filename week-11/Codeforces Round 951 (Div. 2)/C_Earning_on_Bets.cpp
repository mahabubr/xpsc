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
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 9;

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


vll primes;
void sieve(ll limit) {
    vector<bool> isVisit(limit + 1, true);

    for (ll i = 2;i * i <= limit;i++) {
        if (isVisit[i]) {
            for (ll j = i + i;j <= limit;j += i) {
                isVisit[j] = false;
            }
        }
    }

    for (ll i = 2;i <= limit;i++) {
        if (isVisit[i]) {
            primes.push_back(i);
        }
    }
}

mii prime_factors(ll limit) {
    mii count;

    for (int i = 2;i * i <= limit;i++) {
        if (limit % i == 0) {
            while (limit % i == 0) {
                count[i]++;
                limit /= i;
            }
        }
    }

    if (limit > 1) {
        count[limit]++;
    }

    return count;
}

vll divisors(ll limit) {
    vll div;
    for (int i = 1;i * i <= limit;i++) {
        if (limit % i == 0) {
            div.push_back(i);
            if ((limit / i) != i) {
                div.push_back(limit / i);
            }
        }
    }

    sort(all(div));

    return div;
}

bool is_prime(ll limit) {
    if (limit == 1) {
        return false;
    }

    for (ll i = 2;i * i <= limit;i++) {
        if (limit % i == 0) {
            return false;
        }
    }
    return true;
}

ll gcd(ll a, ll b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return ((a / gcd(a, b)) * b);
}

ll power(ll a, ll b)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b >>= 1;
    }

    return ans;
}

void InFiNiTe() {
    // write code
    ll n;
    cin >> n;

    vll arr(n);

    rep(i, 0, n - 1) {
        cin >> arr[i];
    }

    ll tar = 1, j = 0;

    while (j < n) {
        ll cur = gcd(tar, arr[j]);
        cur = arr[j] / cur;
        tar = tar * cur;
        j++;
    }


    vll ans;

    rep(i, 0, n - 1) {
        ans.push_back(tar / arr[i]);
    }

    ll sum = 0;

    rep(i, 0, sz(ans) - 1) {
        sum += ans[i];
    }

    if (sum < tar) {
        rep(i, 0, sz(ans) - 1) {
            cout << ans[i] << " ";
        }
        lnn;
    }
    else {
        cout << -1 << ln;
    }

}

int main() {

    __404__();

    int t = 1;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}