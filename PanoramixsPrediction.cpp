#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


bool isPrime(int n) {

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}



int main(){ 
    optimize();
    
    int n,m;cin>>n>>m;
    int nextPrime;
    for (int i = n+1; i <= m; i++) {
        if (isPrime(i)) {
            nextPrime=i;
            break;
        }
    }
    if(nextPrime!=m) no
    else yes



    // check prime number

    // int num;cin>>num;

    // for(int i=2;i<50;i++){
    //     if(num%i==0 || num!=i){
    //         cout<<num<<" is not a prime num"<<endl;
    //         return 0;
    //     }
    // }

    // cout<<"P"<<endl;

    

    return 0; 
}