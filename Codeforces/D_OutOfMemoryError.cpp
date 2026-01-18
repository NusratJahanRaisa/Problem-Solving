#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n,m,h;cin>>n>>m>>h;
        vector<int>v(n);
        // vector<int>v2(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
            // v2[i]=v[i];
        }

        while (m--)
        {
            /* code */
            int bi,ci;cin>>bi>>ci;

            // int newVal=v[bi-1]+ci;
            // // cout<<newVal<<" "<<bi<<" "<<ci<<endl;
            // if(newVal<=h){
            //     v[bi-1]=newVal;
            // }
            // else{
            //    v=v2;
            // }
        }
        
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    

    return 0; 
}