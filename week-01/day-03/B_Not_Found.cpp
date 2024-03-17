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

    string s;
    cin >> s;

    int n = s.length();

    int freq[26] = { 0 };

    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    bool flag = false;

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            cout << char(i + 'a') << endl;
            flag = true;
            break;
        }
    }

    if (!flag) cout << "None" << endl;

    return 0;
}