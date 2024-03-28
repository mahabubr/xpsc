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
    ll n;
    cin >> n;

    int num = n;

    vector<int>nums;

    int i = 0;

    while (num != 0)
    {
        nums.push_back(num % 2);
        i++;
        num = num / 11;
    }

    reverse(nums.begin(), nums.end());

    for (auto x : nums)
    {
        cout << x;
    }


    cout << endl;

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}