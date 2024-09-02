#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    vector<string> ans;
    int n;
    cin>>n;
    while(n--){
        int sz;
        cin>>sz;
        string s;
        cin>>s;
        int k=sqrt(sz);
        if(k*k!=sz){
            ans.push_back("No");
            continue;
        }
        
        vector<string> grid(k,string(k,'0'));
        for(int i=0;i<k;i++){
            grid[0][i] = '1';
            grid[k-1][i] = '1';
            grid[i][0] = '1';
            grid[i][k-1] = '1';
        }
        
        string t="";
        
        
        for(const auto &it:grid){
            t+=it;
        }
        if(s==t)
            ans.push_back("Yes");
            else
            ans.push_back("No");
            
    }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }

    return 0;
}
