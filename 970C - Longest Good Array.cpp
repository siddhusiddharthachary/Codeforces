#include <iostream>
#include<vector>
using namespace std;
vector<int> ans;
void cal(int l,int r){
    if(r-l == 1) {
        // cout<<"2"<<endl;
    ans.push_back(2);
        // return 2;
    return ;
    }
    if(r==l){
        // cout<<"1"<<endl;
    ans.push_back(1);
    return ;
        // return 1;
    }
    int sum=l;
    int i=0;
    while(sum<r){
        sum+=i;
        i++;
    }
    
    if(sum==r) {
        // cout<<i;
    ans.push_back(i);
        // return i;
    return ;
    }
    
    ans.push_back(i-1);
    return ;
}
int main()
{
    // int l,r;
    // cin>>l;
    // cin>>r;
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a;
        cin>>b;
        cal(a,b);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
    
    
}
