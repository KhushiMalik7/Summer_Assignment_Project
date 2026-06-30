//include<iostream>
//using namespace std;

// =============================== DAY 26 ================================================ 


//Q.101- WAP TO CREATE NUMBER GUESSING GAME


//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//
//int main() {
//	srand(time(0)); // Seed the random number generator
//	int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
//	int userGuess = 0;
//	int attempts = 0;
//	cout << "Welcome to the Number Guessing Game!" << endl;
//	cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;
//	while (userGuess != numberToGuess) {
//		cout << "Enter your guess: ";
//		cin >> userGuess;
//		attempts++;
//		if (userGuess < numberToGuess) {
//			cout << "Too low! Try again." << endl;
//		}
//		else if (userGuess > numberToGuess) {
//			cout << "Too high! Try again." << endl;
//		}
//		else {
//			cout << "Congratulations! You've guessed the number " << numberToGuess << " in " << attempts << " attempts." << endl;
//		}
//	}
//	return 0;
//}


//Q.102- VOTING ELIGIBILITY SYSTEM


//#include<iostream>
//using namespace std;
//
//int main() {
//	int age;
//	cout << "Enter your age: ";
//	cin >> age;
//	if (age >= 18) {
//		cout << "You are eligible to vote." << endl;
//	}
//	else {
//		cout << "You are not eligible to vote." << endl;
//	}
//	return 0;
//}


//Q.103- ATM SIMULATION


//#include<iostream>
//using namespace std; 
//
//int main() {
//	double balance = 1000.0; // Initial balance
//	int choice;
//	double amount;
//	cout << "Welcome to the ATM Simulation!" << endl;
//	do {
//		cout << "\nMenu:" << endl;
//		cout << "1. Check Balance" << endl;
//		cout << "2. Deposit Money" << endl;
//		cout << "3. Withdraw Money" << endl;
//		cout << "4. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "Your current balance is: $" << balance << endl;
//			break;
//		case 2:
//			cout << "Enter amount to deposit: $";
//			cin >> amount;
//			if (amount > 0) {
//				balance += amount;
//				cout << "Deposit successful! New balance: $" << balance << endl;
//			}
//			else {
//				cout << "Invalid amount!" << endl;
//			}
//			break;
//		case 3:
//			cout << "Enter amount to withdraw: $";
//			cin >> amount;
//			if (amount > 0 && amount <= balance) {
//				balance -= amount;
//				cout << "Withdrawal successful! New balance: $" << balance << endl;
//			}
//			else {
//				cout << "Invalid amount or insufficient funds!" << endl;
//			}
//			break;
//		case 4:
//			cout << "Thank you for using the ATM Simulation. Goodbye!" << endl;
//			break;
//		default:
//			cout << "Invalid choice! Please try again." << endl;
//		}
//	} while (choice != 4);
//	return 0;
//}



//Q.104- QUIZ APPLICATION


//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string questions[3] = {
//		"What is the capital of France?",
//		"What is 2 + 2?",
//		"What is the largest planet in our solar system?"
//	};
//	string options[3][4] = {
//		{"A. Paris", "B. London", "C. Berlin", "D. Madrid"},
//		{"A. 3", "B. 4", "C. 5", "D. 6"},
//		{"A. Earth", "B. Jupiter", "C. Saturn", "D. Mars"}
//	};
//	char answers[3] = {'A', 'B', 'B'};
//	char userAnswer;
//	int score = 0;
//	cout << "Welcome to the Quiz Application!" << endl;
//	for (int i = 0; i < 3; i++) {
//		cout << "\nQuestion " << (i + 1) << ": " << questions[i] << endl;
//		for (int j = 0; j < 4; j++) {
//			cout << options[i][j] << endl;
//		}
//		cout << "Enter your answer (A, B, C, D): ";
//		cin >> userAnswer;
//		if (toupper(userAnswer) == answers[i]) {
//			cout << "Correct!" << endl;
//			score++;
//		} else {
//			cout << "Incorrect! The correct answer was: " << answers[i] << endl;
//		}
//	}
//	cout << "\nYour final score is: " << score << "/3" << endl;
//	return 0;
//}


////int main(){
//// cout << " ==================================================== DAY 26 =================================================== :";
//// return 0 ;}