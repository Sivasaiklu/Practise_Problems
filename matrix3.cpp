// transpose of matrix
// sum of diagonal and off diagonal values

#include<iostream>
using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int matrix[r][c];
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>matrix[i][j];
		}
	}
	cout<<"\n";
	
	cout<<"Transpose is :"<<endl;
	cout<<"-------------------"<<endl;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<matrix[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	int dSum=0, odSum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(i==j)
				dSum+=matrix[i][i];
			else
				odSum+=matrix[i][j];
		}
	}
	cout<<"\n"<<endl;
	cout<<"Sum of Diagonal values is : "<<dSum<<endl;
	cout<<"Sum of Off-Diagonal Values is : "<<odSum<<endl;
	return 0;
}
