// matrix addition
// matrix multiplication

#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int a[r][c], b[r][c], p[r][c];
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>b[i][j];
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=a[i][j]+b[i][j];
		}
	}
	
	cout<<"Matrix Addition"<<"\n";
	cout<<"-----------------"<<"\n";
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Matrix Multiplication"<<"\n";
	cout<<"---------------------"<<"\n";
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			p[i][j]=0;
			for(int k=0;k<c;k++){
				p[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<p[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
