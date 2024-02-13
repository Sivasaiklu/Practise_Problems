// find the sum of odd factors of each number in the range of 1 to n

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count=0, sum=0;
	for(int i=1;i<=n;i=i+2){
		count = n/i;
		sum = sum+i*count;
	}
	cout<<sum<<endl;
	return 0;
}
