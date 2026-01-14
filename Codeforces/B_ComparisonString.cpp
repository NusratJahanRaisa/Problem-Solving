#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void jahan(){
    int n;cin>>n;
    string s;cin>>s;
    
    int totalCount=1,maxCnt=INT_MIN;
    for(int i=0;i<s.size();i++){
        if(s[i]=='<' && s[i+1]=='<'){
            totalCount++;
        }
        else if(s[i]=='>' && s[i+1]=='>'){
            totalCount++;
        }
        else{
            maxCnt=max(maxCnt,totalCount);
            totalCount=1;
        }
    }

    cout<<maxCnt+1<<endl;
}

int main(){ 
    optimize();
    
    int t;cin>>t;
    while (t--)
    {
        /* code */
        jahan();
    }

    return 0; 
}