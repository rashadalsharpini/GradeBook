#include "GradeBook.h"

void GradeBook::addCourse()
{
	char x='y';
	while (x != 'n') {
		cour[count].addCourseNameId();
		cout << " | Do you want to add more [y/n] : ";
		//cin >> x;
		x = _getch();
		cout << "\n----------------------------" << endl;
		count++;
	}
}

void GradeBook::getCourse()
{
	for (int i = 0; i < count; i++) {
		cout << "\n--> " << i+1 << endl;
		cour[i].getCourseNameId();
		cour[i].calcAVG();
	}
	cout << "\n----------------------------" << endl;
}

int GradeBook::searchCourse(string name) {
	int index = 0;
	bool shit = false;
	for (int i = 0; i <= count; i++) {
		if (cour[i].returncoursename() == name) {
			index = i;
			shit = true;
			break;
		}
	}
	if (shit) {
		return index;
	}
	else
		return -1;
}
void GradeBook::editcourse() {
	cout << " | enter the name of course you want to edit : ";
	string search; cin >> search;
	int place = searchCourse(search);
	if (place >= 0) {
		cour[place].addCourseNameId();
	}
	else
		cout << " | element not found !" << endl;
}
void GradeBook::deletecourse() {
	cout << " | enter the name of course you want to delete : ";
	string search; cin >> search;
	int place = searchCourse(search);
	char z;
	if (place >= 0) {
		cout << " | Are you sure [y/n] ?";
		//cin >> z;
		z = _getch();
		if (z == 'y') {
			for (int i = place; i < count; i++) {
				cour[i] = cour[i + 1];
			}
			count--;
			cout << "\n | DONE!" << endl;
		}
	}
	else
		cout << " | element not found" << endl;
}

void GradeBook::addStudentForCourse()
{
	cout << " | enter the name of course : ";
	string search; cin >> search;
	int place = searchCourse(search);
	if (place >= 0) {
		cour[place].addStudent();
	}
	else
		cout << " | course not found!" << endl;
}

void GradeBook::DisplayStudentForcourse()
{
	cout << "enter the name of course : ";
	string search; cin >> search;
	int place = searchCourse(search);
	if (place >= 0) {
		cour[place].getStudent();
	}
	else
		cout << "course not found!" << endl;
}

void GradeBook::DisplaySpecificStudentForcourse()
{
	cout << " | enter the name of course : ";
	string search; cin >> search;
	int place = searchCourse(search);
	if (place >= 0) {
		cout << "enter the name of the student you are looking for : ";
		cin >> search;
		int plaz = cour[place].BinarySearchStudent(search);
		if (plaz >= 0) {
			cour[place].displaySpecificStudent(plaz);
		}
		else
			cout << " | student not found!" << endl;
	}
	else
		cout << " | course not found!" << endl;
}

void GradeBook::EDITstudent()
{
	cout << " | enter the name of course : ";
	string search; cin >> search;
	int place = searchCourse(search);
	if (place >= 0) {
		cout << " | enter the name of the student you want to edit : ";
		cin >> search;
		int plaz = cour[place].BinarySearchStudent(search);
		if (plaz >= 0) {
			cour[place].editStudent(plaz);
		}
		else
			cout << " | student not found!" << endl;
	}
	else
		cout << " | course not found!" << endl;
}

void GradeBook::DELETEstudent()
{
	cout << " | enter the name of course : ";
	string search; cin >> search;
	int place = searchCourse(search);
	if (place >= 0) {
		cout << " | enter the name of the student you want to delete : ";
		cin >> search;
		int plaz = cour[place].BinarySearchStudent(search);
		if (plaz >= 0) {
			cour[place].deleteStudent(plaz);
		}
		else
			cout << "| student not found!" << endl;
	}
	else
		cout << " | course not found!" << endl;
}
