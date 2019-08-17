#include<iostream>
using namespace std;
int main(){
    char house[20];
    int N,k=1,i;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>house[i];
    }
    for(i=0;i<N;i++){
        if(house[i]=='H' && house[i+1]=='H'){
            k=0;
            break;
            
        }
        if(house[i]=='.'){
            house[i]='B';
        }
    }
    if(k==1){
        cout<<"YES"<<endl;
        for(i=0;i<N;i++){
            cout<<house[i];
        }
    }
    if(k==0){
        cout<<"NO";
    }
    
}
