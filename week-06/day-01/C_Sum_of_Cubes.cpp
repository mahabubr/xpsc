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

const ll N = 1e4;
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

vi cubes;

void InFiNiTe() {
    // write code
    ll x;
    cin >> x;

    bool flag = false;

    rep(i, 0, N - 1) {
        if (cubes[i] >= x) {
            break;
        }

        ll l = 0, r = N - 1, need = x - cubes[i];

        bool ok = false;

        while (l <= r) {
            ll mid = (l + r) / 2;

            if (cubes[mid] == need) {
                ok = true;
                break;
            }
            else if (cubes[mid] > need) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        if (ok) {
            flag = true;
            break;
        }
    }

    if (flag) {
        yes;
    }
    else {
        no;
    }
}

int main() {

    NOT_FOUND();

    rep(i, 1, N) {
        cubes.push_back(pow(i, 3));
    }

    // ll t = 1;
    ll t;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}