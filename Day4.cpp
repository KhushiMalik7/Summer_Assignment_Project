// #include<iostream>
// using namespace std ;

// =========== DAY 4 ASSIGNMENT ==========


//Q.13- GENERATE FIBONACCI SERIES


//#include<iostream>
//using namespace std;
//
//int main() {
//	int n, a = 0, b = 1, c;
//
//	cout << " enter n :"; // where n is number of terms ;
//	cin >> n;
//
//	cout << " fibonacci series :";
//
//	for (int i = 1; i <= n; i++) { // condition for fibonacci ;
//		cout << a << " ";
//		c = a + b;
//      a = b;
//      b = c;
//       }
//        return 0;
//        }
 
//Q.14- FIND nTH FIBONACCI TERM

//#include<iostream>
//using namespace std;
//
//int main() {
//	int n, a = 0, b = 1, c;

//   if ( n == 1)
//		cout << " fibonnaci term =" << a;
//	else if (n == 2)
//		cout << " fibonnaci term =" << b;
//	else {
//		for (int i = 3; i <= n; i++) {
//			c = a + b;
//			a = b;
//			b = c;
//		 }
//		cout << " fibpnnaci term = " << b;
//	}
//	return 0;
//}

//Q.15- CHECK ARMSTRONG NUMBER 

//#include<iostream>
//using  namespace std; 
//int main() {
//	int n;
//	cout << " enter n : ";
//	cin >> n;
//
//	int temp, digit, sum = 0;
//
//	temp = n;
//
//	while (temp > 0) {
//		digit = temp % 10; 
//		sum = sum + digit * digit * digit;
//		temp = temp / 10;
//	 }
//	if (sum == n)
//		cout << n << " is an armstromg number ";
//	else
//		cout << n << " is not armstrong number ";
//
//	return 0; 
//
//} 

 //Q. 16- PRINT ARMSTRONG NUMBER IN A RANGE 

//#include<iostream>
//using  namespace std; 
//int main() {
//	int  start, end;
//
//	cout << " enter strating number : ";
//	cin >> start;
//
//	cout << " enter ending number :";
//	cin >> end;
////
//	int  num, temp, digit, sum = 0;
//
//	cout << " armstrong number are :";
//
//	for (int num = start; num <= end; num++) {
//		int temp = num;
//		int sum = 0, digit;
//
//		while (temp > 0) {
//			digit = temp % 10;
//			sum = sum + digit * digit * digit;
//			temp = temp / 10;
//		}
//		if (sum == num)
//			cout << num << " ";
//
//	}
//	return 0;
//}
  

//int main() {
//
//	cout << " ================ DAY 4 ASSIGNMENT ===============" << endl;
//	return 0;
//}