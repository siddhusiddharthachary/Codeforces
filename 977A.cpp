#include <iostream>
#include<string>
using namespace std;
int main() {
    long long n;
    cin>>n;
    
    long long k;
    cin>>k;
    
    while(n && k){
        k--;
        if(n%10!=0){
            n--;
        }else{
            n/=10;
        }
    }
    cout<<n<<endl;
    return 0;

}
