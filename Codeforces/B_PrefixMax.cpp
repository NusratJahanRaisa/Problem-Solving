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
        int n;cin>>n;
        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int maxVal = *max_element(v.begin(),v.end());

        cout<<maxVal*n<<endl;
    }
    

    return 0; 
}