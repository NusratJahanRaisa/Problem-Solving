#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,m,h; cin >> n>>m>>h;
    vector<int> v(n+1);

    for(int i = 1; i <= n; i++) cin >> v[i];
    vector<pair<int,int>> op(m);
    int last_reset = -1;
    for(int i=0;i<m;i++){
       cin>>op[i].first>>op[i].second;

       v[op[i].first]+=op[i].second;
       if(v[op[i].first]>h){
           for(int j=i;j>last_reset;j--){
               v[op[j].first]-=op[j].second;
           }
           last_reset=i;
       }
    }

    for(int i = 1; i <= n; i++) cout<<v[i]<<" ";

    cout<<endl;
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}