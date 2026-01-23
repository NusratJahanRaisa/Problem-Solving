#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    long long n,i=0; cin >> n;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    while (1)
    {
        /* code */        
        if(n%2==0){
            n=(n/2);
        }else if(n%3==0){
            n=(n*2)/3;
        }else if(n%5==0){
            n=(n*4)/5;
        }
        else{
            cout<<-1<<endl;
            return;
        }
        i++;

        if(n==1 || n<=0) break;
    }
    
        
    cout<<i<<endl;

    
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}