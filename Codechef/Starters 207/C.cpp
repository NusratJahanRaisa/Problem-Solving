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
        int n;cin>>n;string s;cin>>s;
        int cnt=0;
        bool flag = false;

        int l=0,r=n-1;
        bool fl=false,fr=false;
        int lc=0,rc=0;

        if(s.find('1')==string::npos){
            cout<<0<<endl;
            continue;
        }
        
        while (1)
        {
            /* code */
            if(!fl && s[l]=='1'){
               lc=l;fl=true;
            }
            else l++;

            if(!fr && s[r]=='1'){
                rc=r;fr=true;
            }
            else r--;

            if(fl && fr) break;
        }
        
        // cout<<lc<<" "<<rc<<endl;

        if(lc==rc || s[lc]=='0'){
            cout<<0<<endl;
        }

        else{
            for(int i=lc;i<=rc;i++){
            if(s[i]!='1') cnt++;
            }

            cout<<cnt<<endl;
        }

    }

    return 0; 
}


// 4
// 4
// 0001
// 6
// 000111
// 7
// 0000111
// 5
// 00111

// 0 3
// 3
// 0 5
// 3
// 0 6
// 4
// 2 4
// 0