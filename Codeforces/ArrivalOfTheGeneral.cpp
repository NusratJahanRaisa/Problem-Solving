#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
   
    vector <int> v;

    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    vector <int> :: iterator it1;

    it1 = max_element(v.begin(),v.end());
    
    int maximum = it1-v.begin();

    v.erase(it1);

    // int mn = *min_element(v.begin(),v.end());
    // auto it2 = find(v.rbegin(), v.rend(), mn);
    // for(auto u : v){
    //     cout<<u<<" ";
    // } cout<<endl;
    
    // int minimum = v.end()-it2-1;

    int min = INT_MAX;
    int min_index;
    for(int i=0;i<v.size();i++){
        if(v[i]<=min){
            min=v[i];
            min_index = i+1;
        }
    }
    

    int minimum = v.size()-min_index;
    
    cout<<minimum+maximum<<endl;

    return 0;
}