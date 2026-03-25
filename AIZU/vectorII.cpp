#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,q; cin >> n>>q;
    vector<vector<int>> v(n);

    while (q--)
    {
        /* code */
        int option;cin>>option;
        if(option==0){
            int index,num;cin>>index>>num;
            v[index].push_back(num);
        }
        else if(option==1){
            int index;cin>>index;

            int len = v[index].size();
            for(int i=0;i<len-1;i++){
                cout<<v[index][i]<<" ";
            }
            if(!v[index].empty())
            cout<<v[index][len-1];

            cout<<endl;
        }
        else if(option==2){
            int index;cin>>index;
            v[index].clear();
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