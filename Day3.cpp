//#include<iostream>
//using namespace std;

  
//====================  DAY 3 ASSIGNMENT ====================

//Q.9- CHECK WHERTHER NUMBER IS PRIME OR NOT 
//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cout << " enter n " ;
//		cin >> n;
//
//		for (int i = 1; i <= n; i++) 
//		if (n % 2 == 0 )
//		{
//			cout << " prime number " << endl;
//			break;
//		}
//		else {
//			cout << " not prime number " << endl;
//			break ;
//}
      // return 0 ;
// }

//Q.10- find the range of all prime numbers

//#include<iostream>
//using namespace std;
//int main() {
//    int a, b;
//
//    cout << " enter start of range :";
//    cin >> a;
//
//    cout << " enter end of range :";
//    cin >> b;
//
//    cout << " prime number are :";
//
//    for (int i = a; i <= b; i++) {
//
//        // check if i is prime 
//        bool flag = true;
//
//        if (i <= 1) {
//            flag = false;
//
//        }
//        for (int j = 2; j < i; j++) {
//            if (i % j == 0) {
//                flag = false;
//                break;
//            }
//        }
//         //print if prime 
//        if (flag) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//} 

//Q.11- FIND THE GCD OF TWO NUMBERS

//#include<iostream>
//using namespace std;
//int main (){
//    int a, b;
//     
//    cout << " enter first number :";
//    cin >> a;
//
//    cout << " enter second number :";
//    cin >> b;
//
//    int gcd = 1;
//
//    for (int i = 1; i <= a && i <= b; i++) {
//        if (a % i == 0 && b % i == 0) {
//            gcd = i;
//        }
//    }
//    
//    cout << " GCD =" << gcd << endl;
//    return 0;
//
//} 


// Q.12- FIND THE LCM OF TWO NUMBERS

//#include<iostream>
//using namespace std;
//int main() {
//    int a, b;
//
//    cout << " enter first number :";
//    cin >> a; 
//
//    cout << " enter second number :";
//    cin >> b;
//
//    int i = 1;
//     
//    while (true) {
//        if (i % a == 0 && i % b == 0) {
//            cout << " LCM =" << i << endl;
//            break;
//         }
//        i++;
//    }
//     
//    return 0;
//} 

//int main() {
//     
//    cout << " ================= DAY 3 ASSIGNMENT =================" << endl;
//    return 0;
// }