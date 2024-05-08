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
    string s;
    cin >> s;


    vector<pair<int, char>> caps, sml;

    rep(i, 0, sz(s) - 1) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] == 'B') {
                if (!caps.empty()) {
                    caps.pop_back();
                }
            }
            else {
                caps.push_back({ i, s[i] });
            }
        }
        else {
            if (s[i] == 'b') {
                if (!sml.empty()) {
                    sml.pop_back();
                }
            }
            else {
                sml.push_back({ i, s[i] });
            }
        }
    }


    vector<pair<int, char>> ans;

    for (auto c : caps) {
        ans.push_back({ c.first, c.second });
    }


    for (auto c : sml) {
        ans.push_back({ c.first, c.second });
    }

    sort(all(ans));

    rep(i, 0, sz(ans) - 1) {
        cout << ans[i].second;
    }


    cout << endl;;
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