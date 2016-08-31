#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;

int findmin(vector<int>& arr){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int flag=1;
    
    while(n>0){
	   cout<<n<<endl;
        int min=findmin(arr);
	   
        vector<int> erase_elements;
        for(int i =0;i <n; i++){
            arr[i]-=min;
            
            
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                arr.erase(arr.begin()+i);
		        i--;
            }
        }
        n=arr.size();
        
        
    }
    return 0;
}