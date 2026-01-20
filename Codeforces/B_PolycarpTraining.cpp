#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<int> v(n+1);

    for(int i = 1; i <= n; i++) cin >> v[i];

    sort(v.begin()+1,v.end());
    
    int dayCnt=0,j=1;

    for(int i=1;i<=n;i++){
        if(v[i]>=j){
            dayCnt++;
            j++;
        }
        else if(v[i]==v[i-1] ){
            continue;
        }
        else{
            cout<<dayCnt<<endl;
            return;
        }
    }
    cout<<dayCnt<<endl;
}

int main(){
    optimize();

    int t=1; 
    // cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}