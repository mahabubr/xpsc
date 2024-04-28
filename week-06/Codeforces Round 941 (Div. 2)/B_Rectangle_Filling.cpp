#include<bits/stdc++.h>

#define NOT_FOUND()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define pi pair<int, int>
#define vi vector<int>
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

bool get_fill(vector<vector<char>> arr, ll n, ll m, char c) {
    ll ans = false;

    for (ll i = 0; i < n; i++) {
        if (arr[i][0] == c) {
            ans = true;
            break;
        }
    }

    if (!ans) {
        return false;
    }

    ans = false;

    for (ll i = 0; i < n; i++) {
        if (arr[i][m - 1] == c) {
            ans = true;
            break;
        }
    }

    if (!ans) {
        return false;
    }


    ans = false;

    for (ll i = 0; i < m; i++) {
        if (arr[0][i] == c) {
            ans = true;
            break;
        }
    }

    if (!ans) {
        return false;
    }


    ans = false;

    for (ll i = 0; i < m; i++) {
        if (arr[n-1][i] == c) {
            ans = true;
            break;
        }
    }

    if (!ans) {
        return false;
    }


    return true;
}

void InFiNiTe() {
    // write code
    ll n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m, 0));

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    bool ans = get_fill(arr, n, m, 'B') || get_fill(arr, n, m, 'W');

    if (ans) {
        yes;
    }
    else {
        no;
    }
}

int main() {

    NOT_FOUND();

    // ll t = 1;
    ll t;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}