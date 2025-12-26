#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long d = llabs(a - b);  // distance between opposite people

        // If distance is zero, circle can't exist
        if (d == 0) {
            cout << -1 << "\n";
            continue;
        }

        long long n = 2 * d;

        long long ans;
        if (c + d <= n)
            ans = c + d;
        else
            ans = c - d;

        // Validate answer
        if (ans < 1 || ans > n)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}
