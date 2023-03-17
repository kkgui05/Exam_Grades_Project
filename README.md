# Exam_Grades_Project

Author: kkgui05

This program is designed to perform various operations to process the grades using structures. It displays a menu to the user and based on the input, performs the corresponding operation.

Features:
The program displays a menu with the following options:

Display students' information:
Add a new student,
Update a student's information,
Compute the mean of all students' exam scores,
Exit

Display students' information:
This option displays a table containing the students' information, including their id, first name, last name, and exam scores.

Add a new student:
This option allows the user to add a new student by entering their id, first name, last name, and exam scores. The program then calculates and displays the mean of the exam scores.

Update a student's information:
This option allows the user to update a student's information by entering their id. The program then displays the current information for that student and prompts the user to enter the updated information.

Compute the mean of all students' exam scores:
This option calculates and displays the mean of all students' exam scores.

Exit:
This option exits the program.

Structure:
This program uses a Student structure to store the information for each student. The Student structure contains the following member variables:

id: an integer that represents the student's id,
first: a string that represents the student's first name,
last: a string that represents the student's last name,
exam1: an integer that represents the student's score on exam 1,
exam2: an integer that represents the student's score on exam 2,
exam3: an integer that represents the student's score on exam 3,
mean: a float that represents the mean of the student's exam scores

Functions
This program contains the following functions:

display_info: a void function that displays the students' information,
add_student: a void function that adds a new student to the Student array,
update_student: a void function that updates a student's information,
compute_mean: a float function that calculates the mean of all students' exam scores
