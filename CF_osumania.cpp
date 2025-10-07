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
        int n;cin>>n;
        
        // vector<vector<char>> a(n, vector<char>(5));
        char a[n][5];

        vector <int> v;

        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>a[i][j];

                if(a[i][j]=='#'){
                    v.push_back(j+1);
                }
            }
        }


        if(v.size()>1)
        reverse(v.begin(),v.end());


        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}