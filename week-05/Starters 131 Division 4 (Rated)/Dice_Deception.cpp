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

    vi arr(n);

    rep(i, 0, n - 1) {
        cin >> arr[i];
    }

    ll flip = 0;

    ll sum = 0;

    sort(all(arr));

    ll i = 0;

    while (i < n) {
        if (arr[i] == 1 && flip < k) {
            sum += 6;
            flip++;
        }
        else if (arr[i] == 2 && flip < k) {
            sum += 5;
            flip++;
        }
        else if (arr[i] == 3 && flip < k) {
            sum += 4;
            flip++;
        }
        else {
            sum += arr[i];
        }

        i++;
    }


    cout << sum << endl;
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