#include<iostream>
#include<vector>
using namespace std;
 
string isTrue(int a, int b) {
    int total_sum = a * 1 + b * 2;
    
    // If the total sum is odd, its impossible to achieve 0
    if (total_sum % 2 != 0) {
        return "NO";
    }
    
    // If b is odd and a < 2, its impossible to balance the odd two
    if (b % 2 != 0 && a < 2) {
        return "NO";
    }
    
    // else its possible to balance the sum
    return "YES";
}
 
int main() {
    int n;
    cin >> n;
    
    vector<string> ans;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ans.push_back(isTrue(a, b));
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}
