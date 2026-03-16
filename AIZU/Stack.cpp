#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,q; cin >> n >>q;
    stack<int> st[n];

    for(int i = 0; i < q; i++){
        int type; cin>>type;
        if(type==0){
            int t,x;cin>>t>>x;
            st[t].push(x);
        }
        else if(type==1){
            int t; cin>>t;
            if(!st[t].empty()){
                cout<<st[t].top()<<endl;
            }
        }
        else{
            int t;cin>>t;
            if(!st[t].empty()){
                st[t].pop();
            }
        }
    }

    
}

int main(){
    optimize();

    Ja_han();

    return 0;
}