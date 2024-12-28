#include <iostream>
#include <limits.h>
#include <utility>
using namespace std;

pair<int, int> f(int i) {
    int maxi = -1, mini = INT_MAX;
    while (i) {
        maxi = max(maxi, i % 10);
        mini = min(mini, i % 10);
        i /= 10;
    }
    return {maxi, mini};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        int maxDiff = -1, maxElement = l;

        for (int i = l; i <= r; i++) {
            auto [largest, smallest] = f(i);
            if (largest - smallest > maxDiff) {
                maxDiff = largest - smallest;
                maxElement = i;
            }

            if (maxDiff == 9) {
                break;
            }
        }

        cout << maxElement << endl;
    }
}
