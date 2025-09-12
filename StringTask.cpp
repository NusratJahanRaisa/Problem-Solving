#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();  

    string s,finalString; cin>>s;

    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);

        if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i'){
          finalString=finalString+'.'+s[i];
        }
    }
    cout<<finalString<<endl;



    return 0;
}