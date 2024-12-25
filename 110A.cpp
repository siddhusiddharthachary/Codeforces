#include <iostream>
#include<string>
using namespace std;
int main() {
long long n;
cin>>n;

    int luckyCount = 0;

while(n!=0){
// 	int d = n%10;
	if(n%10==4 || n%10==7) luckyCount++;
	n/=10;
}


    if (luckyCount == 4 || luckyCount == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
