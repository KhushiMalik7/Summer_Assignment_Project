//#include<iostream>
//using namespace std;
//
 
// 
// ============================== DAY 12 ===============================
// 
// 
// Q.45- FUNCTION FOR PALLINDROME NUMBER
// 
//#include<iostream>
//using namespace std;
//
//bool palindrome(int n) {
//	int temp = n, rev = 0;
//
//	while (n > 0) {
//		rev = rev * 10 + n % 10;
//		n = n / 10;
//	}
//	return temp == rev;
//}
//int main() {
//	int num;
//	cout << " enter number :";
//	cin >> num;
//
//	if (palindrome(num))
//		cout << " palindrome number";
//	else
//		cout << " not palindrome number";
//	return 0;
//}
//	
//

// 
// //Q.46- ARMSTRONG NUMBER USING FUNCTION 
//
//#include<iostream>
//using namespace std; 
//
// 
//void armstrong(int n) {
//	int sum = 0, temp = n, digit; 
//
//	while (n > 0) {
//		digit = n % 10;
//		sum = sum + digit * digit * digit; 
//		n = n / 10;
//	}
//	if (sum == temp)
//		cout << " armstrong ";
//	else
//		cout << " not armstrong";
//}
//
//int main() {
//	int num; 
//	cout << " enter  num :";
//	cin >> num; 
//	
//	armstrong(num);

//return 0; }

//
//}

//Q.47- FUNCTION FOR FIBONACCI SERIES

//#include<iostream>
//using namespace std; 
//
//void fibonacci(int n) {
//	int a = 0, b = 1, c;
//
//	for (int i = 1; i <= n; i++) {
//		cout << a << " ";
//		c = a + b;
//		a = b; 
//		b = c;
//	}
//}
//int main() {
//	int n; 
//	cout << " enter n :";
//	cin >> n;
//
//	fibonacci(n);
//
//	return 0;
// }

//Q.48- FUNCTION FOR PERFECT NUMBER 

//#include<iostream>
//using namespace std; 
//
//bool perfect(int n) {
//	int sum = 0;
//	
//	for (int i = 1; i < n; i++) {
//		if (n % i == 0)
//			sum += i;
//	}
//	return sum == n;
// }
//int main() {
//	int n; 
//	cout << " enter n:";
//	cin >> n;
//
//	if (perfect(n))
//		cout << " perfect number :";
//	else
//		cout << " not perfect number :";
//
//	return 0;

 //}

//int main (){
// cout << " ====================== DAY 12 ====================== "<< endl;
// return 0 ;
// }