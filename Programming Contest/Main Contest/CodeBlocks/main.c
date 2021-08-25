///Builds: 	gcc Src/main.c Src/tasks.c Src/auto_grader.o  -o Output/sample
///Runs: 	Output/./sample

/***********************************************************************************
 * This is the main.c program for the Programming Competiton. 'tasks.c' contains ten
 * programming tasks that a participant of the competiton will have to complete. You
 * will insert code only in 'tasks.c' file (in the designated areas) leaving the rest
 * of the code un-changed.
 *
 * Task 1:  Convert temperature from Celsius to Fahrenheit and vice-versa
 * Task 2:  Find 'Arithmatic Mean' of a given array of integers.
 * Task 3:  Find the number of odd-todds in a given array of integers.
 * Task 4:  Calculate the variance of data in a given array of integers.
 * Task 5:  Calculate LCM of a given array of numbers.
 * Task 6:  Test if a given divisor is a Prime Factor of a number.
 * Task 7:  Sort a number array in ascending order
 * Task 8:  Find the Median from an array of numbers.
 * Task 9:  Get unique number list from a given array of integers.
 * Task 10: Calculate the size of a given file in kBs
 *
 * Author: 	Dr. Omar Ahmad
 * Date: 	04-06-2019
 * Revised: 09-06-2019
 *
 * ********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include "tasks.h"
#include "auto_grader.h"


int main(void)
{
	printf("\n\n\t\tWelcome to the C Programming Competition!!!\n\n");
	printf("Running the Auto Grader now!! \n\n");
	printf("Lets see how well have you managed: \n\n");

	if(grader() != 0)
	{
		printf("\nOoops! Seems like you have made some critical mistakes.\n");
		printf("\nYou are not supposed to modify any given code.\n");
		printf("Just insert your own in the designated areas!!\n\n");
	}
	getchar();
	return(0);
}


