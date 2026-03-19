#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,k; cin >> n >>k;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(),v.end(),greater<int>());
    int totalSum =0;
    for(int i = 0; i < n; i++){
        if(i<k && v[i]>=5){
          totalSum+=(v[i]-5);
        }
        else{
            if(v[i]>=10){
                totalSum+=(v[i]-10);
            }
        }
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