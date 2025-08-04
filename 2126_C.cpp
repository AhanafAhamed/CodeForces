#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    int curr_at = vec[k - 1];
    sort(vec.begin(), vec.end());
    int water_level = 1;
    int i = 0;
    while (vec[i] != curr_at) ++i;
    for (int now = i; now + 1 < n; now++) {
        int needed_time = vec[now + 1] - vec[now];
        int time_have = vec[now] - water_level + 1;
        if (time_have < needed_time) {
            cout << "NO\n";
            return;
        }
        water_level += needed_time;
    }
    cout << "YES\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
