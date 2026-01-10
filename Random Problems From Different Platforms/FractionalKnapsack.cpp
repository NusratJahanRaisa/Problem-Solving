    #include<bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define yes cout<<"YES\n";
    #define no cout<<"NO\n";
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int main(){ 
        optimize();
        
        
    
        return 0; 
    }

    
    double fractionalKnapsack(vector<int>&val, vector<int>& wt, int capacity) {
        // code here
        vector <pair <int,int>> vp;
        for(int i=0;i<val.size();i++){
            vp.push_back({val[i],wt[i]});
        }
        sort(vp.begin(),vp.end());
        
        double totalValue=0;
        double totalWeight=0;
        
        for(auto u: vp){
            cout<<u.first<<" "<<u.second<<endl;
            
            if(u.second>=capacity-totalWeight){
                totalValue+=((u.first*(capacity-totalWeight))/u.second);
                break;
            }
            if(totalWeight<capacity){
                totalValue+=u.first;
                totalWeight+=u.second;
            }
        }
        
        return totalValue;
    }
