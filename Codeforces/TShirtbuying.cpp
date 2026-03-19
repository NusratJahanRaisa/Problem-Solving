#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    long long price[n+1];
    int a[n+1],b[n+1];
   
    priority_queue<int,vector<int>,greater<int>> pq[6][6];

    for(int i = 1; i <= n; i++) cin >> price[i];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    for(int i=1;i<=n;i++){
       pq[a[i]][b[i]].push(price[i]);
    }

    int m;cin>>m;

    int front,back;
    int ans = INT_MAX;

    while(m--){
        int buyer;cin>>buyer;
        int front,back;
        int ans = INT_MAX;

        for(int i=1;i<=3;i++){
            if( !pq[i][buyer].empty() and  pq[i][buyer].top() < ans){
                ans = pq[i][buyer].top();
                front = i ,back = buyer;
            }
        }

        for(int i=1;i<=3;i++){
            if(!pq[buyer][i].empty() and pq[buyer][i].top() < ans){
                ans = pq[buyer][i].top();
                front = buyer ,back = i;
            }
        }

        if(ans == INT_MAX) ans = -1;
        else pq[front][back].pop();

        cout<<ans<<" ";
        }
    }

    

int main(){
    optimize();

    Ja_han();

    return 0;
}