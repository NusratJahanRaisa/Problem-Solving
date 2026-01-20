#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<int> v(n),a;

    for(int i = 0; i < n; i++) cin >> v[i];
    
    a=v;
    sort(v.begin(),v.end());
    
    int max1=v[n-1],max2=v[n-2];

    for(int i = 0; i < n; i++){
        if(a[i]==max1){
            cout<<max1-max2<<" ";
        }
        else{
            cout<<a[i]-max1<<" ";
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