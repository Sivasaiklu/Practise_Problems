// matrix read and display
// finding row sum and column sum

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
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=0;i<r;i++){
		int rowSum=0, colSum=0;
		for(int j=0;j<c;j++){
			rowSum+=matrix[i][j];
			colSum+=matrix[j][i];
		}
		cout << "the row " << (i + 1) << " sum is: " << rowSum << endl;
		cout << "the column " << (i + 1) << " sum is: " << colSum << endl;
	}
	return 0;
}
