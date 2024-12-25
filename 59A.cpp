#include <iostream>
#include<string>
using namespace std;
int main() {
    // for A -> 0 and Z -> 25
    // for a->32 and z->57
    
    string s;
    cin>>s;
    int upperCase=0, lowerCase=0;
    for(auto c:s){
        if(isupper(c)){
            upperCase++;
        }
        else if(islower(c)){
            lowerCase++;
        }
    }
    if(lowerCase>=upperCase){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }else{
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    
    cout<<s<<endl;
}
