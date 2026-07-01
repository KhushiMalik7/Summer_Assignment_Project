//#include<iostream>
//using namespace std;


// =============================================== DAY 29 ==========================================================


//Q.113-  MENU DRIVEN CALCULATOR
//
//#include<iostream>
//using namespace std; 
//
//int main() {
//	int choice;
//	double num1, num2, result;
//	do {
//		cout << "\nMenu Driven Calculator" << endl;
//		cout << "1. Addition" << endl;
//		cout << "2. Subtraction" << endl;
//		cout << "3. Multiplication" << endl;
//		cout << "4. Division" << endl;
//		cout << "5. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		if (choice >= 1 && choice <= 4) {
//			cout << "Enter first number: ";
//			cin >> num1;
//			cout << "Enter second number: ";
//			cin >> num2;
//		}
//		switch (choice) {
//			case 1:
//				result = num1 + num2;
//				cout << "Result: " << result << endl;
//				break;
//			case 2:
//				result = num1 - num2;
//				cout << "Result: " << result << endl;
//				break;
//			case 3:
//				result = num1 * num2;
//				cout << "Result: " << result << endl;
//				break;
//			case 4:
//				if (num2 != 0) {
//					result = num1 / num2;
//					cout << "Result: " << result << endl;
//				} else {
//					cout << "Error: Division by zero!" << endl;
//				}
//				break;
//			case 5:
//				cout << "Exiting the calculator. Goodbye!" << endl;
//				break;
//			default:
//				cout << "Invalid choice! Please try again." << endl;
//		}
//	} while (choice != 5);
//	return 0;
//}



//Q.114- MENU DRIVEN ARRAY OPERATIONS

//
//#include<iostream>
//using namespace std; 
//
//int main() {
//	int choice;
//	const int SIZE = 5;
//	int arr[SIZE];
//	cout << "Enter " << SIZE << " elements for the array: ";
//	for (int i = 0; i < SIZE; i++) {
//		cin >> arr[i];
//	}
//	do {
//		cout << "\nMenu Driven Array Operations" << endl;
//		cout << "1. Display Array" << endl;
//		cout << "2. Find Maximum" << endl;
//		cout << "3. Find Minimum" << endl;
//		cout << "4. Calculate Sum" << endl;
//		cout << "5. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "Array Elements: ";
//			for (int i = 0; i < SIZE; i++) {
//				cout << arr[i] << " ";
//			}
//			cout << endl;
//			break;
//		case 2:
//			int maxVal;
//			maxVal = arr[0];
//			for (int i = 1; i < SIZE; i++) {
//				if (arr[i] > maxVal) {
//					maxVal = arr[i];
//				}
//			}
//			cout << "Maximum Value: " << maxVal << endl;
//			break;
//		case 3:
//			int minVal;
//			minVal = arr[0];
//			for (int i = 1; i < SIZE; i++) {
//				if (arr[i] < minVal) {
//					minVal = arr[i];
//				}
//			}
//			cout << "Minimum Value: " << minVal << endl;
//			break;
//		case 4:
//			int sum = 0;
//			for (int i = 0; i < SIZE; i++) {
//				sum += arr[i];
//			}
//			cout << "Sum of Elements: " << sum << endl;
//			break;
//		case 5:
//			cout << "Exiting the program. Goodbye!" << endl;
//			break;
//		default:
//			cout << "Invalid choice! Please try again." << endl;
//		}
//	} while (choice != 5);
//	return 0;
//}


//Q.115- MENU DRIVEN STRING OPERATIONS

//
//#include<iostream>
//using namespace std; 
//
//int main() {
//	int choice;
//	string str1, str2;
//	cout << "Enter first string: ";
//	cin >> str1;
//	cout << "Enter second string: ";
//	cin >> str2;
//	do {
//		cout << "\nMenu Driven String Operations" << endl;
//		cout << "1. Concatenate Strings" << endl;
//		cout << "2. Compare Strings" << endl;
//		cout << "3. Find Length of First String" << endl;
//		cout << "4. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "Concatenated String: " << str1 + str2 << endl;
//			break;
//		case 2:
//			if (str1 == str2) {
//				cout << "Strings are equal." << endl;
//			}
//			else {
//				cout << "Strings are not equal." << endl;
//			}
//			break;
//		case 3:
//			cout << "Length of First String: " << str1.length() << endl;
//			break;
//		case 4:
//			cout << "Exiting the program. Goodbye!" << endl;
//			break;
//		default:
//			cout << "Invalid choice! Please try again." << endl;
//		}
//	} while (choice != 4);
//	return 0;
//}
// 



//Q.116- INVENTORY MANAGEMENT SYSTEM


//#/*include<iostream>
//using namespace std; 
//
//int main() {
//	struct Item {
//		string name;
//		int quantity;
//		double price;
//	};
//	const int SIZE = 5;
//	Item inventory[SIZE];
//	int choice;
//	do {
//		cout << "\nInventory Management System" << endl;
//		cout << "1. Add Item" << endl;
//		cout << "2. View Inventory" << endl;
//		cout << "3. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			for (int i = 0; i < SIZE; i++) {
//				cout << "Enter item name: ";
//				cin >> inventory[i].name;
//				cout << "Enter item quantity: ";
//				cin >> inventory[i].quantity;
//				cout << "Enter item price: ";
//				cin >> inventory[i].price;
//			}
//			break;
//		case 2:
//			cout << "\nInventory List:" << endl;
//			for (int i = 0; i < SIZE; i++) {
//				cout << "Item Name: " << inventory[i].name
//					<< ", Quantity: " << inventory[i].quantity
//					<< ", Price: $" << inventory[i].price << endl;
//			}
//			break;
//		case 3:
//			cout << "Exiting the system. Goodbye!" << endl;
//			break;
//		default:
//			cout << "Invalid choice! Please try again." << endl;
//		}
//	} while (choice != 3);
//	return 0;
//}*/


//int main(){
// cout << " ========================================================== DAY 29 =================================================== :";
// return 0 ;}