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

const ll maxN = (1 << 15);
vi palindrome;

void get_palindrome() {
    for (ll i = 0;i < maxN;i++) {
        string s = to_string(i);
        ll len = s.length();
        bool ok = true;
        for (ll i = 0;i < (len / 2);i++) {
            if (s[i] != s[len - i - 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            palindrome.push_back(i);
        }
    }
}


void infinite() {
    // write code
    ll n;
    cin >> n;

    vi cnt(maxN), arr;

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;

        cnt[x]++;
        arr.push_back(x);
    }

    ll ans = n;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < palindrome.size(); j++) {
            ll cur = arr[i] ^ palindrome[j];
            ans += cnt[cur];
        }
    }

    cout << ans / 2 << endl;
}

int main() {

    NOT_FOUND();

    get_palindrome();

    ll t;
    cin >> t;

    while (t--) {
        infinite();
    }

    return 0;
}