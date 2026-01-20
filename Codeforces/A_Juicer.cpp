#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,b,d; cin >>n>>b>>d;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    
    int wasteSection=0,cnt=0;
    for(int i = 0; i < n; i++){
        if(v[i]<=b){
           wasteSection+=v[i];
        }

        if(wasteSection>d){
           cnt++;
           wasteSection=0;
        }
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