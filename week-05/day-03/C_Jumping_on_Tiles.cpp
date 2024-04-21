#include<bits/stdc++.h>

#define NOT_FOUND()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define dl double
#define pi pair<char, ll>
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


void infinite() {
    // write code
    string s;
    cin >> s;

    char mn = min(s[0], s[s.size() - 1]);
    char mx = max(s[0], s[s.size() - 1]);

    vector<pi> arr;

    for (ll i = 0; i < s.size(); i++) {
        if (s[i] >= mn && s[i] <= mx) {
            arr.push_back({ s[i], i });
        }
    }


    sort(arr.begin(), arr.end(), [&](pi a, pi b) {
        return a.second < b.second;
        });


    if (arr.size() > 2) {
        sort(arr.begin() + 1, arr.end() - 1, [&](pi a, pi b) {
            if (s[0] > s[s.size() - 1]) {
                return a.first > b.first;
            }
            else {
                return a.first < b.first;
            }
            });
    }

    vi ans;
    ll distance = 0;

    ans.push_back(1);

    for (ll i = 1; i < arr.size(); i++) {
        distance += abs(arr[i - 1].first - arr[i].first);
        ans.push_back(arr[i].second + 1);
    }

    cout << distance << " " << ans.size() << endl;
    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

}

int main() {

    NOT_FOUND();

    int t;
    cin >> t;

    while (t--) {
        infinite();
    }

    return 0;
}