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

    vi attA(n), defA(n);

    int sumAttA = 0, sumDefA = 0;

    for (int i = 0; i < n; i++) {
        cin >> attA[i];
        sumAttA += attA[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> defA[i];
        sumDefA += defA[i];
    }


    vi attP(n), defP(n);

    int sumAttP = 0, sumDefP = 0;

    for (int i = 0; i < n; i++) {
        cin >> attP[i];
        sumAttP += attP[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> defP[i];
        sumDefP += defP[i];
    }

    if (sumAttA > sumAttP && sumDefA > sumDefP) {
        cout << "A" << endl;
    }
    else if (sumAttP > sumAttA && sumDefP > sumDefA) {
        cout << "P" << endl;
    }
    else {
        cout << "DRAW" << endl;
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