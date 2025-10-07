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
        vector <int> v;
        while (n--)
        {
            /* code */
            int num;cin>>num;
            v.push_back(num);
        }
        bool flag = false;
        for(int i=0;i<v.size();i++){
            if(v[i]<=i+1) flag=true;
        }

        if(flag) yes
        else no
        
    }
    

    return 0;
}