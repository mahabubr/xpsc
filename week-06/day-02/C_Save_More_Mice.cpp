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


void InFiNiTe() {
    // write code
    ll n, k;
    cin >> n >> k;

    vi arr(k);

    rep(i, 0, k - 1) {
        cin >> arr[i];
    }

    sort(all(arr), greater<ll>());

    ll sum = 0, ans = 0;

    rep(i, 0, k - 1) {
        if (sum < arr[i]) {
            sum += (n - arr[i]);
            ans++;
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