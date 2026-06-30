//#include<iostream>
//using namespace std;


// ============================ DAY 22 ==================================

//Q.85- CHECK PALINDROME STRING 

//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str; 
//	bool palindrome = true; 
//
//	cout << " enter a string :";
//	cin >> str; 
//
//	int n = str.length();
//
//	for (int i = 0; i < n / 2; i++) {
//		if (str[i] != str[n - 1 - i]) {
//			palindrome = false; 
//			break; 
//		}
//	}
//
//	if (palindrome)
//		cout << " palindrome :";
//	else
//		cout << "not palindrome ;";
//
//	return 0;
//}


//Q.86- COUNT WORDS IN A SENTENCE 


//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str; 
//	int i, flag = 0; 
//
//	cout << " enter a string :";
//	cin >> str; 
//
//	int n = str.length();
//
//	for (i = 0; i < n / 2; i++) {
//		if (str[i] != str[n - i - 1]) {
//			
//				flag = 1;
//				break;
//			} 
//		}
//	if (flag == 0)
//		cout << " palindrome ";
//	else
//		cout << " not palindrome";
//	return 0; 
//	
//}


//Q.86- COUNT WORDS IN A SENTENCE

//#include<iostream>
//using namespace  std; 
//
//int main() {
//	string str; 
//	int words = 1;
//
//	cout << " enter a  sentence :";
//	cin >> str;
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] == ' ')
//			words++;
//	}
//
//	cout << " Total Words = " << words;
//
//	return 0;
//}


// =============================== DAY 87 ================================


//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str; 
//	char ch; 
//	int count = 0;
//
//	cout << " enter a string :";
//	cin >> str;
//
//	cout << " enter character :";
//	cin >> ch;
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] == ch)
//			count++;
//	}
//
//	cout << " frequency = " << count; 
//
//	return 0;
//}


//Q.88- REMOVE SPACES FROM STRING 


//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str; 
//
//	cout << " enter a string :";
//	cin >> str;

	//cout << " string without spaces :";

	//for (int i = 0; str[i] != '\0'; i++) {
	//	if (str[i] != ' ')
	//		cout << str[i];
	//}
	//return 0;
	//	
	//}
	

// int main(){
// cout << " ================================ DAY 22 ============================= " << endl;
//return 0;}
