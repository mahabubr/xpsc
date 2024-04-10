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
    ll n, c, d;
    cin >> n >> c >> d;

    vector<ll> arr(n * n);

    ll mainSum = 0;

    for (ll i = 0; i < n * n; i++) {
        cin >> arr[i];
        mainSum += arr[i];
    }

    vector<vector<ll>> square(n, vector<ll>(n));

    square[0][0] = *min_element(arr.begin(), arr.end());
    for (ll i = 1; i < n; i++) {
        square[0][i] = square[0][i - 1] + c;
        square[i][0] = square[i - 1][0] + d;
    }
    for (ll i = 1; i < n; i++) {
        for (ll j = 1; j < n;j++) {
            square[i][j] = square[i - 1][j] + d;
        }
    }

    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            sum += square[i][j];
        }

    }

    if (sum == mainSum) yes;
    else no;
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

