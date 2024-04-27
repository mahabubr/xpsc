#include<bits/stdc++.h>

#define NOT_FOUND()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define pi pair<int, int>
#define vi vector<ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)((x).size()))
#define rep(i, s, e) for (int i = (s); i <= (e); i++)
#define per(i, s, e) for (int i = (s); i >= (e); i--)

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define b_inf LLONG_MAX
#define s_inf LLONG_MIN

typedef long long int ll;
typedef double dl;
typedef unsigned long int ull;

const ll N = 2e5 + 9;
const ll MOD = 1e9 + 7;

using namespace std;


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

ll get_height(ll n, ll mid, vi arr) {
    ll total = 0;

    rep(i, 0, n - 1) {
        if (arr[i] < mid) {
            total += mid - arr[i];
        }
    }

    return total;
}


void InFiNiTe() {
    // write code
    ll n, k;
    cin >> n >> k;

    vi arr(n);

    rep(i, 0, n - 1) {
        cin >> arr[i];
    }

    sort(all(arr));

    ll l = 0, r = 2e9, ans = 0;

    while (l <= r) {
        ll mid = (l + r) / 2;

        if (get_height(n, mid, arr) <= k) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << endl;

}

int main() {

    NOT_FOUND();

    // int t = 1;
    int t;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}