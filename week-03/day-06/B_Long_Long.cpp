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
    ll n;
    cin >> n;

    vi arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());

    ll sum = 0;
    for (ll i = 0; i < arr.size(); i++) {
        sum += abs(arr[i]);
    }

    ll count = 0;

    bool flag = true;

    for (ll i = 0; i < arr.size(); i++) {
        if (arr[i] < 0 && flag) {
            count++;
            flag = false;
        }

        if (arr[i] > 0) {
            flag = true;
        }
    }

    cout << sum << " " << count << endl;
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