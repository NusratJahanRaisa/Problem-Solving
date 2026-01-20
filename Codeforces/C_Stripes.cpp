#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    vector<vector<char>> v(8, vector<char>(8));

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>v[i][j];
        }
    }

    int cnt=0;
    char ans;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(v[i][j]=='R'){
                cnt++;
            }
        }

        if(cnt==8){
            ans='R';
        }
        else{
            cnt=0;
        }
    }
    
    // column count

    cnt=0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){

            if(v[j][i]=='B'){
                cnt++;
            }
        }

        if(cnt==8){
            ans='B';
        }
        else{
            cnt=0;
        }
    }

    cout<<ans<<endl;

}



int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}
