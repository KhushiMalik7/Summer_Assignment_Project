//#include<iostream>
// using namespace std ;

// =========== DAY 6 ASSIGNMENT ==========


//Q.21- WAP TO CONVERT DECIMAL TO BINARY 


//	  #include<iostream>
//     using namespace std;
//
//     int main() {
//	int n; 
//
//	cout << " enter a decimal number :";
//	cin >> n; 
//
//	while (n > 0) {
//
//		cout << (n % 2);
//		n = n / 2;
//	}
//
//	return 0;
//	
//}

// Q.22- CONVERT BINARY TO DECIMAL 

//#include<iostream>
//using namespace std;
//int main() {
//	int binary, decimal = 0, base = 1, rem;
//
//	cout << " enter binary number :";
//	cin >> binary;
//
//	while (binary > 0) {
//		rem = binary % 10; 
	//	decimal = decimal + (rem * base);
	//	base = base * 2;
	//	binary = binary / 10;
	//}
	//cout << " decimal number = " << decimal;
	//return 0;
 //}

//Q.23- COUNT SET BITS

//#include<iostream>
//using namespace std;
//int main() {
//	int n; 
//	cout << " enter n :";
//	cin >> n; 
//
//	int count = 0;
//
//	while (n > 0) {
//		if (n % 2 == 1) {
//			count++;
//		}
//		n = n / 2; 
//	} 
//	cout << " set bits = " << count;
//	return 0;
// 

//Q.24- FIND X^n WITHOUT USING POW()

//#include<iostream>
//using namespace std;
//int main() {
//	int x, n; 
//	int result = 1; 
//
//	cout << " enter base :";
//	cin >> x; 
//
//	cout << " enter power :";
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		result = result * x;
//	}
//	 
//	cout << " answer =" << result;
//
//	return 0;
// }

//int main() {
//
//	cout << " ============== DAY 6 ASSIGNMENT ===============" << endl;
//	return 0;
// }