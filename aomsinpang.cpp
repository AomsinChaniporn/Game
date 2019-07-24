#include<iostream>
using namespace std;
int main()
{
	int student;
	int score = 0;
	int grade = 0;
	int sum = 0;
	float average = 0;
	cout << " Please enter number of student : ";
	cin >> student;
	for(int i =1 ; i <= student ; i ++)
	{
		cout << "Please enter score : ";
		cin >> score;
		if (score <= 100 && score >= 80) grade = 4;
		else if (score < 80 && score >= 70) grade = 3;
		else if (score < 70 && score >=60) grade = 2;
		else if (score < 60 && score >= 50) grade = 1;
		else if (score < 50 ) grade = 0;
		cout << "Your grade = " << grade;
		sum += grade ;
		average = sum/student ;
		cout << endl;
	}
	cout << "Class average = " << average;
	return(0);
}