#include <iostream>
using namespace std;
int main() {
     std::ios_base::sync_with_stdio(false);
    long t;
     cin >> t;

    while (t--) {
        long l,r,L,R;
        cin>>l;
        cin>>r;
        cin>>L;
        cin>>R;
        long maxL = (l > L ? l : L);
        long minR = (r < R ? r : R);
        long len = minR - maxL;
        long res = len + (l!=L) + (r!=R);
        res = (len>=0 ? res: 1);
        cout<<res<<endl;
    }

    return 0;
}
