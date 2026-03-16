#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    string s; cin>>s;
    
    int sum = 0;

    for(int i = 0; i < s.length(); i++) {
       if(s[i]=='(') sum++;
       else sum--;

       if(sum<0){
          no; return;
       }
    }
    if(sum==0) yes
    else no 
}

int main(){
    optimize();

    Ja_han();

    return 0;
}