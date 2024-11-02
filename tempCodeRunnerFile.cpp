// Online C++ compiler to run C++ program online
#include <bits/stdc++.h> 
using namespace std;

int main() {
  
  
  string a="aaabb"; 
  string b="baaba";
  
  
  int l=1,r=4;
  int count=0;
  
  map<char,int>mp;
  
  for(int i=l-1;i<r;i++){
      
      mp[a[i]]++;
      
  }
  
  for(auto it:mp){
      cout<<it.first<<" "<< it.second<<endl;
      
  }
  
  for(int i =l-1;i<r;i++){
      
      if(mp.find(b[i])!=mp.end()){

        mp[b[i]]--;

        if(mp[b[i]]==0){
            mp.erase(b[i]);

        }
       
          
          
      }
       else{
            count++;
        }
      
      
  }



    for(auto it:mp){
      cout<<it.first<<" "<< it.second<<endl;
      
  }
  
  cout<<count<<endl;
  

  
  

  
    return 0;
}