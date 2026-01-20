#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,k; cin >> n >>k;
    vector<int> v(n+1);

    for(int i = 1; i <= n; i++) cin >> v[i];
    int cnt=0;
    for(int i=1;i<=n;i++){
    if(v[i]>=v[k] && v[i]>0) cnt++;
    }

    cout<<cnt<<endl;
}

int main(){
    optimize();

    int t=1; 
    // cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}