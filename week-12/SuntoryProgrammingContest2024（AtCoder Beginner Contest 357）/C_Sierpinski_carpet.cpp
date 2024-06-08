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

void get_carpet(int n, vector<vc>& arr, int x, int y, int len) {
    if (n == 0) {
        arr[x][y] = '#';
        return;
    }

    int new_len = len / 3;

    rep(i, 0, 2) {
        rep(j, 0, 2) {
            if (i == 1 && j == 1) {
                rep(dx, 0, new_len - 1) {
                    rep(dy, 0, new_len - 1) {
                        arr[x + new_len + dx][y + new_len + dy] = '.';
                    }
                }
            }
            else {
                get_carpet(n - 1, arr, x + i * new_len, y + j * new_len, new_len);
            }
        }
    }
}

void InFiNiTe() {
    // write code
    int n;
    cin >> n;

    int len = 1;

    rep(i, 0, n - 1) {
        len *= 3;
    }

    vector<vc> arr(len, vc(len, '#'));

    get_carpet(n, arr, 0, 0, len);

    rep(i, 0, len - 1) {
        rep(j, 0, len - 1) {
            cout << arr[i][j];
        }
        lnn;
    }


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