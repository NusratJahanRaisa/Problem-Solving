#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){
    string s;cin>>s;

    stack<int> st;

    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')' && !st.empty()){
            st.pop();
        }
        else{
            no
            return;
        }
    }

    if(st.empty()==1) yes
    else no   
}

int main(){
    optimize();

    Ja_han();
    
    return 0;
}