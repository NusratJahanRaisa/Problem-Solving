#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    vector<vector<int>> v(16,vector<int>(16));

    for(int i = 0; i < 6; i++){
        for(int j=0;j< 6; j++){
            cin>>v[i][j];
        }
    }
    int maxVal = INT_MIN;
    for(int i = 1; i < 5; i++){
        for(int j=1; j< 5; j++){
            int sum = v[i][j]+v[i-1][j]+v[i+1][j]+v[i-1][j-1]+v[i-1][j+1]+v[i+1][j-1]+v[i+1][j+1];

            maxVal = max(sum,maxVal);
        }
    }

    cout<<maxVal<<endl;
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}