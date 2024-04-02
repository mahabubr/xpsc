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
    int n;
    cin >> n;

    string c, h;
    cin >> c >> h;

    int len = ceil((float)n / 2.0);

    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {

        if ((h[i] == 'R' && c[i] == 'S')) {
            cnt2++;
        }
        else if (h[i] == 'S' && c[i] == 'P') {
            cnt2++;
        }
        else if ((h[i] == 'P' && c[i] == 'R')) {
            cnt2++;
        }
        else if ((c[i] == 'R' && h[i] == 'S')) {
            cnt1++;
        }
        else if (c[i] == 'S' && h[i] == 'P') {
            cnt1++;
        }
        else if ((c[i] == 'P' && h[i] == 'R')) {
            cnt1++;
        }

    }

    if (cnt1 > cnt2) {
        cout << 0 << endl;
    }
    else {
        cout << ((cnt2 - cnt1) / 2) + 1 << endl;
    }

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