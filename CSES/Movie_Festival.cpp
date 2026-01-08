#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


bool compareBySecond(const pair<int,int> &p1, const pair<int,int> &p2){
    return p1.second<p2.second;
}


int main(){ 
    optimize();
    
    int n;cin>>n;
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end(),compareBySecond);
    int count=1;
    // cout << "------"<<endl;
    int fValue = v[0].second;

    for(auto u: v){
        // cout<<u.first<<" "<<u.second<<endl;
        if(u.first>=fValue){
            // cout<<" result one - "<<u.first<<" "<<fValue<<endl;
            count++;
            fValue=u.second;
        }
    }

    cout<<count<<endl;
    
    return 0; 
}


// 7
// 1 5
// 6 7
// 3 5
// 6 9
// 9 10
// 9 14
// 16 20