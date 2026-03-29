#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    string s;cin>>s;
    bool flag = true;

    if(s.length()!=8) no
    else{
       if(!isupper(s[0])) flag=false;
       if(!isupper(s[7])) flag=false;

       for(int i=1;i<s.size()-1;i++){
           if(!isdigit(s[i])) flag=false;
       }
       
       if(s[1]=='0') no
       else if(flag) yes
       else no
    }
   
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}