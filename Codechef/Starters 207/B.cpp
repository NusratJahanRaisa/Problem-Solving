#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    int t;cin>>t;while (t--)
    {
        /* code */
        int n,a,b;cin>>n>>a>>b;
        int min = INT_MAX;
        while (n--)
        {
            /* code */
            int x,y;cin>>x>>y;
            
            if(abs(x-a)+abs(y-b) < min){
                min=abs(x-a)+abs(y-b);
            }

        }
        cout<<min<<endl;
    }
    

    return 0; 
}