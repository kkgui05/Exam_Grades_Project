/* 
 * Description: This C++ program displays a menu and based on user input, performs a variety of operations to process the grades using structures. 
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

//structure named Student
struct Student
{
	//member variables
	int id;
	string first;
	string last;
	int exam1;
	int exam2;
	int exam3;
	float mean;

};


//function of the void type named display_info with arguments of the structure Student and int type named students and stuIndex, respectively 
void display_info(Student students[], int stuIndex)
{
	//checks if the number of students entered is 0 and if so, displays message 
	if(stuIndex == 0)
	{
		cout << "Empty list of students." << endl;
		return;
	}

	//displays header with students' information 
	cout << "*********************** Students' Information ***********************" << endl;
        cout << "Id\tFirst name\tLast name\tExam1\tExam2\tExam3\tMean" << endl;
        cout << "_____________________________________________________________________" << endl;
	
	//for loop that displays students' information with proper formatting
	for(int i = 0; i < stuIndex; i++)
	{
		cout << left << setw(10) << students[i].id;
	       	cout << setw(15) << students[i].first; 
		cout << setw(15) << students[i].last;
		cout << right << setw(7) << students[i].exam1;
		cout << setw(7) <<  students[i].exam2; 
		cout << setw(7) << students[i].exam3;
		cout << fixed << showpoint << setprecision(2) << setw(7) << students[i].mean << endl;

	}
}

//function of the void type named add_student with arguments of the structure Student and int type named students and stuIndex, respectively
void add_student(Student students[], int& stuIndex)
{
	//checks if the number of students entered is greater than 20, and if so, displays message that max number of students has been entered
	if(stuIndex > 20)
	{
		cout << "Maximum number of students has been entered." << endl;
	}
	
	//displays and reads in student's information: id, first name, last name, exam 1, exam 2, exam 3 scores, and the mean of the exam scores
	cout << "Enter student's information" << endl;
	cout << "Id: ";
	cin >> students[stuIndex].id;
	cout << "First name: ";
	cin >> students[stuIndex].first;
	cout << "Last name: ";
	cin >> students[stuIndex].last;
	cout << "Exam 1 score: ";
	cin >> students[stuIndex].exam1;
	cout << "Exam 2 score: ";
	cin >> students[stuIndex].exam2;
	cout << "Exam 3 score: ";
	cin >> students[stuIndex].exam3;
	students[stuIndex].mean = (students[stuIndex].exam1 + students[stuIndex].exam2 + students[stuIndex].exam3)/3.00;

	//displays message that a new student has been added with their respective id and increments stuIndex variable
	cout << "New student with id " << students[stuIndex].id << " added." << endl;
	stuIndex++;

}

//function of the void type named update_student with arguments of the structure Student and int type named students and stuIndex, respectively
void update_student(Student students[], int stuIndex)
{

	//checks if the number of students entered is 0 and if so, displays message	
	if(stuIndex == 0)
        {
                cout << "Empty list of students." << endl;
                return;
        }

	//declaring a variable of int type named tempID that will store the id entered by user and update the student's information
	int tempID;

	//displays and reads in id entered by user
	cout << "Please enter student id: ";
	cin >> tempID;
	
	//for loop that will display the updated student's information
	for(int i = 0; i < stuIndex; i++)
	{
		//checks if the id entered by user matches the member variable id from the Student structure
		if(students[i].id == tempID)
		{
			//displays and reads in updated student's information
			cout << "Update student's information:" << endl;
			cout << "Id: " << tempID << endl;
        		cout << "First name: ";
        		cin >> students[i].first;
        		cout << "Last name: ";
        		cin >> students[i].last;
        		cout << "Exam 1 score: ";
        		cin >> students[i].exam1;
        		cout << "Exam 2 score: ";
        		cin >> students[i].exam2;
        		cout << "Exam 3 score: ";
			cin >> students[i].exam3;
			students[i].mean = (students[i].exam1 + students[i].exam2 + students[i].exam3)/3.00;
			cout << "Student's information with id  " << tempID << " updated." << endl;
			return;
		}
	}

	//if the id does not match the member variable id, then an error message will display that student has not been found
	cout << "Student not found." << endl;

}

//function of the float type named compute_mean with arguments of the structure Student and int type named students and stuIndex, respectively
float compute_mean(Student students[], int stuIndex)
{
	//declaring variable named sum that will represent the sum of the exams entered
	float sum = 0.00;

	//checks if the number of students entered is 0, and if so, displays message
	if(stuIndex == 0)
        {
                cout << "Empty list of students." << endl;
        }
	//if not, for loop will proceed
	else
	{
		//for loop that calculates adds the sum to the mean
		for(int i = 0; i < stuIndex; i++)
		{
			sum += students[i].mean;
		}

		//displays message of the mean of the exams set to 2 decimal places
		cout << "Mean of the exams: " << fixed << showpoint << setprecision(2) << sum/stuIndex << endl;
	}
	
	//returns the mean
	return students[stuIndex].mean;	
}

//function of the float type named compute_minimum with arguments of the structure Student and int type named students and stuIndex, respectively
float compute_minimum(Student students[], int stuIndex)
{
	//declaring variable named minimum_mean that is initialized at first element stored in students array
	float minimum_mean = students[0].mean;

	//checks if the number of students entered is 0, and if so, displays message
	if(stuIndex == 0)
        {
                cout << "Empty list of students." << endl;
        }

	//if not, for loop proceeds
	else
	{
		//for loop that will find the minimum mean of the students' exam scores
		for(int i = 1; i < stuIndex; i++)
		{
			//checks if the member variable mean is less than the minimum_mean and if so, the minimum_mean is stored
			if(students[i].mean < minimum_mean)
			{
				minimum_mean = students[i].mean;
			}
		}	
	
		//displays minimum of the mean of the exams set to 2 decimal places
		cout << "Minimum of the mean of the exams: " << fixed << showpoint << setprecision(2) << minimum_mean << endl;
	}
	
	//returns the minimum mean
	return minimum_mean;

}

//function of the float type named compute_maximum with arguments of the structure Student and int type named students and stuIndex, respectively
float compute_maximum(Student students[], int stuIndex)
{
	//declaring variable named maximum_mean that is initialized at first element stored in students array
	float maximum_mean = students[0].mean;

	//checks if the number of students entered is 0, and if so, displays message
	if(stuIndex == 0)
        {
                cout << "Empty list of students." << endl;
        }

	//if not, for loop proceeds
	else
	{
		//for loop that will find the maximum mean of the students' exam scores
		for(int i = 1; i < stuIndex; i++)
		{
			//checks if the member variable mean is greater than the maximum_mean and if so, the maximum_mean is stored
			if(students[i].mean > maximum_mean)
			{
				maximum_mean = students[i].mean;
			}
		}

		//displays maximum of the mean of the exams set to 2 decimal places
		cout << "Maximum of the mean of the exams: " << fixed << showpoint << setprecision(2) << maximum_mean << endl;
	}

	//returns the maximum mean
	return maximum_mean;

}
	

int main()
{
	//array of 20 students
	Student students[20];

	//declaring stuIndex variable and initializing it to 0
	int stuIndex = 0;

	//declares variables 
	int choice;
	bool restart = true;


	//do-while loop to restart program if user chooses to repeat program
	do
	{
		//displays a menu for the user with the following choices and proper formatting
		cout << "*********************** Menu **********************" << endl;
		cout << endl;
		cout << "| 1. Display list of students' information" << setw(9) << "|" << endl;
		cout << endl;
		cout << "| 2. Add student information" << setw(23) << "|" << endl;
                cout << endl;
		cout << "| 3. Update student's information" << setw(18) << "|" << endl;
                cout << endl;
		cout << "| 4. Compute mean of list of students exam" << setw(9) << "|" << endl;
                cout << endl;
		cout << "| 5. Compute minimum of the mean of the exams" << setw(6) << "|" << endl;
                cout << endl;
		cout << "| 6. Compute maximum of the mean of the exams" << setw(6) << "|" << endl;
                cout << endl;
		cout << "| 7. Exit program" << setw(34) << "|" << endl;
                cout << endl;
		cout << "***************************************************" << endl;


		//prompts for and reads in user's choice
		cout << "Enter your choice: ";
		cin >> choice;

		
	//starts a switch case for the choice entered in the previous step
	switch(choice)
	{
		//starts case for Display
		case 1:
			//calls the display_info function and creates a newline
			display_info(students, stuIndex);
			cout << endl;
			break;

		//starts case for Add
		case 2:
			//calls the add_student function and creates a newline
			add_student(students, stuIndex);
			cout << endl;
			break;
		
		//starts case for Update
		case 3:
			//calls the update_student function and creates a newline
			update_student(students, stuIndex);
			cout << endl;
			break;

		//starts case for Compute_Mean
		case 4:
			//calls the compute_mean function and creates a newline
			compute_mean(students, stuIndex);
			cout << endl;
			break;

		//starts case for Compute_Minimum
		case 5:
			//calls the compute_minimum function and creates a newline
			compute_minimum(students, stuIndex);
			cout << endl;
			break;

		//starts case for Compute_Maximum
		case 6:
			//calls the compute_maximum function and creates a newline
			compute_maximum(students, stuIndex);
			cout << endl;
			break;

		//starts case for Exit
		case 7:
			//displays message and ends the program
			cout << "Thank you for using this program. Goodbye!" << endl;
			restart = false;
			break;
		
		//starts default case
		default:
			//displays an incorrect message if the user did not pick one of the options
			cout << "Wrong choice, enter again." << endl;
			break;
	}

	//continues to restart program as long as bool restart is true
	}while(restart == true);



	return 0;
}
   