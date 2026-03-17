#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    priority_queue<int> pq;

    for(int i = 0; i < n; i++){
        int a;cin>>a;pq.push(a);
    }

    while (!pq.empty())
    {
        /* code */
        cout<<pq.top()<<" ";
        if(pq.top()/2>0){
            cout<<pq.top()/2<<" ";
            pq.push(pq.top()/2);
            pq.pop();
        }
        else return;
    }
    

    
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}