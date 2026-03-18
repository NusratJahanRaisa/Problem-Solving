#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,k; cin >> n >> k;
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i=0;i<k;i++){
        pq.push(v[i]);
    }
    cout<<pq.top()<<endl;
    for(int i=k;i<n;i++){
        if(v[i]>pq.top()){
            pq.pop();
            pq.push(v[i]);
        }

        cout<<pq.top()<<endl;
    }
    
}

int main(){
    optimize();

    Ja_han();
    
    return 0;
}