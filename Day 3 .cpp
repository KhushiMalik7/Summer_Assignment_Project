//#include<iostream>
//using namespace std;

// ================= DAY 3 ASSIGNMENT ==================

// Q.9 CHECK WHETHER A NUMBER IS PRIME OR NOT
//
//#include<iostream>
//using namespace std;
// int main (){
// int n ;
// cout << " enter n :";
// cin >> n ;
// for (int i = 1 ; i <= n ; i++)
// if (n % 2 == 0 ){
// cout << " prime number " << endl;
// }
// else { 
// cour << " not prime number << endl ;
// } 
// return 0;
// }


//Q.10 PRINT PRIME NUMBER IN RANGE 

//#include<iostream>
//using namespace std;
//int main (){
//	int a,b; // a is start of range and b is end of range;
//	cout << " enter start of range :";
//	cin >> a; // start of range ;
//	cout << " enter end of range :";
//	cin >> b; // end of range ;
//	
//	cout << " prime number between " << a << " and " << b << " are :" << endl;
//	 
//	// loop through each number in range ;
//	for (int i = a; i <= b; i++) {
//		 // skip number les than or equal to 1( 0 and 1 are not prime )
//		
//		if (i <= 1) {
//			continue;
//		}
//		bool flag = true; // flag true mean is prime ;
//		for (int j = 2; j * j <= i; j++) {
//			if (i % j == 0) {
//				flag = false; // found a factor , so its not prime number 
//				break; // stop to check further factors;
//			}
//		}
//		// if the number is prime , print it ;
//		if (flag) {
//			cout << i << " ";
//		}
//	 }
//	cout << endl;
//	return 0;
//}

 // Q 11  FIND THE GCD OF TWO NUMBER 

//#include<iostream>
//using namespace std;
//int main() {
//	int a, b;
//
//	cout << " enter first number :";
//	cin >> a;
//
//	cout << " enter second number :";
//	cin >> b;
//
//	int gcd = 1;
//
//	for (int i = 1; i <= a && i <= b; i++) {
//		if (a % i == 0 && b % i == 0) {
//			gcd = i;
//		}
//	 }
//	 
//	cout << " GCD =" << gcd << endl;
//	return 0;
//}
// 
// 
// Q.12 FIND THE LCM OF TWO NUMBERS
//

//#include<iostream>
//using namespace std;
//int main() {
// 
//	int a, b;
//
//	cout << " enter first number :";
//	cin >> a;
//	 
//	cout << " enter second number :";
//	cin >> b;
// 
//	int i = 1; 
//	 
//	while (true) {
//		if (i % a == 0 && i % b == 0) {
//			cout << " LCM = " << i << endl;
//		 }
//		i++;
//	}
// 
// 
//	return 0;
//}
 


//int main() {
//	 
//	cout << " =================== DAY 3 ASSIGNMENT ==================" << endl;
//
//	return 0;
//}