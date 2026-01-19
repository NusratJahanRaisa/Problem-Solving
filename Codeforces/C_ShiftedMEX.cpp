
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
    int cnt=1;
    int maxCnt=1;

    for(int i=0;i<n-1;i++){

        if(v[i]+1==v[i+1]) cnt++;

        else if(v[i]==v[i+1]){
            continue;
        }
        else{
           maxCnt=max(maxCnt,cnt);
           cnt=1; 
        }
        // cout<<cnt<<endl;
    }

    cout<<max(cnt,maxCnt)<<endl;
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}