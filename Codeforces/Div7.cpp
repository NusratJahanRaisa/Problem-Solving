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
        int num;cin>>num;
        if(num%7==0) cout<<num<<endl;
        else if(num<=13) cout<<14<<endl;
        else{
            string num1 = to_string( num-num%7);
            string num2 = to_string(  num+(7-num%7));
            // cout<<num1<<" "<<num2<<endl;

            string n = to_string(num);

            if(num1[0]!=num2[0]){
                if(num1[0]==n[0]) cout<<num1<<endl;
                else cout<<num2<<endl;
            }
            else{
                cout<<num2<<endl;
            }

        }
    }
    
    return 0; 
}