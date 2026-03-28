#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"pangram\n";
#define no cout<<"not pangram\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    string s; getline(cin,s);
    map<char,int>m;
    for(int i = 0; i < s.length(); i++){
        if(s[i]!=' '){
        s[i]=tolower(s[i]);
        m[s[i]]++;
        }
    }
    // cout<<m.size()<<endl;
    if(m.size()!=26) no
    else yes
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}