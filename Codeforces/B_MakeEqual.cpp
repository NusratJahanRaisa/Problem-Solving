#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void jahan(){

    int n;cin>>n;
    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int division = accumulate(v.begin(),v.end(),0)/n;

    int totalCount=0;

    for(int i=0;i<n;i++){

        if(totalCount<0){
            no
            return;
        }
        if(v[i]>division){
            totalCount+=(v[i]-division);
        }
        else if(v[i]<division){
            totalCount-=(division-v[i]);
        }
    }

    yes
    
}



int main(){ 
    optimize();
    
    int t;cin>>t;
    while (t--)
    {
        /* code */
        jahan();
    }
    

    return 0; 
}