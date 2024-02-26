// count number of words in a string

#include<iostream>
using namespace std;

int main(){
	string s;
    getline (cin, s);
	int count=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i] == ' ' && s[i+1]!=' ')
			count++;
	}
	cout<<count+1<<endl;
}
