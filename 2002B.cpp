#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;
        vector<long> a(n);
        vector<long> b(n);
        
        bool fs = true, fr = true;
        
        for(long p = 0; p < n; p++) {
            cin >> a[p];
        }
        
        for(long p = 0; p < n; p++) {
            cin >> b[p];
            if(b[p] != a[p]) fs = false;
            if(b[p] != a[n - 1 - p]) fr = false;
        }
        
        cout << ((fs || fr) ? "Bob" : "Alice") << endl;
    }

    return 0;
}
