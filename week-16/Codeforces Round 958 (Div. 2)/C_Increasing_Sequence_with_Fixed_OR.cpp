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

#define rep(i, s, e) for (ll i = (s); i <= (e); i++)
#define per(i, s, e) for (ll i = (s); i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)((x).size()))

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

int count_binary_substring(string s, char ch) {
    int n = s.length();
    int count = 0;
    int i = 0;

    while (i < n) {
        if (s[i] == ch) {
            int length = 0;
            while (i < n && s[i] == ch) {
                length++;
                i++;
            }
            count++;
        }
        else {
            i++;
        }
    }

    return count;
}

pr count_binary_number(string s) {
    int zero = 0, one = 0;

    for (char c : s) {
        if (c == '0') {
            zero++;
        }
        else if (c == '1') {
            one++;
        }
    }

    return make_pair(zero, one);
}

int binary_to_decimal(int n) {
    int dec = 0, i = 0, rem;

    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        i++;
    }

    return dec;
}

int decimal_to_binary(int n) {
    int ans = 0;
    int remainder, i = 1;

    while (n != 0) {
        remainder = n % 2;
        ans += remainder * i;
        i = i * 10;
        n = n / 2;
    }

    return ans;
}


void InFiNiTe() {
    // write code
    ll n;
    cin >> n;

    vll arr;

    rep(i, 0, 62) {
        if ((n >> i) & 1) {
            arr.push_back(1LL << i);
        }
    }

    vll ans;

    rep(i, 0, sz(arr) - 1) {
        ll tmp = n - arr[i];
        if (tmp > 0) {
            ans.push_back(tmp);
        }
    }

    reverse(all(ans));

    if (sz(ans) == 0) {
        cout << 1 << ln;
    }
    else {
        cout << sz(ans) + 1 << ln;
    }

    rep(i, 0, sz(ans) - 1) {
        cout << ans[i] << " ";
    }

    cout << n << " ";

    lnn;;
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