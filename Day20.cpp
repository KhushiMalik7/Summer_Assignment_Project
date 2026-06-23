//#include<iostream>
//using namespace std ;

// ===================== DAY 20 ========================


//Q.77- MULTIPLY TWO MATRICES 


//#include<iostream>
//using namespace std; 
//
//int main() {
//	int a[2][2] = { { 1,2 },{3,4} };
//	int b[2][2] = { { 5,6 },{ 7,8} };
//	int c[2][2];
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0;j < 2; j++) {
//			c[i][j] = 0;
//
//			for (int k = 0; k < 2; k++) {
//				c[i][j] += a[i][k] * b[k][i];
//			}
//		}
//	}
//	cout << " Multiplication matrix:\n ";
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++)
//			cout << c[i][j] << " ";
//		cout << endl;
//	}
//	return 0;
//}


//Q.78- check symmetric matrix

//#include<iostream>
//using namespace std; 
//
//int main() {
//	int a[2][2] = { { 1, 2},{2,1} };
//	bool symmetric = true; 
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			if (a[i][j] != a[j][i])
//				symmetric = false; 
//		}
//	}
//
//	if (symmetric)
//		cout << " symmetric matrix ";
//	else
//		cout << " not symmetric matrix "; 
//
//	return 0;
//}
//



//Q.79- FIND ROW-WISE SUM

//#include<iostream>
//using namespace std; 
//
//int main() {
//	int a[2][2] = { {1,2},{3,4} };
//
//	cout << " row 1 sum = " << a[0][0] + a[0][1] << endl;
//	cout << " row 2 sum = " << a[1][0] + a[1][1];
//
//	return 0;
//}
//

//Q.80- COLUMN-WISE SUM  


//#include<iostream>
//using namespace std; 
//
//int  main() {
//	int a[2][2] = { {1,2},{3,4} };
//
//	cout << " column 1 sum = " << a[0][0] + a[1][0] << endl; 
//	cout << " column 2 sum = " << a[1][0] + a[1][1];
//
//	return 0;
//}


//int main() {
//
//	cout << " ======================================== DAY 20 =========================================" << endl; 
//	return 0;
//}