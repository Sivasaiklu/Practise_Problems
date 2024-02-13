// the product of two numbers without using * symbol
// this method is also known as Russian Peasant Multiplication
/* this method involves we will double the first number and divide the second
   number to become half if the second number becomes odd then add the number 1 to the result
   finally the result is printed*/
   
// a= 20 b=12 ans = 240   


#include<iostream>
using namespace std;

int  main(){
	int num1, num2, product=0;  
	cin>>num1>>num2;            // scan 2 numbers 
	while(num2){                // continue while loop until num2 becomes 1
		if(num2&1){             // if num2 is odd add the num2 to the product
			product+=num1;
		}
		num1 = num1 << 1;      // left shift operation calculates the double of the number 1
		num2 = num2 >> 1;      // right shift operator calculates the half of the number 2
	}
	cout<<product<<endl;
	return 0;
}



