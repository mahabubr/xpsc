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

    string s;
    cin >> s;

    int remind = 0;
    int match = 0;

    int l = 0, r = n - 1;

    while (l < r) {
        if (s[l] == s[r]) {
            match += 2;
        }
        else {
            remind++;
        }

        l++;
        r--;
    }

    vector<char> vc;

    for (int i = 0; i < n + 1; i++) {
        int sum = i - remind;

        if (sum >= 0) {
            sum = max(sum % 2, sum - match);
            sum = max(0, sum - (n % 2));

            if (sum == 0) {
                vc.push_back('1');
            }
            else {
                vc.push_back('0');
            }
        }
        else {
            vc.push_back('0');
        }
    }

    for (int i = 0; i < vc.size(); i++) {
        cout << vc[i];
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