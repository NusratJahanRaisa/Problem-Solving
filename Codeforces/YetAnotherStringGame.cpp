#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

   string s;cin>>s;


   for(int i = 0; i < s.size(); i++){
       if(i%2==0){
          if(s[i]=='a') s[i]='b';
          else s[i]='a';
       }else{
        if(s[i]=='z') s[i]='y';
        else s[i]='z';
       }
   }
   cout<<s<<endl;

    
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}