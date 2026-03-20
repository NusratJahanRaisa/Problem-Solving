#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long
#define PI 2* acos(0.0)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
    return uniform_int_distribution<int>(l, r) (rng);
}


void Ja_han(){

    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    
}

int main(){
    optimize();

    int t=1;
    cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}