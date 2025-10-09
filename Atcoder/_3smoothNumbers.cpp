#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    long long num;cin>>num;

    int iLen=1,jLen=1,i,j;

    while (pow(2,iLen)<=num)
    {
        /* code */
        iLen++;
    }
    while (pow(3,jLen)<=num)
    {
        /* code */
        jLen++;
    }
    --iLen,--jLen;
    
    // cout<<iLen<<" "<<jLen<<endl;

    for(int i=0;i<=iLen;i++){
        for(int j=0;j<=jLen;j++){
            if(pow(2,i)*pow(3,j)==num){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;

    return 0; 
}