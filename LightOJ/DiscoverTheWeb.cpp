#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    stack<string> st, backup;
    string current = "http://www.lightoj.com/"; // current page

    while (true)
    {
        string command;
        cin >> command;

        if(command=="QUIT"){
            break;
        }

        else if(command=="VISIT"){
            string url; cin >> url;
            st.push(current);           // push current to back stack
            current = url;              // update current
            while(!backup.empty()) backup.pop(); // clear forward stack
            cout << current << endl;
        }

        else if(command=="BACK"){
            if(st.empty()){             // no back pages
                cout << "Ignored" << endl;
            }
            else{
                backup.push(current);    // current goes to forward
                current = st.top(); st.pop(); // back top becomes current
                cout << current << endl;
            }
        }

        else if(command=="FORWARD"){
            if(backup.empty()){          // no forward pages
                cout << "Ignored" << endl;
            }
            else{
                st.push(current);         // current goes to back
                current = backup.top(); backup.pop(); // forward top becomes current
                cout << current << endl;
            }
        }
    }
}

int main(){
    optimize();

    int t; cin >> t;
    for(int cs = 1; cs <= t; cs++){
        cout << "Case " << cs << ":" << endl;
        Ja_han();
    }

    return 0;
}