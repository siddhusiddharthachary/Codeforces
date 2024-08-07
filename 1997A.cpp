#include <stdio.h>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int timeTaken(string s) {
    int time = 2;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            time++;
        } else {
            time += 2;
        }
    }
    return time;
}

string password(string s) {
    int maxTime = 0;
    string ans;

    // Inserting at the beginning
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        string newS = ch + s;
        int currentTime = timeTaken(newS);
        if (currentTime > maxTime) {
            ans = newS;
            maxTime = currentTime;
        }
    }

    // Inserting in the middle
    for (int i = 0; i <= s.size(); i++) {
        for (char ch = 'a'; ch <= 'z'; ++ch) {
            string newS = s.substr(0, i) + ch + s.substr(i);
            int currentTime = timeTaken(newS);
            if (currentTime > maxTime) {
                ans = newS;
                maxTime = currentTime;
            }
        }
    }

    return ans;
}

int main() {
    int testCases;
    cin >> testCases;
    vector<string> arr(testCases);
    
    for (int i = 0; i < testCases; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < testCases; i++) {
        cout << password(arr[i]) << endl;
    }
    
    return 0;
}
