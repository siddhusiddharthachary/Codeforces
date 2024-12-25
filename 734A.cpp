#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    int n;
    cin>>n;
    string S;
    cin>>S;
    int a =0 , d=0;
    for(char c:S){
        if(c=='A' || c=='a') a++;
        else if(c=='D' || c=='d') d++;
    }
    if(a>d){
        cout<<"Anton";
    }else if(d>a){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    return 0;
}