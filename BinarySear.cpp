//#include<iostream>
//using namespace std; 
// 
//int main() {
//	int arr[5] = { 10, 20 , 30 , 40 , 50 };
//	int num = 30;
//
//	int low = 0, high = 4;
//
//	while (low <= high) {
//		int mid = (low + high) / 2;
//
//		if (arr[mid] == num) {
//			cout << "Found";
//			break;
//		}
//		if (arr[mid] < num)
//			low = mid + 1;
//		else
//			high = mid - 1;
//	}
//	return 0;
// }