//#include<iostream>
//using namespace std;




// =================================================== DAY 27 ===================================================

//Q.105- STUDENT RECORD MANAGEMENT SYSTEM

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//	struct Student {
//		string name;
//		int age;
//		string grade;
//	};
//	vector<Student> students;
//	int choice;
//	do {
//		cout << "\nStudent Record Management System" << endl;
//		cout << "1. Add Student" << endl;
//		cout << "2. View Students" << endl;
//		cout << "3. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1: {
//			Student newStudent;
//			cout << "Enter student name: ";
//			cin >> newStudent.name;
//			cout << "Enter student age: ";
//			cin >> newStudent.age;
//			cout << "Enter student grade: ";
//			cin >> newStudent.grade;
//			students.push_back(newStudent);
//			cout << "Student added successfully!" << endl;
//			break;
//		}
//		case 2:
//			cout << "\nList of Students:" << endl;
//			for (const auto& student : students) {
//				cout << "Name: " << student.name
//					<< ", Age: " << student.age
//					<< ", Grade: " << student.grade << endl;
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
//}


//Q.106- EMPLOYEE MANAGEMENT SYSTEM


//#include<iostream>
//#include<vector>
//
//int main() {
//	struct Employee {
//		std::string name;
//		int id;
//		std::string department;
//	};
//	std::vector<Employee> employees;
//	int choice;
//	do {
//		std::cout << "\nEmployee Management System" << std::endl;
//		std::cout << "1. Add Employee" << std::endl;
//		std::cout << "2. View Employees" << std::endl;
//		std::cout << "3. Exit" << std::endl;
//		std::cout << "Enter your choice: ";
//		std::cin >> choice;
//		switch (choice) {
//			case 1: {
//				Employee newEmployee;
//				std::cout << "Enter employee name: ";
//				std::cin >> newEmployee.name;
//				std::cout << "Enter employee ID: ";
//				std::cin >> newEmployee.id;
//				std::cout << "Enter employee department: ";
//				std::cin >> newEmployee.department;
//				employees.push_back(newEmployee);
//				std::cout << "Employee added successfully!" << std::endl;
//				break;
//			}
//			case 2:
//				std::cout << "\nList of Employees:" << std::endl;
//				for (const auto& employee : employees) {
//					std::cout << "Name: " << employee.name
//							  << ", ID: " << employee.id
//							  << ", Department: " << employee.department << std::endl;
//				}
//				break;
//			case 3:
//				std::cout << "Exiting the system. Goodbye!" << std::endl;
//				break;
//			default:
//				std::cout << "Invalid choice! Please try again." << std::endl;
//		}
//	} while (choice != 3);
//	return 0;}


//Q.107- SALARY MANAGEMENT SYSTEM

//#include<iostream>
//using namespace std;
//
//int main() {
//	struct Employee {
//		string name;
//		double salary;
//	};
//	Employee emp;
//	cout << "Enter employee name: ";
//	cin >> emp.name;
//	cout << "Enter employee salary: ";
//	cin >> emp.salary;
//	int choice;
//	do {
//		cout << "\nSalary Management System" << endl;
//		cout << "1. View Salary" << endl;
//		cout << "2. Update Salary" << endl;
//		cout << "3. Exit" << endl;
//		cout << "Enter your choice: ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "Employee Name: " << emp.name << ", Salary: $" << emp.salary << endl;
//			break;
//		case 2:
//			cout << "Enter new salary for " << emp.name << ": ";
//			cin >> emp.salary;
//			cout << "Salary updated successfully!" << endl;
//			break;
//		case 3:
//			cout << "Exiting the system. Goodbye!" << endl;
//			break;
//		default:
//			cout << "Invalid choice! Please try again." << endl;
//		}
//	} while (choice != 3);
//	return 0;
//}


//int main(){
// cout << " ======================================================= DAY 27 ==========================================================:";
// 
// return 0;}