#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool cmp(const pair<int,int> &p1 , const pair<int,int> &p2) {
   
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    else return 0;
}


int main(){ 
    optimize();  
    int n,k;
    cin>>n>>k;
    vector <pair<int,int>> v;
    


    // do without cmp operator trick
    for(int i=0;i<n;i++){
       int a,b; cin>>a>>b;
       v.push_back({a,b});

       v[i].first*=-1;
    }
    
    
    // with com function
    // sort(v.begin(),v.end(),cmp);


    // without com function
    sort(v.begin(),v.end());


    // brute force approach
    
    // int c=0;int targetFirst,targetSecond;

    // for(int pos=0;pos<v.size();pos++){

    //     if(pos+1==k){
    //          targetFirst = v[pos].first;
    //          targetSecond = v[pos].second;
    //     }
    // }

    // for(auto u : v){
    //     if(u.first==targetFirst && u.second==targetSecond) c++;
    // }

    int ans=0;

    for(auto u : v){
        if(u==v[k-1]) ans++;
    }

    cout<<ans<<endl;
    return 0;
}