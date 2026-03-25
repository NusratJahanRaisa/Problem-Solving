#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int option;cin>>option;
        if(option==0){
            int num;cin>>num;
            v.push_back(num);
        }
        else if(option==1 and !v.empty()){
            int index; cin>>index;
            if(index<=v.size()-1){
                cout<<v[index]<<endl;
            }
        }
        else if(option==2 and !v.empty()){
            v.pop_back();
        }
    }

    
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}