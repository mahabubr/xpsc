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

bool fun(vector<vi> arr, vector<vi> brr, int n, int m) {
    per(i, n - 1, 1) {
        per(j, m - 1, 1) {
            if (arr[i][j] != brr[i][j]) {
                int tmp = (brr[i][j] - arr[i][j] + 3) % 3;
                arr[i][j] = brr[i][j];

                int x, y, z;
                z = (arr[i - 1][j - 1] + tmp) % 3;
                y = (arr[i][j - 1] + 2 * tmp) % 3;
                x = (arr[i - 1][j] + 2 * tmp) % 3;
                arr[i][j - 1] = y;
                arr[i - 1][j - 1] = z;
                arr[i - 1][j] = x;
            }
        }
    }

    rep(i, 0, n - 1) {
        if (arr[i][0] != brr[i][0]) {
            return false;
        };
    }

    rep(i, 0, m - 1) {
        if (arr[0][i] != brr[0][i]) {
            return false;
        };
    }

    return true;
}

void InFiNiTe() {
    // write code
    int n, m;
    cin >> n >> m;

    vector<vi> arr(n, vi(m)), brr(n, vi(m));

    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            char x;
            cin >> x;
            arr[i][j] = x - '0';
        }
    }

    rep(i, 0, n - 1) {
        rep(j, 0, m - 1) {
            char x;
            cin >> x;
            brr[i][j] = x - '0';
        }
    }

    if (fun(arr, brr, n, m)) {
        yes;
    }
    else {
        no;
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