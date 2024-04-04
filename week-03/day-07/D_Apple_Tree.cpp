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

vector<ll> adj[N];
bool vis[N];
vector<ll> leafs(N);

void dfs(ll s) {

    vis[s] = true;

    for (ll child : adj[s]) {
        if (!vis[child]) {
            dfs(child);
            leafs[s] += leafs[child];
        }
    }

    if (adj[s].size() == 1 && s != 1) {
        leafs[s] = 1;
    }
}

void infinite() {
    // write code
    ll n;
    cin >> n;

    for (ll i = 0;i <= n;i++) {
        adj[i].clear();
        vis[i] = false;
        leafs[i] = 0;
    }


    for (ll i = 0; i < n - 1; i++) {
        ll a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);

    ll q;
    cin >> q;

    while (q--) {
        ll x, y;
        cin >> x >> y;

        cout << (leafs[x] * leafs[y]) << endl;
    }

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

