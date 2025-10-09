#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;

    int m=n;
    int l=0,r=n-1;
    long long sereja=0,dima=0;

    vector <int> v;
    while(n--){
        int val;cin>>val;
        v.push_back(val);
    }

    int a=0;


    while (l<=r)
    {
        /* code */
        if(v[l]>v[r]){
            if(a%2==0){
                sereja+=v[l];
                a++;
            }
            else{
                dima+=v[l];
                a++;
            }

            l++;
        }




        else{
           if(a%2==0){
                sereja+=v[r];
                a++;
            }
            else{
                dima+=v[r];
                a++;
            }

            r--;
        }

    }
    
    // cout<<l<<" "<<r<<endl<<endl;

    
    cout<<sereja<<" "<<dima<<endl;
        
    return 0;
}