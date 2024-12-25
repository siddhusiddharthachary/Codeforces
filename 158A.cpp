#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> arr(n);
    int cnt = 0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        if(a>=arr[k-1] && a!=0) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}