/***********************************************************************************
 * This file provides you with skeleton code for the Programming Competition.
 * It contains ten tasks that you will have to complete. You will insert your
 * code only in the designated areas leaving the rest of the code unchanged.
 *
 * If you decide to make any new functions make sure that:
 *
 * 	1. Their prototypes are added in the tasks.h file.
 * 	2. These new functions MUST be called from within the existing functions.
 *
 * Team Member 1: (Name) (Registration Number)
 * Team Member 2:
 * Phone: (Mobile number of contact person)
 * Email: (Email of contact person)
 *
 ***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

/***** Task 1: Convert temperature from Celcius to Fahrenheit and vice-versa  *****/
float far2cel(float far)
{
	
	/*
	float cel=0;
	cel = (float) (far-32)*5.0/9.0;
	return(cel);
	*/
}
float cel2far(float cel)
{
	float far=0.0;

	/** Insert your code here **/

	return(far);
}
/******************************** End of Task 1 ************************************/


/******** Task 2: Find 'Arithmetic Mean' of a given array of integers **************/

float get_mean(int * ptr, int size)
{
	float mean;

	/** Insert your code here **/

	return (mean);
}

/******************************** End of Task 2 ************************************/

/******* Task 3: Find the number of odd-todds in a given array of integers. ********/

int odd_todd(int * num_array, int size)
{
	int count = 0;

	/** Insert your code here **/

	return(count);
}
/******************************** End of Task 3   **********************************/


/****** Task 4: Calculate the variance of data in a given array of integers. *******/
float get_variance(int * ptr, int size)
{
	float mean = get_mean(ptr, size);
	float var = 0.0;

	/** Insert your code here **/

	return(var);
}
/******************************** End of Task 4  ***********************************/

/**************** Task 5: Calculate LCM of a given array of numbers. ****************/
int get_lcm(int * ptr, int size)
{
	/** Insert your code here **/

	return(0);
}

/******************************** End of Task 5  ***********************************/

/********* Task 6: Test if a given divisor is a Prime Factor of a number. **********/
int isPrime(int num)
{
	if(num<=1) //for negative and zero inputs
	   return(0);

	if(num==2)
	   return(1);

	/** Insert your code here **/

}
int isFactor(int num, int divisor)
{
	/** Insert your code here **/
}
int isPrimeFactor(int input, int divisor)
{

	if(isFactor(input,divisor)&&isPrime(divisor))
	   return(1);
	else
	   return(0);
}
/******************************** End of Task 6  ***********************************/

/**************** Task 7: Sort a number array in ascending order. ******************/

int find_min(int * ptr, int size)	// returns index of smallest item
{
	int idx=0;

	/** Insert your code here **/

	return(idx);
}
void swap(int * num1, int * num2)
{
	/** Insert your code here **/
}

void sort_list(int * ptr, int size) //in-place sort
{
	/** Insert your code here **/
}

/******************************** End of Task 7  ***********************************/

/*************** Task 8: Find the Median from an array of numbers. *****************/
int get_median(int *ptr, int size)
{
	sort_list(ptr, size);

	/** Insert your code here **/

}
/******************************** End of Task 8  ***********************************/

/********* Task 9: Get unique number list from a given array of integers. **********/
void get_unique_list(int * ptr_src, int * ptr_dst, int size, int * size_unq)
{
	/** Insert your code here **/
}

/******************************** End of Task 9  ***********************************/

/*************** Task 10: Calculate the size of a given file in kBs ****************/
float get_file_size(char * filename)
{
	FILE * fptr = NULL;

	fptr = fopen(filename, "r");

	/** Insert your code here **/
}


/******************************** End of Task 10  **********************************/
