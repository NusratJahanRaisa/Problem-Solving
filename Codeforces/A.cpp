#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n;cin>>n;while (n--)
    {
        /* code */
        int num;cin>>num;
        int sum=0;
        if(num==1||num==3) cout<<0<<endl;
        else if(num==4) cout<<2<<endl;
        else{

            sum=num/4;
            num%=4;
            // cout<<"aaa - "<<num<<endl;
            if(num==0){
                num=4;
                sum-=1;
            }

            sum=sum+num/2; 
            cout<<sum<<endl; 
        }
    }
    
    return 0;
}