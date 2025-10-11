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
        vector <int> v;
        for(int i=0;i<4;i++){
            int num;cin>>num;v.push_back(num);
        }

        int cnt=1;

        if(v[0]==v[1])
        cnt=2;

        // else if(v[0]<v[1]){
        //     cout<<2<<endl;
        //     continue;
        // }
        
        else cnt=1;


        int sum=v[0]+v[1];


        for(int i=2;i<3;i++){
            // cout<<cnt<<" "<<sum<<" "<<v[i]<<endl;
            if(sum<=v[i]){
                sum+=v[i];
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    

    return 0; 
}