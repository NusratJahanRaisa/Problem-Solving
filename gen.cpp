#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int my_rand(int l, int r){
    return uniform_int_distribution<int>(l, r)(rng);
}

void solve(){
    int x = my_rand(1,5);
    int y = my_rand(1,5);

    cout << x << " " << y << endl; // output দিতে হবে
}

int main(){
    optimize();

    solve(); // function call করতে হবে

    return 0;
}