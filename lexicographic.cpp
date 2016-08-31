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
    string name;
    vector<string> words(t);
    for(int i=0;i<t;i++){
    	cin>>words[i];
    }
    char temp;
    for(int i=0;i<t;i++){
    	name=words[i];
    	
    	bool flag=false;
    	int sortposition=name.length()-2;
    	
    	for(int k=name.length()-1;k>=0;k--){
    		char c=name[k];
    		for(int j=k-1;j>=0;j--){
    			if(name[j]<c){
    				
    				swap(name[k],name[j]);
    				flag=true;
    				sortposition=j;
    				break;
    			}
    		}
    		if(flag){
    			break;
    		}

    	}
    	
    	if(flag){
    		for(int j=sortposition+1;j<name.length()-1;j++){
    			for(int k=j+1;k<name.length();k++){
    				if (name[j] > name[k])
            		{
                		temp = name[j];
                		name[j] = name[k];
                		name[k] = temp;
            		}
    			}
    		}

    		cout<<name<<endl;
    	}
    	else{
    		cout<<"no answer"<<endl;
    	}
    	
    	

    }
    return 0;
}