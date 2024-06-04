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


// build
// const int K = 25
// int st[MAX_N][K + 1];
// void build(vector<int>&a)
// {
//     for (int i = 0; i < N; i++)
//         st[i][0] = a[i];

//     for (int j = 1; j <= K; j++)
//         for (int i = 0; i + (1 << j) <= N; i++)
//             st[i][j] = st[i][j - 1] + st[i + (1 << (j - 1))][j - 1];
// }

// query O(logN)
// int query(int L, int R)
// {
//     int sum = 0;
//     for (int j = K; j >= 0; j--)
//     {
//         if ((1 << j) <= R - L + 1)
//         {
//             sum += st[L][j];
//             L += 1 << j;
//         }
//     }
//     return sum;
// }

const int K = 25;
const int MAX_N = 2e5 + 5;
int st[MAX_N][K + 1];
int log_g[MAX_N + 1];

void init_log()
{
    log_g[1] = 0;
    for (int i = 2; i <= MAX_N; i++)
    {
        log_g[i] = log_g[i / 2] + 1;
    }
}


void build(vi& a)
{
    int N = a.size();
    for (int i = 0; i < N; i++)
        st[i][0] = a[i];

    for (int j = 1; j <= K; j++)
    {
        for (int i = 0; i + (1 << j) <= N; i++)
        {
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
}

int query(int L, int R)
{
    int j = log_g[R - L + 1];
    int maxi = max(st[L][j], st[R - (1 << j) + 1][j]);
    return maxi;
}

void InFiNiTe() {
    // write code
    string s;
    cin >> s;

    vi arr(sz(s) + 1);

    rep(i, 1, sz(s)) {
        arr[i] = arr[i - 1] + (s[i - 1] == '(' ? 1 : -1);
    }

    build(arr);

    ll ans = 0;

    map<int, deque<int>> mp;

    rep(i, 0, sz(s)) {
        deque<int>& now = mp[arr[i]];

        while (sz(now)) {
            int pos = now[0];
            int mx = query(pos, i);
            if (arr[i] - (mx - arr[i]) < 0) {
                now.pop_front();
            }
            else {
                break;
            }
        }

        ans += sz(now);
        mp[arr[i]].push_back(i);
    }

    cout << ans << ln;
}

int main() {

    init_log();

    __404__();

    int t = 1;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}