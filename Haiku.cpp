#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int vowelCheck(string s){
   int totalsum=0;
   for(auto u:s){
    if(u=='a'|| u=='e'|| u=='i'|| u=='o'|| u=='u'){
        totalsum++;
    }
   }

   return totalsum;
}


int main(){ 
    optimize();  

    string x,y,z;
    getline(cin,x);
    getline(cin,y);
    getline(cin,z);

    int sum1=0,sum2=0,sum3=0;

    sum1=vowelCheck(x);
    sum2=vowelCheck(y);
    sum3=vowelCheck(z);

    if(sum1==5 && sum2==7 && sum3==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}