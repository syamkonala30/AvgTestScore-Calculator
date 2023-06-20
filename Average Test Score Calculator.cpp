#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

	string students,

		testsperstudent,

		test1score,

		test2score,

		test3score,

		avg,

		avgscore;

	cout << endl;

	cout << "How many students do you have? ";

	getline(cin, students);

	cout << "How many tests per student do you have? ";

	getline(cin, testsperstudent);

	cout << "Enter test 1 score for student 1: ";

	getline(cin, test1score);

	cout << "Enter test 2 score for student 1:";

	getline(cin, test2score);

	cout << "Enter test 3 score for student 1: ";

	getline(cin, test3score);

	avg = ((test1score + test2score + test3score) / 3);

	cout << "The average score for the student is:" getline(cin, avg);

	getline(cin, avgscore);


	cout << endl;

}