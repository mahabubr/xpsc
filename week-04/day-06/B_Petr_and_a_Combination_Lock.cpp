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

    vi arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for (int k = 0; k < n; k++) {
            if (i & (1 << k)) {
                sum += arr[k];
            }
            else {
                sum -= arr[k];
            }
        }

        if (sum % 360 == 0) {
            yes;
            return;
        }
    }

    no;

}

int main() {

    NOT_FOUND();

    infinite();

    return 0;
}