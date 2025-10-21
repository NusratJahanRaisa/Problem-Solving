#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    long long num,n,rem;
    cin>>num;
    n=num;
    string s;

    while (n!=0)
    {
        /* code */
        rem=n%10; 
        if(9-rem<rem){
            string c = to_string(9-rem);
            s+=c;
        }else{
            string c = to_string(rem);
            s+=c;
        }

        n/=10;
    }
    reverse(s.begin(),s.end());
    if(s[0]=='0'){
        s[0]='9';
    }
    cout<<s<<endl;
    
    return 0;
}