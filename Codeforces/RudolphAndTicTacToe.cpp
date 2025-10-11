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
        vector <string> a(3);

        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        string ans = "DRAW";

        for(int i=0;i<3;i++){
                if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][0]!='.'){
                   ans = a[i][0]; 
                }

                if(a[0][i]==a[1][i] && a[1][i]==a[2][i] && a[0][i]!='.'){
                   ans = a[0][i]; 
                }
        }
        

        if(a[0][0]==a[1][1] && a[1][1]==a[2][2]  && a[0][0]!='.'){
                   ans = a[0][0]; 
        }
        else if(a[0][2]==a[1][1] && a[1][1]==a[2][0]  && a[0][2]!='.'){
                   ans = a[0][2];
        }

        cout<<ans<<endl;
    }
    

    return 0; 
}