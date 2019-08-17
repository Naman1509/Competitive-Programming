#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0; s[i] !='\0';i++){
        if(s[i]=='R'){
            x++;
        }
        if(s[i]=='U'){
            y++;
        }
        if(s[i]=='D'){
            y--;
        }
        if(s[i]=='L'){
            x--;
        }
    }
    cout<<x <<" "<<y;
}
