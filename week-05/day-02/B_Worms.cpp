#include<bits/stdc++.h>

#define NOT_FOUND()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define dl double
#define pi pair<int, int>
#define m_inf LLONG_MAX
#define s_inf LLONG_MIN
#define vi vector<ll>
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const ll N = 2e5 + 9;
const ll MOD = 1e9 + 7;

using namespace std;


//         ██████████████               ██████████████           //
//    ██████              ██ ███████ ██              ███████     //
//     ████                ███      █                 ██         //
//       ██  █              ██     ██                █ █         //
//       ██    █            ███    ██             ██   █         //
//        █      █          ██      █            █    ██         //
//        ██      ██       █         █        ██     ██          //
//          █            ██           ██            ██           //
//            ███     ███               ██       ███             //

// ███╗░░░███╗░█████╗░██╗░░██╗░█████╗░██████╗░██╗░░░██╗██████╗░  // 
// ████╗░████║██╔══██╗██║░░██║██╔══██╗██╔══██╗██║░░░██║██╔══██╗  // 
// ██╔████╔██║███████║███████║███████║██████╦╝██║░░░██║██████╦╝  // 
// ██║╚██╔╝██║██╔══██║██╔══██║██╔══██║██╔══██╗██║░░░██║██╔══██╗  // 
// ██║░╚═╝░██║██║░░██║██║░░██║██║░░██║██████╦╝╚██████╔╝██████╦╝  // 
// ╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░░╚═════╝░╚═════╝░  // 
// 

ll find_lower_bound(vector<ll>& arr, ll x) {
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

ll find_upper_bound(vector<ll>& arr, ll x) {
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

void infinite() {
    // write code
    ll n;
    cin >> n;

    vi arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }


    vi pref(n + 1);

    for (ll i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + arr[i - 1];
    }


    ll q;
    cin >> q;

    while (q--) {
        ll x;
        cin >> x;

        ll ans = find_lower_bound(pref, x);
        cout << ans << endl;
    }
}

int main() {

    NOT_FOUND();

    infinite();

    return 0;
}