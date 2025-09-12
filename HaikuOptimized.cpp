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
    int cnt[] = {5,7,5};
    vector <string> v;

    for(int i=0;i<3;i++){
        string s; getline(cin,s);
        v.push_back(s);
    }
    int sum1=0,sum2=0,sum3=0;

    for(int i=0;i<3;i++){
        int sum=0;

        sum=vowelCheck(v[i]);

        if(sum!=cnt[i]) return cout<<"NO"<<endl ,0;
    }

    cout<<"YES"<<endl;

    return 0;
}