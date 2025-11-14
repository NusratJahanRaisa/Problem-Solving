#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int t;cin>>t;while (t--)
    {
        /* code */
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];

        int min = *min_element(a,a+n);
        bool f= true;
        int sum=1;
        for(int i=0;i<n;i++){
            if(a[i]==min && f==true){
                a[i]=a[i]+1;
                f=false;
            }

            sum*=a[i];
        }
        cout<<sum<<endl;
    }
    
    
    return 0;
}