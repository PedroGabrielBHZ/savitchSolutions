#include <iostream>

using namespace std;

struct StudentData {

	char name[50];
	float quizz1;
	float quizz2;
	float midterm;
	float finalExam;
};

void getStudentData(StudentData& student);
char normalizeStudentGrades(StudentData& student);

int main() {
	
	StudentData student;
	getStudentData(student);
	cout << student.name << "'s final grade: " 
	     << normalizeStudentGrades(student);

}
	
void getStudentData(StudentData& student) {

	cout << "Enter student's name: ";
	cin >> student.name;
	cout << "Enter " << student.name <<"'s quizz 1 grade: ";
	cin >> student.quizz1;
	cout << "Enter " << student.name <<"'s quizz 2 grade: ";
	cin >> student.quizz2;
	cout << "Enter " << student.name <<"'s midterm exam grade: ";
	cin >> student.midterm;
	cout << "Enter " << student.name <<"'s final exam grade: ";
	cin >> student.finalExam;
	cout << "All done.\n";

}

char normalizeStudentGrades(StudentData& student) {

	float normalizedGrade =	(student.quizz1 / 10)*12.5 + 
		(student.quizz2 / 10)*12.5 + (student.midterm / 100)*25 +
		(student.finalExam / 100)*50;

	if  (normalizedGrade >= 90) return 'A';

	if (normalizedGrade >= 80) return 'B';

	if (normalizedGrade >= 70) return 'C';

	if (normalizedGrade >= 60) return 'D';

	else return 'E';
}
