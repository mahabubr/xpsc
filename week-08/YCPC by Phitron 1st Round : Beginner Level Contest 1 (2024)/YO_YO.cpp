#include<bits/stdc++.h>

#define __404__()              \
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
#define mii map<ll,ll>
#define umi unordered_map<int, int>
#define pr pair<int, int>
#define pri pair<ll,ll>

#define rep(i, s, e) for (int i = (s); i <= (e); i++)
#define per(i, s, e) for (int i = (s); i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)((x).size()))

#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define neg cout<<"-1"<<endl
#define el cout<<endl;
#define ell cout<<endl<<endl;

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

vll primes;
void sieve(ll limit) {
    vector<bool> isVisit(limit + 1, true);

    for (ll i = 2;i * i <= limit;i++) {
        if (isVisit[i]) {
            for (ll j = i + i;j <= limit;j += i) {
                isVisit[j] = false;
            }
        }
    }

    for (ll i = 2;i <= limit;i++) {
        if (isVisit[i]) {
            primes.push_back(i);
        }
    }
}

void InFiNiTe() {
    // write code

    sieve(N);

    int n;
    cin >> n;

    int mul = n * n;

    int mat[n][n];


    int t = 0, b = n - 1, l = 0, r = n - 1, idx = 0;

    while (t <= b && l <= r) {
        int i = l;
        while (i <= r) {
            mat[t][i] = primes[idx];
            i++;
            idx++;
        }
        t++;

        i = t;
        while (i <= b) {
            mat[i][r] = primes[idx];
            i++;
            idx++;

        }
        r--;

        if (t <= b) {
            i = r;
            while (i >= l) {
                mat[b][i] = primes[idx];
                i--;
                idx++;
            }
            b--;
        }

        if (l <= r) {
            i = b;
            while (i >= t) {
                mat[i][l] = primes[idx];
                i--;
                idx++;
            }
            l++;
        }
    }

    rep(i, 0, n - 1) {
        rep(j, 0, n - 1) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    __404__();

    int t = 1;
    // cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}

