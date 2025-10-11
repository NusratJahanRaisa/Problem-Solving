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
        int a[3][3];

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }

        
        int steps=0,f;

        while (steps!=4)
        {
            /* code */
            steps++;
            f=1;

            if(a[0][0]<a[0][1] && a[1][0]<a[1][1] && a[0][0]<a[1][0] &&a[0][1]<a[1][1]){
                f=0;
                yes
                break;
            }
            else{
                int p=a[0][0],q=a[0][1],r=a[1][1],s=a[1][0];

                a[0][0] = s;
                a[0][1] = p;
                a[1][1] = q;
                a[1][0] = r;
            }
            
        }

        if(f) 
        no

    }
    

    return 0; 
}