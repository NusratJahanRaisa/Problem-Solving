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
        string s;cin>>s;
        string newS;
        stack <char> st;
        if(s[0]=='A'){
           for(int i=0;i<s.length();i++){
                if(s[i]=='A') {newS+='(';}
                else {newS+=')';}
           }
        }
        else if(s[0]=='B'){
           for(int i=0;i<s.length();i++){
                if(s[i]=='B') {newS+='(';}
                else {newS+=')';}
           }
        }
        else if(s[0]=='C'){
           for(int i=0;i<s.length();i++){
                if(s[i]=='C') {newS+='(';}
                else {newS+=')';}
           }
        }
        
        // cout<<newS<<endl;
        bool flag=true;

        for(int i=0;i<newS.length();i++){
            if(!st.empty() && newS[i]!=st.top()){
                st.pop();
            }
            else if(newS[i]=='('){
                st.push(newS[i]);
            }
            else{
                flag=false;
         
            }
        }

        if(st.empty() && flag) yes
        else no
    }
    
    return 0;
}