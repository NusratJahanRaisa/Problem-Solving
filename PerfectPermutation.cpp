#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) a[i]=i;
    if(n%2==1){
        cout<<-1<<endl; return 0;
    }
    
    for(int i=1;i<=n;i++){
       swap(a[i],a[i+1]);
       i++;
    }
    
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;





    // vector <int> v;
    // for(int i=1;i<=n;i++) v.push_back(i);

    // if(v.size()==1){
    //         cout<<-1<<endl;
    //         return 0;
    // }

    // while(next_permutation(v.begin(),v.end())){
        // for(auto u:v) cout<<u<<" ";
        // cout<<endl;

    //     vector<pair <int ,int>> p;
        
    //     for(int i=0;i<v.size();i++){
    //         p.push_back({v[i],i+1});
    //     }
    //     bool flag = true;
    //     for(auto u : p){
    //       if(u.first==u.second) flag=false;
    //     }


    //     if(flag){
    //         for(auto u:v){
    //             cout<<u<<" ";
    //         }
    //         cout<<endl;
    //         return 0;
    //     }

    //     p.clear();
    // }
   
    
    return 0;
}