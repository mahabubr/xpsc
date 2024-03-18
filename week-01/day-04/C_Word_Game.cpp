#include<bits/stdc++.h>

#define ll long long int
#define dl double
#define pi pair<int, int>
#define B_INF LLONG_MAX
#define  S_INF LLONG_MIN
#define vi vector<int>
#define endl '\n'

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<string, int> mp;

        vector<vector<string>> arr(3, vector<string>(n));

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string s;
                cin >> s;
                arr[i][j] = s;
                mp[s]++;
            }
        }


        vector<int> v;

        for (int i = 0; i < 3; i++) {
            int total = 0;
            for (int j = 0; j < n; j++) {
                if (mp[arr[i][j]] == 1) {
                    total += 3;
                }
                else if (mp[arr[i][j]] == 2) {
                    total += 1;
                };
            }
            cout << total << " ";
        }

        cout << endl;
    }

    return 0;
}