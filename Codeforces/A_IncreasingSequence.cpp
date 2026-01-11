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
        vector <int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int finalNum=0;

        for(int i=1;i<=n;i++){
            // cout<<v[i]<<" ";
            if(finalNum+1 == v[i]){
                finalNum++;
            }
            if(finalNum==v[i]){
                finalNum++;
            }
            else
            finalNum++;

        }
        // cout<<endl<<"-----"<<endl;
        cout<<finalNum<<endl;
    }
    

    return 0; 
}