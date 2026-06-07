//#include<iostream>
//using namespace std;

// =================  DAY 7 ASSIGNMENT  ================

// Q.25- RECURCIVE FACTORIAL 

//#include<iostream>
//using namespace std; 
//int factorial(int n ) {
//	if (n == 0 || n == 1)
//		return 1; 
//	return n * factorial(n - 1);
//}
//int main() {
//	int n; 
//	cout << " enter a number :";
//	cin >> n; 
//
//	cout << " factorial =" << factorial(n);
//	return 0; 
//}


//Q.26- RECURSIVVE FIBONACCI 

//#include<iostream>
//using namespace std; 
//int fibonacci(int n) {
//	if (n <= 1)
//		return n; 
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//	int n; 
//	cout << " enter a number :";
//	cin >> n; 
//
//	for (int i = 0; i < n; i++) {
//		cout << fibonacci(i) << " ";
//	}
//	return 0;
//}


//Q.27- RECURSIVE SUM OF DIGITS

//#include<iostream>
//using namespace std; 
// 
//int sumdigits(int n) {
//	if (n == 0)
//		return 0;
//	return (n % 10) + sumdigits(n / 10);
//}
//int main() {
//	int n;
//	cout << " enter  a number : ";
//	cin >> n;
//	 
//	cout << " sum of digits = " << sumdigits(n);
//	return 0; 
//}


//Q.28- RECURSIVE REVERSE NUMBER 
//
//#include<iostream>
//using namespace std; 
//
//int reverseNum(int n, int rev = 0) {  // rev is the for reverse number ; 
//	if (n == 0)
//		return rev; 
//
//	return reverseNum(n / 10, rev * 10 + n % 10);
//
//}
//
//int main() {
//	int n; 
//	cout << " enter a number : "; 
//	cin >> n; 
//
//	cout << "REVERSE NUMBER = " << reverseNum(n);
//	return 0;
//	 
//}



//int main() {
//
//	cout << " ================ DAY 7 ASSIGNMENT =============== " << endl;
//
//	return 0;
//}