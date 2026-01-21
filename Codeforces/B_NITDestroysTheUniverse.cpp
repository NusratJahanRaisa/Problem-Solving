#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<int> v(n+1);

    for(int i = 1; i <= n; i++) cin >> v[i];

    int cnt=0;
    v[0]=0;

    for(int i = 1; i <= n; i++){
        if(v[i-1]==0 && v[i]>0){
            cnt++;
        }
    }

    if(cnt<2) cout<<cnt<<endl;
    else cout<<2<<endl;
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}