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
    
    sort(v.begin(),v.end());
    int uNums = unique(v.begin(),v.end())-v.begin();

    for(int i=0;i<n;i++){
        if(i+1>uNums){
            uNums+=1;
            cout<<uNums<<" ";
        }else{
            cout<<uNums<<" ";
        }
    }
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