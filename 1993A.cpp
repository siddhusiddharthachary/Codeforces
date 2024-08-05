#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int questionMarks(string s){
    int cntA=0,cntB=0,cntC=0,cntD=0;
    int n= s.size()/4;
    for(int i=0;i<n*4;i++){
        if(s[i]=='A' && cntA<n) cntA++;
        if(s[i]=='B' && cntB<n) cntB++;
        if(s[i]=='C' && cntC<n) cntC++;
        if(s[i]=='D' && cntD<n) cntD++;
    }
    return cntA+cntB+cntC+cntD;
}
int main() {
    vector<string> question;
    int testCases;
    // cout<<"Enter the number of test cases"<<endl;
    cin>>testCases;
    for(int i=0; i<testCases; i++){
        int n;
        // cout<<"enter the size of string"<<endl;
        cin>>n;
        string s;
        // cout<<"enter the string"<<endl;
        cin>>s;
        question.push_back(s);
    }
    for(int i=0;i<testCases;i++){
        cout<<questionMarks(question[i])<<endl;
    }
    return 0;
}
