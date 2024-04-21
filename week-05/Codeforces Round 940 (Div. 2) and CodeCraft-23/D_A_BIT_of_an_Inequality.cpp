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
#define vi vector<int>
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


void infinite() {
    // write code
    ll n;
    cin >> n;

    vi arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vi pref(n + 1);

    for (ll i = 0; i <= n; i++) {
        pref[i] = pref[i - 1] ^ arr[i - 1];
    }

    ll ans = 0;

    for (ll i = 1; i <= n;i++) {
        for (ll j = i; j <= n; j++) {
            for (ll k = j; k <= n; k++) {
                ll xor1 = pref[j - 1] ^ pref[i - 1];
                ll xor2 = pref[k - 1] ^ pref[j - 1];
                ll xor3 = pref[k - 1] ^ pref[i - 1];
                if ((xor1 ^ xor2) & (xor1 ^ xor3)) {
                    ans += 1;
                }
            }
        }
    }

    if (ans == 0) {
        cout << 0 << endl;
    }
    else {
        cout << ans + 1 << endl;
    }

}

int main() {

    NOT_FOUND();

    ll t;
    cin >> t;

    while (t--) {
        infinite();
    }

    return 0;
}