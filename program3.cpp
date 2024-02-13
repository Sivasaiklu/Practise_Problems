// prime or not

#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int flag = 1;
	if(n==1)
		flag = 0;
    else if(n==2 || n==3)
		flag = 1;
	else if(n%2==0 || n%3==0)
		flag = 0;
	else{
		for(int i=5;i<sqrt(n);i=i+6){
			if((n%i==0) || (n%(i+2)==0)){
				flag = 0;
				break;
			}
		}
	}
	flag == 1 ? cout<<"Prime Number" : cout<<"Not a Prime Number";				
	
	return 0;
	
	
}
