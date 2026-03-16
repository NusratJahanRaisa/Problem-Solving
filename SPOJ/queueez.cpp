#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int t; cin >> t;
    queue<int>q;
    for(int i = 0; i < t; i++){
        int n;cin>>n;
        if(n==1){
            int num;cin>>num;
            q.push(num);
        }
        else if(n==2 && !q.empty()) q.pop();
        else if(n==3){
            if(q.empty()) cout<<"Empty!"<<endl;
            else cout<<q.front()<<endl;
        }
    }

    
}

int main(){
    optimize();

    
    Ja_han();
    

    return 0;
}