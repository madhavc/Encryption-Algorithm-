//Madhav Chhura
//CS256
//01-12-2014

//Given a 4-digit integer this program implements a encrypted algorithm 
//and outputs the encrypted integer. 

	#include<iostream>
	using namespace std;
	
	int main()
	{
		int input;

	
		cout << "Enter a 4-digit integer:		"; 
		cin >> input; 
		
		int num1 = (input / 1000); 
		int rem1 = (input % 1000);
		
		int num2 = (rem1 / 100); 
		int rem2 = (rem1 % 100);
		
		int num3 = (rem2 / 10); 
		int rem3 = (rem2 % 10);
				
		int num4 = (rem3 / 1);
		int rem4 = (rem3 % 1);
		
		int n1 = (num1 + 7) % 10;
		int n2 = (num2 + 7) % 10;
		int n3 = (num3 + 7) % 10;
		int n4 = (num4 + 7) % 10;
		 
		cout << "The encrypted integer for " << input << " is:	" << n3 << n4 << n1 << n2 << endl; 
	}
