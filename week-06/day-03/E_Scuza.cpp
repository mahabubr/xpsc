#include<bits/stdc++.h>

#define NOT_FOUND()               \
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
#define umi unordered_map<int, int>
#define pr pair<int, int>

#define rep(i, s, e) for (ll i = (s); i <= (e); i++)
#define per(i, s, e) for (ll i = (s); i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)((x).size()))

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define b_inf LLONG_MAX
#define s_inf LLONG_MIN


const ld pi = 3.141592653589793238;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 9;

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

ll find_lower_bound(vll& arr, ll x) {
    ll l = 0, r = arr.size() - 1, ans = -1;

    while (l <= r) {

        ll mid = (l + r) / 2;

        if (x <= arr[mid]) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return ans;
}

ll find_upper_bound(vll& arr, ll x) {
    ll l = 0, r = arr.size() - 1, ans = -1;

    while (l <= r) {

        ll mid = (l + r) / 2;

        if (x >= arr[mid]) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    return ans;
}

void InFiNiTe() {
    // write code
    ll n, k;
    cin >> n >> k;

    vll arr(n);

    rep(i, 0, n - 1) {
        cin >> arr[i];
    }

    vll pref(n + 1, 0);

    rep(i, 1, n) {
        pref[i] = pref[i - 1] + arr[i - 1];
    }

    rep(i, 1, n) {
        arr[i] = max(arr[i - 1], arr[i]);
    }


    while (k--) {
        ll x;
        cin >> x;

        ll idx = find_upper_bound(arr, x);

        if (idx + 1 < 0) {
            cout << 0 << " ";
        }
        else {
            cout << pref[idx + 1] << " ";
        }
    }

    cout << endl;
}

int main() {

    NOT_FOUND();

    int t = 1;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}