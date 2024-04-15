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
    int n, m, k;
    cin >> n >> m >> k;

    vi arr(m + 1);

    for (int i = 0; i < m + 1; i++) {
        cin >> arr[i];
    }

    vector<vi> bits;
    for (int i = 0; i < m + 1; i++) {
        vi v;
        for (int j = 0; j < n; j++) {
            if ((arr[i] >> j) & 1) {
                v.push_back(1);
            }
            else {
                v.push_back(0);
            }
        }

        bits.push_back(v);
    }

    int ans = 0;

    vector<int> fedor = bits[m];

    for (int i = 0; i < bits.size() - 1; i++) {
        vi v = bits[i];
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (fedor[j] != v[j]) {
                cnt++;
            }
        }

        if (cnt <= k) {
            ans++;
        }
    }

    cout << ans << endl;
}

int main() {

    NOT_FOUND();

    infinite();

    return 0;
}