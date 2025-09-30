#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  
        int n;cin>>n;
        vector <string> v;
        while (n--)
        {
            /* code */
            string a;cin>>a;
            v.push_back(a);

            cout<<a<<endl;
        }

        for(auto u : v){
            if(u.size()>1){
                cout<<"Bigger - "<<u.size()<<endl;
                if(isdigit(u[0])){
                    cout<<"DIgit"<<endl;
                }else{
                    cout<<"not DIgit"<<endl;
                }
                
            }else{
                cout<<"Smaller - "<<u.size()<<endl;

                if(isdigit(u[0])){
                    cout<<"DIgit"<<endl;
                }else{
                    cout<<"not DIgit"<<endl;
                }
            }
        }

        // stack <int> s;

        // for(auto u : v) s.push(stoi(u));

        
        // while(!s.empty()){
        //     cout<<s.top()<<" ";

        //     s.pop();
        // }


        // char c = '+';
        // int d = c;
        // cout<<d;
        
    } 
    