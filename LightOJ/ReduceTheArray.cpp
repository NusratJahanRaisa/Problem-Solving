#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i = 0; i < n; i++){
        int a;cin>>a;
        pq.push(a);
    }
    long long totalSum = 0;

    while (pq.size()>1)
    {
        /* code */
        long long  x = pq.top();
        pq.pop();
        long long  y = pq.top();
        pq.pop();

        totalSum += x+y;
        
        pq.push(x+y);
        
    }
    
    cout<<totalSum<<endl;
    
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}