//#include<iostream>
//using namespace std;

// ========================================= DAY 16 =============================================

//Q.61- FIND MISSING NUMBER IN ARRAY


//#include<iostream>
//using namespace std; 
//
//int main() {
//	int arr[4] = { 50 , 55, 60, 65 };
//	int sum = 0; 
//
//	for (int i = 0; i < 4; i++) {
//		sum = sum + arr[i];
//	}
//	int total = 5 * 6 / 2; // sum of 1 to 5;
//
//	cout << " MISSING NUMBER = " << total - sum;
//
//	return 0;
//}



//Q.62- FIND MAXIMUM FREQUENCY ELEMENT


// #include<iostream>
//using namespace std; 
// 
//int main() {
//	int arr[5] = { 45 , 50 , 55, 60 , 65 };
//	int count = 0, maxcount = 0, element; 
//
//	for (int i = 0; i < 5; i++) {
//		count = 0; 
//
//		for (int j = 0; j < 5; j++) {
//			if (arr[i] == arr[j]) {
//				count++;
//
//			}
//
//		 }
//		if (count > maxcount) {
//			maxcount = count;
//			element = arr[i];
//		}
//
//	 }
//	cout << " MAXIMUM FREQUENCY ELEMENT =" << element; 
//	return 0;
//}


  
//Q.63- FIND PAIR WITH GIVEN SUM 


// #include<iostream>
//using namespace std; 
//
//int main() {
//	int arr[5] = { 1, 2, 3 , 4, 5};
//	int sum = 7; 
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = i + 1; j < 5; j++) {
//			if (arr[i] + arr[j] == sum) {
//				cout << arr[i] << " + " << arr[j] << " = " << sum << endl;
//			}
//		}
//	}
//	return 0;
//}


//Q.64- REMOVE DUPLICATE FROM ARRAY


//#include<iostream>
//using namespace std; 
// 
//int main() {
//	int arr[5] = { 55, 58,58,64,55 };
//
//	cout << " Array without duplicate :";
//
//	for (int i = 0; i < 5; i++) {
//		bool duplicate = false; 
//
//		for (int j = 0; j < i; j++) {
//			if (arr[i] == arr[j]) {
//				duplicate = true;
//				break;
//			}
//		}
//		if (!duplicate) {
//			cout << arr[i] << " ";
//		 }
//	}
//	return 0;
//}


//int main (){
//  cout << "  =============================================== DAY 16 ========================================== " << endl ;
// return 0 ;
// }