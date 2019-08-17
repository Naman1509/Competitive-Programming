#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int test, flag = 1;
    cin>>test;
    string str1,str2;
    int i;
    while(test--){
        cin>>str1>>str2;
        int n1 = str1.length(); 
        sort(str1.begin(), str1.end()); 
        sort(str2.begin(), str2.end()); 
        // cout << str1 << endl << str2;
        for (int i = 0; i < n1;  i++) {
            if (str1[i] != str2[i]) {
                flag = 0;
                break;
            }
        }
        if ( flag == 1)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        flag = 1;
    }
    return 0;
}
