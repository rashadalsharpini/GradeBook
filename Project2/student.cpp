#include "student.h"

void student::addNameId()
{
	cout << " | enter Name : ";
	//cin >> name;
	cin.ignore();
	//getline(cin, name);
	getline(cin, name);
	
	cout << " | enter Id : ";
	cin >> id;
}
void student::getNameId() {
	cout << " | the name is : " << name << endl
		<< " | the id is : " << id << endl;
}
void student::addTAE() {
	while (true) {
		cout << " | enter the test grade : ";
		cin >> test;
		if (test <= 20) {
			break;
		}
		else {
			cout << " | the test grade limit is 20!" << endl;
		}
			
	}
	while (true) {
		cout << " | enter the assignment grade : ";
		cin >> assignment;
		if (assignment <= 20) {
			
			break;
		}
		else
		{
			cout << " | the test assignment limit is 20!" << endl;
			
		}
	}
	while (true) {
		cout << " | enter the exam grade : ";
		cin >> exam;
		if (exam <= 60) {
			
			break;
		}
		else
		{
			cout << " | the exam grade limit is 60!" << endl;
			
		}
	}
	wholeGrade = test + assignment + exam;
}
void student::getTAE() {
	cout << " | the test grade is : " << test << endl
		 << " | the assignment grade is : " << assignment << endl
		 << " | the exam grade is : " << exam << endl;
	cout << " |                    ----" << endl
		<< " | the whole grade is : " << wholeGrade << endl;
}
string student::returnName() {
	return name;
}
int student::returnId()
{
	return id;
}
double student::returnWholeGrade() {
	return wholeGrade;
}


