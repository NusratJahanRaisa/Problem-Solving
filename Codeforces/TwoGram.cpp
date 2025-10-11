#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    int n;cin>>n;
    string s;cin>>s;

    if(n==2){
        cout<<s[0]<<s[1]<<endl;
        return 0;
    }

    int in1,in2,max=INT_MIN;
    for(int i=0;i<n-1;i++){

        char fir = s[i];
        char sec = s[i+1];

        int cnt=0;

        for(int j=i+1;j<n-1;j++){

            if(fir==s[j] && sec==s[j+1]){
                cnt++;
            }
        }
        
        if(cnt>max){
            // cout<<cnt<< " "<<max<<endl;
            max=cnt;
            in1 = i;
            in2 = i+1;
        }
    }

    cout<<s[in1]<<s[in2]<<endl;

    return 0; 
}