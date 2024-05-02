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

#define rep(i, s, e) for (int i = (s); i <= (e); i++)
#define per(i, s, e) for (int i = (s); i >= (e); i--)
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


void InFiNiTe() {
    // write code
    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> arr(n);

    rep(i, 0, n - 1) {
        int t, z, y;
        cin >> t >> z >> y;
        arr[i] = make_tuple(t, z, y);
    }

    vi can(n);

    auto ok = [&](int mid) {
        vector<int> may(n);
        int has = m;
        for (int i = 0;i < n;i++) {
            tuple<int, int, int> T = arr[i];
            int t, z, y, total, can, remaining, curr;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            total = ((t * z) + y);
            can = (mid / total);
            remaining = mid % total;
            curr = ((can * z) + min(z, (remaining / t)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }

        if (!has) {
            for (int i = 0;i < n;i++) {
                can[i] = may[i];
            }
        }

        return (!has);

        };

    int l = 0, r = 1e8, ans;

    while (l <= r) {
        int mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    cout << ans << endl;

    rep(i, 0, can.size() - 1) {
        cout << can[i] << " ";
    }

    cout << endl;

}

int main() {

    NOT_FOUND();

    int t = 1;
    // cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}