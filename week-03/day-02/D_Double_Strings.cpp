#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<string> st;

    for (int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    vector<int> v;

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < arr[i].size(); j++) {
            string s1 = arr[i].substr(0, j);
            string s2 = arr[i].substr(j);

            if(st.count(s1) && st.count(s2)){
                found = true;
                break;
            }
        }
        cout << found ;
    }

    cout << endl;

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}