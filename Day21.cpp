//#include<iostream>
//using namespace std; 
//

// =================================== DAY 21 ==================================

//Q.81- FIND STRING LENGTH (WITHOUT STRLEN)

//#include<iostream>
//using namespace std; 
//int main() {
//	string str;
//	int count = 0; 
//
//	cout << " enter a string :";
//	cin >> str; // reads one word only 
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		count++;
//
//	}
//	cout << " length = " << count; 
//
//	return 0;
//
//}


//Q.82- REVESE A STRING 

//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str; 
//
//	cout << " enter a string :";
//	cin >> str; 
//
//	cout << " reverse string :";
//
//	for (int i = str.length() - 1; i >= 0; i--) {
//		cout << str[i];
//	}
//	return 0;}


//Q.83- COUNT VOWELS AND CONSONANTS 

//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str; 
//	int vowel = 0, consonant = 0;
//
//	cout << " enter a string :";
//	cin >> str;
//
//	for (int i = 0; str[i] != '\0';i++) {
//
//		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//			vowel++;
//
//		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//			consonant++;
//
//	}

//	cout << " vowel = " << vowel << endl;
//	cout << " consonant = " << consonant; 
//
//	return 0;
//}


//Q.84- CONVERT LOWERCASE TO UPPERCASE 

//#include<iostream>
//using namespace std; 
//
//int main() {
//	string str;
//
//	cout << " enter a string :";
//	cin >> str;
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] = str[i] - 32;
//		}
//	}
//
//	cout << " uppercase string :" << str;
//	return 0;
//}

//int main(){
// cout << " ======================================= DAY 21===================================== :" << endl;
// return 0 ;}