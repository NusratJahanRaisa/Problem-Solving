#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 

        optimize();  

        int targeti,targetj;
        int a[6][6];
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                cin>>a[i][j];

                if(a[i][j]==1){
                    targeti=i,targetj=j;
                }
            }
        }
        
        int resIndex;

        resIndex = abs(targeti-3) +abs(targetj-3);

        cout<<resIndex<<endl;
        
    }
    