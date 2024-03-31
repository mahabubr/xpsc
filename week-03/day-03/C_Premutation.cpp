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

    int arr[n][n - 1];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> arr[i][j];
        }
    }

    vi v;

    for (int i = 0; i < n - 1; i++) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for (int j = 0; j < n; j++) {
            mx = max(mx, arr[j][i]);
            mn = min(mn, arr[j][i]);
        }
        v.push_back(mx);
        v.push_back(mn);
    }

    unordered_set<int> unique;
    vector<int> permutation;

    for (int value : v) {
        if (unique.find(value) == unique.end()) {
            permutation.push_back(value);
            unique.insert(value);
        }
    }

    for (auto it : permutation) {
        cout << it << " ";
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