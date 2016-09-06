#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    
    string number;
    cin >> number;
    
    
    if(n%2==1){
        vector<int> positions;
        
    if(n==1){
        if(k>0){
            cout<<"9"<<endl;
        }
        else
            cout<<number<<endl;
    }
    for(int i=0;i<n/2;i++){
        if(k==0){
            bool flag=false;
            for(int j=i;j<n/2;j++){
                if(number[n/2-1-j]!=number[n/2+j+1]){
                    
                    cout<<"-1"<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag)
                return 0;
            else
                cout<<number<<endl;
            return 0;
        }
        if(number[n/2-1-i]!=number[n/2+i+1]){
            positions.push_back(n/2-1-i);
            if(number[n/2-1-i]>number[n/2+i+1]){
                number[n/2+i+1]=number[n/2-1-i];
            }
            else{
                number[n/2-1-i]=number[n/2+i];
            }
            k-=1;
        }
        
    }
    /*cout<<"printing in between "<<number<<" value of k is "<<k<<endl;
    for(int i=0;i<positions.size();i++){
        cout<<positions[i]<<endl;
    }*/
    bool flag=true;
    for(int i=0;i<n/2;i++){
        if(k<2)
            break;
        if(number[i]!='9'){
            number[i]='9';
            number[n-i-1]='9';
            int j=positions[positions.size()-1];
            if(j==i){
                k+=1;
                positions.pop_back();
            }
            k=k-2;
                
        }
    }
    if(k==1){
        int check=positions[positions.size()-1];
        number[check]='9';
        number[n-1-check]='9';
    }
    cout<<number<<endl;
        return 0;
    }
    //end of code for odd numbers
    
    
    
    
    vector<int> positions;
    
    
    for(int i=0;i<n/2;i++){
        if(k==0){
            bool flag=false;
            for(int j=i;j<n/2;j++){
                if(number[n/2-1-j]!=number[n/2+j]){
                    
                    cout<<"-1"<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag)
                return 0;
            else
                cout<<number<<endl;
            return 0;
        }
        if(number[n/2-1-i]!=number[n/2+i]){
            positions.push_back(n/2-1-i);
            if(number[n/2-1-i]>number[n/2+i]){
                number[n/2+i]=number[n/2-1-i];
            }
            else{
                number[n/2-1-i]=number[n/2+i];
            }
            k-=1;
        }
        
    }
    
    cout<<"Number made palindrome and number of turns remaining = "<<k<<" "<<number<<endl;
    
    bool flag=true;
    
    for(int i=0;i<n/2;i++){
       
        if(k<2){
            break;
        }    
        if(number[i]!='9'){
            number[i]='9';
            number[n-i-1]='9';
            if(positions.size()>0){
            int j=positions[positions.size()-1];
            if(j==i){
                k+=1;
                positions.pop_back();
            }}
            k=k-2;
                
        }
    }
    
    cout<<"After making the changes "<<number<<endl;
    if(k==1){
        int check=positions[positions.size()-1];
        number[check]='9';
        number[n-1-check]='9';
    }
    cout<<number<<endl;
    
    
    return 0;
}