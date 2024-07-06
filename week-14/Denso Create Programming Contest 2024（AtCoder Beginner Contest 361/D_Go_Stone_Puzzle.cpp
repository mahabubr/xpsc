#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
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

#define b_inf LLONG_MAX
#define s_inf LLONG_MIN

const ld pi = 3.141592653589793238;
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 9;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



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

struct State {
    string stones;
    int empty1, empty2, steps;

    State(string s, int e1, int e2, int st) : stones(s), empty1(e1), empty2(e2), steps(st) {}

    bool operator==(const State& other) const {
        return stones == other.stones && empty1 == other.empty1 && empty2 == other.empty2;
    }

    bool operator<(const State& other) const {
        return make_tuple(stones, empty1, empty2, steps) < make_tuple(other.stones, other.empty1, other.empty2, other.steps);
    }
};

namespace std {
    template <>
    struct hash<State> {
        size_t operator()(const State& state) const {
            return hash<string>()(state.stones) ^ hash<int>()(state.empty1) ^ hash<int>()(state.empty2);
        }
    };
}

bool is_goal(const string & current, const string & target) {
    return current == target;
}

vector<State> get_neighbors(const State & current, int N) {
    vector<State> neighbors;
    string stones = current.stones;
    int empty1 = current.empty1;
    int empty2 = current.empty2;
    int steps = current.steps;

    for (int x = 0; x <= N; ++x) {
        if (stones[x] != '.' && stones[x + 1] != '.' && x != empty1 && x != empty2 && x + 1 != empty1 && x + 1 != empty2) {
            string new_stones = stones;
            swap(new_stones[empty1], new_stones[x]);
            swap(new_stones[empty2], new_stones[x + 1]);
            neighbors.emplace_back(new_stones, x, x + 1, steps + 1);
        }
    }

    return neighbors;
}

int bfs(const string & start, const string & target, int N) {
    unordered_set<State> visited;
    queue<State> q;
    State initial(start + "..", N, N + 1, 0);
    q.push(initial);
    visited.insert(initial);

    while (!q.empty()) {
        State current = q.front();
        q.pop();

        if (is_goal(current.stones.substr(0, N), target)) {
            return current.steps;
        }

        vector<State> neighbors = get_neighbors(current, N);
        for (const auto& neighbor : neighbors) {
            if (visited.find(neighbor) == visited.end()) {
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }

    return -1;
}

void InFiNiTe() {
    // write code
    int N;
    string S, T;
    cin >> N >> S >> T;

    int result = bfs(S, T, N);
    cout << result << endl;
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