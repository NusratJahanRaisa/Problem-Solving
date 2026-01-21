#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    
    int compareNum = v[n-1];
    int cnt=0;
    for(int i=n-2;i>=0;i--){
        if(v[i]>compareNum){
            cnt++;compareNum=v[i];
        }
    }
    cout<<cnt<<endl;
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}