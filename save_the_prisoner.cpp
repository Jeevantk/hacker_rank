#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        long long int n,m,s;
        cin>>n;
        cin>>m;
        cin>>s;
        m=m%n+(m%n==0)*n;
        if(m<=n-s+1){
            
            cout<<(m+s-1)<<endl;
        }
        else{
            cout<<(m-n+s-1)<<endl;
        }
    }
    
    
    return 0;
}



//CS231n Stanford course on Convolutional Neural Networks for Visual Recognition

