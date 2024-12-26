#include <iostream>
using namespace std;
int main() {
     std::ios_base::sync_with_stdio(false);
    long t;
     cin >> t;

    while (t--) {
        long n, m, x = 0;
         cin >> n >> m;

        for (long p = 0; p < n; p++) {
            long a;
             cin >> a;
            if (a > x) x = a;
        }

        while (m--) {
            char c;
            long l, r;
             cin >> c >> l >> r;
            if (l <= x && x <= r) {
                x += (c == '+') ? 1 : (-1);
            }
             cout << x << " ";
        }
         cout <<  endl;
    }

    return 0;
}
