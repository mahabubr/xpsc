#include<bits/stdc++.h>
using namespace std;

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

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define neg cout<<"-1"<<endl
#define ln '\n'
#define lnn cout<<ln;
#define lnnn cout<<ln<<ln;

const ld pi = 3.141592653589793238;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 9;

void InFiNiTe() {
    ll h, n;
    cin >> h >> n;

    vll a(n), b(n);
    rep(i, 0, n - 1) {
        cin >> a[i];
    }
    rep(i, 0, n - 1) {
        cin >> b[i];
    }

    priority_queue<pri, vector<pri>, greater<pri>> pq; 
    
    ll cur = 0, health = h;

    rep(i, 0, n - 1) {
        pq.push({ 0, i });
    }

    while (health > 0) {
        ll tmp = 0;

        vector<pri> temp;
        while (!pq.empty() && pq.top().first <= cur) {
            int idx = pq.top().second;
            pq.pop();
            tmp += a[idx];
            temp.push_back({ cur + b[idx], idx });
        }

        for (auto& p : temp) {
            pq.push(p);
        }

        if (tmp == 0) {
            cur = pq.top().first; 
        }
        else {
            health -= tmp;
            cur++;
        }
    }

    cout << cur << ln;
}

int main() {
    __404__();

    int t;
    cin >> t;

    while (t--) {
        InFiNiTe();
    }

    return 0;
}
