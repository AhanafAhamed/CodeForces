#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Test_Cases;
    cin >> Test_Cases;

    while (Test_Cases--) {
        int n;
        long long k;
        cin >> n >> k;

        set<long long> S;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            S.insert(x);
        }

        long long score = 1;

        while (k-- && !S.empty()) {
            long long m = *S.begin();
            score = (score * m) % MOD;
            S.erase(S.begin());

            for (long long i = 1; i < m; i++) {
                S.insert(i);
            }

            if (m == 1) break;
        }

        cout << score % MOD << "\n";
    }

    return 0;
}
