#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    string s;cin>>s;

    auto pos = s.find("na");
    while (pos != string::npos)
    {
        /* code */
        s.replace(pos,2,"nya");// in replace function we need to provide 3 functions......
        // 1.position
        // 2.size of the replaced(na) substring
        // 3.the replaced-by(nya) substring


        // Find the next occurrence of the substring
        pos = s.find("na",pos+3);
    }
    
    cout<<s<<endl;
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}