// palindrome or not

#include<iostream>
using namespace std;

int main(){
	string str;
	cin>>str;
	int i=0, j=str.length()-1, flag=1;
	while(i<j){
		if(str[i] != str[j]){
			flag=0;
			break;
		}
		i++;
		j--;
	}
	flag == 1 ? cout<<"Yes" : cout<<"No";
}
