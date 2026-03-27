#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    set<int,greater<int>>s;

    for(int i = 0; i < n; i++){
        int num;cin>>num;
        s.insert(num);
    }

    auto it = s.begin();
    int first = *it;
    it++;
    int sec = *it;
    
    // int i=1,sum=0;
    // for(auto u : s){
    //     if(i>2) break;
    //     sum+=u;
    //     i++;
    // }
    cout<<first+sec<<endl;

    // int maxEl = *max_element(v.begin(),v.end());

    // v.erase(max_element(v.begin(),v.end()));

    // int maxEl2 = *max_element(v.begin(),v.end());
    
    // cout<<maxEl2+maxEl<<endl;
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}