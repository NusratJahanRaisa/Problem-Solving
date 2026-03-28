#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,k; cin >> n >>k;
    string s;
    char a='a';
    while (k--)
    {
        /* code */
        s+=a;
        a++;
    }

    while (n--)
    {
        /* code */
        cout<<s;
    }
    cout<<endl;
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}