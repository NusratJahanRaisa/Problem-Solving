#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    vector <int> v;
    int n;cin>>n;
    while(n--){
        int num;cin>>num;
        v.push_back(num);
    }
    

    //use do while in case you need the very first vector array as well
    while (next_permutation(v.begin(),v.end()))
    {
        /* code */
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}