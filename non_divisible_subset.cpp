#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]%=k;
    }
    
    int elements[k];
    for(int i=0;i<k;i++){
        elements[i]=0;
    }
    cout<<"array values are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    




    for(int i=0;i<n;i++){
        elements[arr[i]]++;
    }

    cout<<"elements are" <<endl;
    for(int i=0;i<k;i++){
        cout<<elements[i]<<" ";
    }
    cout<<endl;

    int ans=0;
    
    int flag=(k%2!=0);
    for(int i=1;i<k/2+flag;i++){
        
        if(elements[i]>=elements[k-i]){
            ans+=elements[i];
        }
        else{
            ans+=elements[k-i];
        }
    }
    
    if(elements[0]>0)
        ans+=1;
    if(k%2==0){
        if(elements[k/2]>0){
            ans+=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}