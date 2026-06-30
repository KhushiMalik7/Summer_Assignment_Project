//#include<iostrteam>
//using namespace std ;

// ========================================== DAY 25 ==========================================


//Q.97- MERGE TWO SORTED ARRAYS


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	vector<int> arr1 = { 1, 3, 5, 7 };
//	vector<int> arr2 = { 2, 4, 6, 8 };
//	vector<int> merged;
//	int i = 0, j = 0;
//	while (i < arr1.size() && j < arr2.size()) {
//		if (arr1[i] < arr2[j]) {
//			merged.push_back(arr1[i]);
//			i++;
//		}
//		else {
//			merged.push_back(arr2[j]);
//			j++;
//		}
//	}
//	while (i < arr1.size()) {
//		merged.push_back(arr1[i]);
//		i++;
//	}
//	while (j < arr2.size()) {
//		merged.push_back(arr2[j]);
//		j++;
//	}
//	cout << "Merged array: ";
//	for (int num : merged) {
//		cout << num << " ";
//	}
//	return 0;
//}


//Q.98-  FIND COMMON CHARACTERS IN  STRING


//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//	string str1, str2;
//	cout << "Enter first string: ";
//	cin >> str1;
//	cout << "Enter second string: ";
//	cin >> str2;
//	vector<char> commonChars;
//	for (char c : str1) {
//		if (str2.find(c) != string::npos && find(commonChars.begin(), commonChars.end(), c) == commonChars.end()) {
//			commonChars.push_back(c);
//		}
//	}
//	cout << "Common characters: ";
//	for (char c : commonChars) {
//		cout << c << " ";
//	}
//	return 0;
//}


//Q.99- SORT NAMES IN ALPHABETICAL ORDER


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	vector<string> names;
//	int n;
//	cout << "Enter number of names: ";
//	cin >> n;
//	cout << "Enter names: ";
//	for (int i = 0; i < n; i++) {
//		string name;
//		cin >> name;
//		names.push_back(name);
//	}
//	sort(names.begin(), names.end());
//	cout << "Sorted names: ";
//	for (const string& name : names) {
//		cout << name << " ";
//	}
//	return 0;
//}
//



//Q.100- SORT WORDS BY LENGTH

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	vector<string> words;
//	int n;
//	cout << "Enter number of words: ";
//	cin >> n;
//	cout << "Enter words: ";
//	for (int i = 0; i < n; i++) {
//		string word;
//		cin >> word;
//		words.push_back(word);
//	}
//	sort(words.begin(), words.end(), [](const string& a, const string& b) {
//		return a.length() < b.length();
//		});
//	cout << "Words sorted by length: ";
//	for (const string& word : words) {
//		cout << word << " ";
//	}
//	return 0;
//}


////int main(){
//// cout << " ========================================== DAY 25 ================================================ :";
//// return 0;}