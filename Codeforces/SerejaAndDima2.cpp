#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;

    long long sereja=0,dima=0;

    vector <int> v;
    while(n--){
        int val;cin>>val;
        v.push_back(val);
    }

    int f=0;

    while (!v.empty())
    {
        /* code */
        if(*v.begin() > v.back()){

            if(f==0){
                sereja+=*v.begin();
                v.erase( v.begin() );
                f=1;
            }
            else{
                dima+=*v.begin();
                v.erase( v.begin() );
                f=0;
            }
        }




        else{
           if(f==0){
                sereja+=v.back();
                v.pop_back();
                f=1;
            }
            else{
                dima+=v.back();
                v.pop_back();
                f=0;
            }
        }

    }
    
    cout<<sereja<<" "<<dima<<endl;
        
    return 0;
}