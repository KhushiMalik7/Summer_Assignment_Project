//#include<iostream>
// using namespace std ;

// =========== DAY 5 ASSIGNMENT ==========


//Q.17- CHECK PERFECT NUMBER 


//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//
//	cout << " enter n :";
//	cin >> n;
//
//	int sum = 0;
//
//	for (int i = 1; i <= n; i++) { // condition of iterations to check the number;
//		if (n % i == 0) { 
//			sum += i;  // sum = sum + i;
//
//		}
//		 
//	 }
//	if (sum == n) {
//		cout << n << " is a perfect number :";
//	 }
//	else {
//		cout << n << " is not perfect number :";
//	}
//	return 0;
//} 

//Q.18- CHECK STRONG NUMBER 

//#include<iostream>
//using namespace std; 
//
//int main () {
//	int n, originalnum, rem, sum = 0;
//
//	cout << " enter n :";
//	cin >> n;
//	 
//	originalnum = n;
//	 
//	while (n > 0) {
//		rem = n % 10;
//		 
//		 // find the factorial of digit
//		int fact = 1;
//		for (int i = 1; i <= rem; i++) {
//			fact *= i;
//		 }
//
//		sum += fact;
//		n /= 10;
//
//	 }
//	if (sum == originalnum) {
//		cout << originalnum << "  a strong number :";
//
//	}
//	else {
//		cout << originalnum << " not a strong number :";
//	}
//
//	return 0;
//}


//Q.19- PRINT FACTORS OF A NUMBER 

//#include<iostream>
//using namespace std;
//int main() {
//	int n; 
//
//	cout << " enter n :";
//	cin >> n; 
//
//	cout << " factors are :";
//
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0)
//			cout << i << " ";
//	}
//	return 0;
// }

 //Q.20- FIND LARGEST PRIME FACTOR 

//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	 
//	cout << " enter n :";
//	cin >> n;
//	 
//	int largestprime = 0;
//
//	for (int i = 2; i <= n;i++) {
//		if (n % i == 0) {
//			bool prime = true;
//
//			for (int j = 2; j < i; j++) {
//				if (i % j == 0) {
//					prime = false;
//					break;
//				}
//
//			}
//			if (prime)
//				largestprime = i;
//		}
//	}
//	cout << " largestprime factor =" << largestprime;
//	return 0;
// } 

//int main() {
//
//	cout << " ================ DAY 5 ASSIGNMENT ===============" << endl;
//	return 0;
//}