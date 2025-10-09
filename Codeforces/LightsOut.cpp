#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  
        int a[4][4];
        int b[4][4];

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=1;
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>b[i][j];

                b[i][j]%=2;
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){

                if(b[i][j]%2==1){

                    if(a[i][j]==1)
                       a[i][j]=0;
                    else 
                       a[i][j]=1;


                    if(a[i][j+1]==1)
                      a[i][j+1]=0;
                    else if(a[i][j+1]==0)
                      a[i][j+1]=1;
                    
                    if(a[i+1][j]==1)
                      a[i+1][j]=0;
                    else if(a[i+1][j]==0)
                      a[i+1][j]=1;

                    if(a[i][j-1]==1)
                      a[i][j-1]=0;
                    else if(a[i][j-1]==0)
                      a[i][j-1]=1;

                    if(a[i-1][j]==1)
                      a[i-1][j]=0;
                    else if(a[i-1][j]==0)
                      a[i-1][j]=1;
                }

                
                // if(b[i][j]%2==1){

                //     if(b[i][j]==1)
                //        a[i][j]=0;
                //     else 
                //        a[i][j]=1;


                //     if(b[i][j+1]==1)
                //       a[i][j+1]=0;
                //     else if(b[i][j+1]==0)
                //       a[i][j+1]=1;
                    
                //     if(b[i+1][j]==1)
                //       a[i+1][j]=0;
                //     else if(b[i+1][j]==0)
                //       a[i+1][j]=1;

                //     if(b[i][j-1]==1)
                //       a[i][j-1]=0;
                //     else if(b[i][j-1]==0)
                //       a[i][j-1]=1;

                //     if(b[i-1][j]==1)
                //       a[i-1][j]=0;
                //     else if(b[i-1][j]==0)
                //       a[i-1][j]=1;
                // }
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }

        return 0;
    } 
    