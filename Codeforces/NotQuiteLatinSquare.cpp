#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    int t;cin>>t;while (t--)
    {
        /* code */
        char a[4][4];
        map <char,int> m;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               cin>>a[i][j];

               m[a[i][j]]++;
            }
        }

        for(auto u : m){
            if(u.second==2){
                cout<<u.first<<endl;
                break;
            }
        }
    }
    

    return 0; 
}