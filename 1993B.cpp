#include<stdio.h>
#include<vector>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int parity(vector<int> arr){
    int maxOdd=-1;
    vector<int> even;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }else{
            maxOdd = max(maxOdd,arr[i]);
        }
    }
    sort(even.begin(),even.end());
    if(maxOdd==-1 || even.size()==0){
        return 0;
    }
    bool t = (maxOdd<even[0]);
    even[0]+=maxOdd;
    for(int i=1;i<even.size();i++){
        if(even[i]>even[i-1]){
            t = 1;
        }
        even[i] +=even[i-1];
    }
    return even.size()+t;
}
int main(){
    vector<vector<int>> question;
    int testCases;
    // cout<<"enter number of testcases"<<endl;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        vector<int> arr;
        int n;
        // cout<<"enter number of elements"<<endl;
        cin>>n;
        for(int j=0;j<n;j++){
            int element;
            cout<<"enter the element of "<<j+1<<endl;
            cin>>element;
            arr.push_back(element);
        }
        question.push_back(arr);
    }
    for(int i=0;i<testCases;i++){
        // vector<int> arr={999999996,999999997,999999998,999999999,1000000000};
      // parity(arr); the actual answer is 3 but it is returning 4???
        cout<<parity(question[i])<<endl;
    }
    return 0;
}
