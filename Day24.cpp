//#include<iostream>
//using namespace std;

  
// ================================== DAY 24 ==================================


//Q.93- CHECK STRING ROTATION

//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str1, str2;
//	cout << " enter first string :";
//	cin >> str1;
//	cout << " enter second string :";
//	cin >> str2;
//	if (str1.length() != str2.length()) {
//		cout << " not a rotation string ";
//		return 0;
//	}
//	string temp = str1 + str1;
//	if (temp.find(str2) != string::npos)
//		cout << " is a rotation string ";
//	else
//		cout << " not a rotation string ";
//	return 0;
//}


//Q.94- COMPRESS A STRING 


//#include<iostream>
//#include<string>
//using namespace std; 
//
//int main() {
//	string str;
//	cout << " enter a string :";
//	cin >> str;
//	int count = 1;
//	string result = "";
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == str[i + 1]) {
//			count++;
//		}
//		else {
//			result += str[i];
//			result += to_string(count);
//			count = 1;
//		}
//	}
//	cout << " compressed string :" << result;
//	return 0;
//}

//Q.95- FIND THE LONGEST WORD


//#include<iostream>
//#include<string>
//using namespace std; 
//
//int main() {
//	string str;
//	cout << " enter a string :";
//	cin.ignore();
//	getline(cin, str);
//	int maxLength = 0;
//	string longestWord = "";
//	string word = "";
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] != ' ') {
//			word += str[i];
//		}
//		else {
//			if (word.length() > maxLength) {
//				maxLength = word.length();
//				longestWord = word;
//			}
//			word = "";
//		}
//	}
//	if (word.length() > maxLength) {
//		longestWord = word;
//	}
//	cout << " longest word :" << longestWord;
//	return 0;
//}


//Q.96- REMOVE DUPLICATE CHARACTERS FROM STRING


//#include<iostream>
//using namespace std;
//
//int main() {
//	string str;
//	cout << " enter a string :";
//	cin >> str;
//	string result = "";
//	for (int i = 0; i < str.length(); i++) {
//		if (result.find(str[i]) == string::npos) {
//			result += str[i];
//		}
//	}
//	cout << " string after removing duplicate characters :" << result;
//	return 0;}


//int main() {
// cout << " =================================== DAY 24 ================================ :";
// return 0;}