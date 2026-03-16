#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,k; cin >> n >>k;
    queue<int> q[n];

    for(int i = 0; i < k; i++){
       int type;cin>>type;

       if(type==0){
        int t,num;cin>>t>>num;
         q[t].push(num);
       }
       else if(type==1){
         int t; cin>>t;
         if(!q[t].empty())
         cout<<q[t].front()<<endl;
       }
       else if(type==2){
         int t; cin>>t;
         if(!q[t].empty())
           q[t].pop();
       }
    }

    
}

int main(){
    optimize();

    Ja_han();

    return 0;
}