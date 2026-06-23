//#include<iostream>
//using namespace std; 

// ============================== DAY 13 ===============================

//Q.49- INPUT AND DISPLAY ARRAY

// #include<iostream>
//using namespace std; 
//
//int main() {
//	int a[5];
//
//	for (int i = 0; i < 5; i++) {
//		cin >> a[i];
//	}
//
//	for (int i = 0; i < 5; i++) {
//		cout << a[i] << " ";
//	}
//
//	return 0;
//}

//Q.50-FIND SUM AND AVERAGE OF ARRAY ELEMENTS

// #include<iostream>
//
//using namespace std;
//
//int main() {
//	int a[5], sum = 0;
//
//	for (int i = 0; i < 5; i++) { 
//		cout << " enter the five element :";
//		cin >> a[i];
//		sum = sum + a[i];
//	}
//
//	cout << " Sum =" << sum << endl;
//	cout << " Average =" << sum / 5.0;
//
//	return 0;
////}

//Q.51- FIND LARGEST AND SMALLEST ELEMENT

//#include<iostream>
//using namespace std; 
//
//int main() {
//	int arr[5];
//
//	cout << " enter 5 element :";
//	for (int i = 0; i < 5; i++) {
//		cin >> arr[i];
//	}
//	int largest = arr[0];
//	int smallest = arr[0];
//
//	for (int i = 1; i < 5; i++) {
//		if (arr[i] > largest)
//			largest = arr[i];

//		if (arr[i] < smallest)
//			smallest = arr[i];
//
//	}
//
//	cout << " Largest = " << largest << endl; 
//	cout << " smallest =" << smallest; 
//
//	return 0;
//}

//Q.52- COUNT EVEN AND ODD NUMBER

//#include<iostream>
//using namespace std; 
//
//int main() {
//	int a[5];
//	int even = 0, odd = 0;
//
//	for (int i = 0; i < 5; i++) {
//		cout << " enter five element :";
//		cin >> a[i];
//	}
//
//	for (int i = 0; i < 5; i++) {
//		if (a[i] % 2 == 0) 
//			even++;
//		else
//			odd++;
//	}
//
//	cout << "Even =" << even << endl;
//	cout << " Odd =" << odd << endl;
//
//	return 0;
//}