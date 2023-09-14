#include "course.h"
void course::addCourseNameId() {
	cout << " | enter the course name : ";
	cin >> courseName;
	cout << " | enter the course id : ";
	cin >> courseId;
}
void course::getCourseNameId() {
	cout << " | the course name is : " << courseName << endl
		<< " | the course id is : " << courseId << endl;
}
void course::addStudent() {
	char c='y';
	while (c!='n') {
		stu[counter].addNameId();
		stu[counter].addTAE();
		cout << " | Do you want to add more [y/n] : ";
		//cin >> c;
		c = _getch();
		cout << "\n----------------------------" << endl; 
		counter++;
	}
	sort(stu, stu + counter);
}
void course::getStudent()
{
	
	for (int i = 0; i < counter; i++) {
		cout << "\n--> " << i + 1 << endl;
		stu[i].getNameId();
		stu[i].getTAE();
	}
	cout << "\n----------------------------" << endl;
}
void course::calcAVG() {
	double sum = 0;
	for (int j = 0; j < counter; j++) {
		sum +=stu[j].returnWholeGrade();
	}
	avg = sum / (counter + 1);
	cout << " | the average grade of "<<courseName<<" course is " << avg;
}
string course::returncoursename() {
	return courseName;
}

int course::BinarySearchStudent(string name)
{
	int l, mid, h;
	l = 0; h = counter - 1;
	while (l <= h) {
		mid = (l + h) / 2;
		if (name == stu[mid].returnName()) {
			return mid;
		}
		else if (name < stu[mid].returnName()) {
			h = mid - 1;
		}
		else
			l = mid + 1;
	}
	return -1;
}

void course::editStudent(int place)
{
	
	
		stu[place].addNameId();
		stu[place].addTAE();
	
	
}

void course::deleteStudent(int place)
{
	
		cout << " | Are you sure [y/n] ? ";
		char z; z = _getch();
		if (z == 'y') {
			for (int i = place; i < counter; i++) {
				stu[i] = stu[i + 1];
			}
			counter--;
			cout << "\n | DONE!!\n";
		}
	
}


void course::displaySpecificStudent(int place) {
	stu[place].getNameId();
	stu[place].getTAE();
}