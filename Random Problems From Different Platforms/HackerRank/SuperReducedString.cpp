#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    string s;cin>>s;
    int ok=1;
    while (ok)
    {
        /* code */
        ok=0;
        int n = s.length()-1;
        for(int i = 0; i < n; i++) {
          if(s[i]==s[i+1]){
            ok=1;
            s.erase(i,2);
            break;
          }
        }
    }
    
    if(s.empty()) cout<<"Empty String"<<endl;
    else
    cout<<s<<endl;
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}