//#include<iostream>
//using namespace std;


// ======================================= DAY 23 ========================================


//Q.89- FIND FIRST NON REPEATING CHARACTER

//#include<iostream>
//using  namespace std;
//
//int main() {
//	string str; 
//	cout << " enter a string:";
//	cin >> str;
//
//	for (int i = 0; i < str.length();i++) {
//		int count = 0; 
//
//		for (int j = 0; j < str.length();j++) {
//			if (str[i] == str[j])
//				count++;
//		}
//		if (count == 1) {
//			cout << "first  non - repearting character:" << str[i];
//			return 0;
//		}
//	}
//	cout << " no non - repeating character ";
//	return 0;
//
//}


//Q.90- FIND FIRST REPEATING CHARACTER


//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str;  //for the string 
//	cout << " enter a string :";
//	cin >> str;
//
//
//	for (int i = 0; i < str.length(); i++) {
//		for (int j = i + 1; j < str.length();j++) {
//			if (str[i] == str[j])
//				cout << " first repeating charachter :";
//			return 0;
//		}
//	}
//	cout << " non repeating character :";
//	return 0;
//}


//Q.91- CHECK ANAGRAM STRING 


//#include<iostream>
//#include<algorithm>
//using namespace std; 
//
//int main() {
//	string str1, str2;
//
//	cout << " enter first string :";
//	cin >> str1;
//
//	cout << " enter second string :";
//	cin >> str2;
//
//	sort(str1.begin(), str1.end());
//	sort(str2.begin(), str2.end());
//
//	if (str1 == str2)
//		cout << " anagram :";
//	else
//		cout << " not anagram :";}


//Q.93- FIND MAXIMUM OCCURING CHARACTER

//#include<iostream>
//using namespace std;
//
//int main() {
//	string str;
//	cout << " enter a string :";
//	cin >> str;
//	int count[256] = { 0 };
//	for (int i = 0; i < str.length();i++) {
//		count[str[i]]++;
//	}
//	int maxCount = 0;
//	char maxChar;
//	for (int i = 0; i < 256;i++) {
//		if (count[i] > maxCount) {
//			maxCount = count[i];
//			maxChar = i;
//		}
//	}
//	cout << " maximum occuring character :" << maxChar;
//	return 0;
//}
//
//int main(){
// cout << " ====================================== DAY 23 ====================================== "
// return 0;}