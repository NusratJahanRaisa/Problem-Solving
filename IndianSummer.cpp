#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 


int main(){ 
    optimize();  
    
    int t;cin>>t;
    cin.ignore();


    // IN CASE OF NOT DECLARING A STATIC SIZED VECTOR(USING PUSH_BACK)

    // vector <pair<string,string>> v;

    // for(int i=0;i<t;i++){
    //    string a,b;
    //    cin>>a>>b;
    //    v.push_back({a,b});
    // }



    // USING   v(n)
    vector <pair<string,string>> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end());

    int sz = unique(v.begin(),v.end())-v.begin();

    cout<<sz<<endl;

    return 0;
}
