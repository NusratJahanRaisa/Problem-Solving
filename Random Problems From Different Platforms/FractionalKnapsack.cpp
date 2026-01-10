    #include<bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define yes cout<<"YES\n";
    #define no cout<<"NO\n";
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    


    class Solution {
  public:
     
    static bool comparetor(pair<double,int> &p1, pair<double,int> &p2){ 
         if(p1.first == p2.first)
            return p1.second > p2.second; 
         return p1.first > p2.first;  
    }
    
    double fractionalKnapsack(vector<int>& val, vector<int>& w, int capacity) {
        // code here
        vector <pair <double,int>> vp;
        
        for(int i=0;i<val.size();i++){
            double ratio = (double)val[i]/w[i];
            vp.push_back({ratio,w[i]});
        }
        
        sort(vp.begin(),vp.end(),comparetor);
        
        double totalValue=0;
        double totalWeight=0;
        
        for(auto u: vp){
            
            // cout<<u.first<<" "<<u.second<<endl;
            
            if(u.second>=capacity-totalWeight){
                totalValue+=((double)(capacity-totalWeight)*u.first);
                break;
            }
            
            if(totalWeight<capacity){
                totalValue+=((double)u.second*u.first);
                totalWeight+=u.second;
            }
        }
        
        return totalValue;
    }
};





    int main(){ 
        optimize();
        
        
    
        return 0; 
    }


    