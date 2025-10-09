#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    string s;cin>>s;
    int maxLen=1;

    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            
            string newS = s.substr(i,j-i+1);
            string palindromeCheck = newS;
            reverse(newS.begin(),newS.end());

            if(newS==palindromeCheck && newS.length()>maxLen){
                maxLen=newS.length();
            }
        }
    }

    cout<<maxLen<<endl;

    return 0; 
}