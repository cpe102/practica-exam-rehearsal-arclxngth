#include<iostream>
using namespace std;

int main(){

    float sum=0 ,x;

    while(x!=0){

        cout<<"Enter x: ";
        cin>>x;
        
        if(x>0){
        	
        	sum +=x;
		}
		else{
			;
		}
        
    }
    
    cout<<"sum = "<<sum;

    return 0;
}

