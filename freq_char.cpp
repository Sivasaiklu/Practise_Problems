//to print highest frequency character in a given string

#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int freq[26]={0}, max_idx=0, max_freq=0;
	for(int i=0;str[i]!='\0';i++){
		int idx = str[i]-'a';
		freq[idx]++;
		if(freq[idx] > max_freq){
			max_freq = freq[idx];
			max_idx = idx;
		}
	}
	cout<<char(max_idx+'a')<<endl;
}
