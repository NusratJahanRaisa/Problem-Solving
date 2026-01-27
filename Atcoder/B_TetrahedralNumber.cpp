#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<vector<int>> v;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=n;k++){
               if(i+j+k<=n){
                v.push_back({i,j,k});
               }
            }
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<endl;
    }


    


    
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