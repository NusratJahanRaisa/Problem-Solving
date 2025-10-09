#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  

   
        int n;cin>>n;
        map <int ,int> m;
        int maxNum=0;
        while (n--)
        {
            /* code */
            int num;cin>>num;
            m[num]++;

            maxNum= max(maxNum,m[num]);
        }
        
        cout<<maxNum<<endl;
    }
    