#include<stdio.h>
#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int timeTaken(string s){
    int time = 2;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            time++;
        }else{
            time += 2;
        }
    }
    return time;
}
string password(string s){
    int maxTime = 0;
    string ans;
    for(char ch = 'a'; ch<='z'; ++ch){
        string newS = ch + s;
        if(timeTaken(newS)>maxTime){
            ans = newS;
            maxTime = timeTaken(newS);
        }
    }
    for(int i=0; i<s.size(); i++){
        for(char ch='a'; ch<='z'; ++ch){
            string newS  = s.substr(0, i) + ch + s.substr(i);
            if(timeTaken(newS)>maxTime){
                ans = newS;
                maxTime = timeTaken(newS);   
            }
        }
    }
    for(char ch = 'a'; ch<='z'; ++ch){
        string newS = s + ch;
        if(timeTaken(newS)>maxTime){
            ans = newS;
            maxTime = timeTaken(newS);
        }
    }
    return ans;
}
int main(){
    // vector<vector<int>> question;
    int testCases;
    // cout<<"enter number of testcases"<<endl;
    cin>>testCases;
    vector<string> arr;
    for(int i=0;i<testCases;i++){
        string s;
        // cout<<"enter the string"<<endl;
        cin>>s;
        arr.push_back(s);
    }
    for(int i=0;i<testCases;i++){
        // string s = "password";
        cout<<arr[i]<<endl;
    }
    return 0;
}
