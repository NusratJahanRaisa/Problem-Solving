#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  

   
        int n;cin>>n;
        cin.ignore();
        
        map <string ,int> vis;

        while (n--)
        {
            /* code */
            string s;cin>>s;

            if(vis[s]==0) {
                cout<<"OK"<<endl;
            }
            else{
                cout<<s<<vis[s]<<endl;
            }

            vis[s]++;
        }

    } 
    