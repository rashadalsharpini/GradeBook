#include<iostream>
#include<conio.h>
#include"student.h"
#include"GradeBook.h"
using namespace std;

int main()
{
	
	cout << "\t\t\tGrade Book System\n";
	GradeBook gr;
	while (true) {
		cout << "\n------------------------------------------------------\n";
		cout << " | 1.Add Course \t\t | 5.Add Student \n"
			<< " | 2.Display Course\t\t | 6.Display Student \n"
			<< " | 3.Edit course\t\t | 7.Edit Student \n"
			<< " | 4.Delete Course\t\t | 8.Delete Student \n"
			<< " | 0.Quit the program\t\t | 9.Display Specific Student \n";
		char c;
		cout << ":\n";
		c = _getch();

		switch (c) {
		case '1':
			gr.addCourse();
			break;
		case '2':
			gr.getCourse();
			break;
		case '3':
			gr.editcourse();
			break;
		case '4':
			gr.deletecourse();
			break;
		case '5':
			gr.addStudentForCourse();
			break;
		case '6':
			gr.DisplayStudentForcourse();
			break;
		case '7':
			gr.EDITstudent();
			break;
		case '8':
			gr.DELETEstudent();
			break;
		case '9':
			gr.DisplaySpecificStudentForcourse();
			break;
		case '0':
			// Quit the program
			return 0;
		}
	}
	
	
	

	return 0;
}
