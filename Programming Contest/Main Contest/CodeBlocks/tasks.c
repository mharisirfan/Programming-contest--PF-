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
 * Team Member 1: (Muhammad Haris Irfan) (FA18-BCE-090)
 * Team Member 2: (Syed Hassnain Kazmi) (FA18-BCE-058)
 * Phone: (0311-2069119)/(0333-0534135)
 * Email: (harisirfanafzalbutt@gmail.com)
          (hassnainkazmi07@gmail.com)
 *Time of Submission:      1:20AM    13/6/19
 ***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

/***** Task 1: Convert temperature from Celcius to Fahrenheit and vice-versa  *****/
float far2cel(float far)
{

	float cel=0;
	cel = (float) (far-32)*5.0/9.0;
	return(cel);

}
float cel2far(float cel)
{
	float far=0.0;

	/** Insert your code here **/

	far=(float) ((9.0*cel/5.0))+32;

	return(far);
}
/******************************** End of Task 1 ************************************/


/******** Task 2: Find 'Arithmetic Mean' of a given array of integers **************/

float get_mean(int * ptr, int size)
{
	float mean=0;
	float value=0;

	/** Insert your code here **/
for(int i=0;i<size;i++)
{
 value=value + *(ptr+i);
 mean=value/size;
}
	return (mean);
}

/******************************** End of Task 2 ************************************/

/******* Task 3: Find the number of odd-todds in a given array of integers. ********/

int odd_todd(int * num_array, int size)
{
	int count = 0;
     int cons=0;
     int a;

	/** Insert your code here **/
for (int i=0;i<size;i++)
    {

    if(*(num_array+i)%2!=0)
    {
       a=i+1;
        cons=1;

        if(*(num_array+a)%2!=0)
        {
            cons=cons+1;

        }

        if(*(num_array+(a+1))%2!=0)
        {
            cons=cons+1;
        }
    }

        if(cons==3)
        {
            count=count+1;
        }

    }

	return(count);
}
/******************************** End of Task 3   **********************************/


/****** Task 4: Calculate the variance of data in a given array of integers. *******/
float get_variance(int * ptr, int size)
{
	float mean = get_mean(ptr, size);
	float var = 0.0;
	float value=0.0;
	float nval=0.0;
	/** Insert your code here **/

    for (int i=0; i<size; i++)
    {
       nval=(*(ptr+i)-mean) * (*(ptr+i)-mean);
       value=value + nval;

      }


     var=(value)/size;

	return(var);
}
/******************************** End of Task 4  ***********************************/

/**************** Task 5: Calculate LCM of a given array of numbers. ****************/
int get_lcm(int * ptr, int size)
{
	/** Insert your code here **/


int iniarr[100];
    for(int j=0;j<size;j++)
    {
    iniarr[j]=*(ptr+j);
    }



int index,m,x,b=1;

while(b==1)
{
    b=0;


    x=*(ptr+0);
    m=*(ptr+0);
    index=0;

    for(int i=0;i<size;i++)
    {
        if(x!=*(ptr+i))
        {
            b=1;
        }
        if(m>*(ptr+i))
        {
            m=*(ptr+i);
            index=i;
        }
    }
if(b==1)
{
    *(ptr+index)=*(ptr+index)+iniarr[index];
}

}

	return (*(ptr));

}

/******************************** End of Task 5  ***********************************/

/********* Task 6: Test if a given divisor is a Prime Factor of a number. **********/
int isPrime(int num)
{
    int count=0;

	if(num<=1) //for negative and zero inputs
	   return(0);

	if(num==2)
	   return(1);

	/** Insert your code here **/
    for(int i=1;i<=num;i++)
    {

    if(num%i==0)
        count ++;
    }

    if(count==2)
        return 1;

    if(count!=2)
       return 0;



}

int isFactor(int num, int divisor)
{
	/** Insert your code here **/

	if(num%divisor==0)
        return 1;

    else
        return 0;
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
    int minval=99999;
	/** Insert your code here **/
    for (int i=0; i<size;i++)
    {
        if((*(ptr+i))< minval  )
        {
          minval=  *(ptr+i);
            idx=i;
        }
    }


	return(idx);
}
void swap(int * num1, int * num2)
{
	/** Insert your code here **/

	int a=0;

	a=*num1;
	*num1=*num2;
	*num2=a;



}

void sort_list(int * ptr, int size) //in-place sort
{
int min;
int temp;




for(int i=0;i<size;i++)
{

   for(int j=i+1 ;j<size;j++)

   {
       if(*(ptr+i)>*(ptr+j))
       {
           temp=*(ptr+i);
           *(ptr+i)=*(ptr+j);
           *(ptr+j)=temp;

       }

   }


}


}

/******************************** End of Task 7  ***********************************/

/*************** Task 8: Find the Median from an array of numbers. *****************/
int get_median(int *ptr, int size)
{

	/** Insert your code here **/
sort_list(ptr,size);
	float median=0;

    // if number of elements are even
    if(size%2 == 0)
        median = (*(ptr+(size/2)-1) + *(ptr+(size/2)))/2.0;


    // if number of elements are odd
    else if(size%2 !=0)
        median = *(ptr+(size/2));

    return (median);



}
/******************************** End of Task 8  ***********************************/

/********* Task 9: Get unique number list from a given array of integers. **********/
void get_unique_list(int * ptr_src, int * ptr_dst, int size, int * size_unq)
{
sort_list(ptr_src, size);
/** Insert your code here **/

     int k=0;

	for (int i =0 ; i<size; i++)
    {

      if(*(ptr_src + i) != *(ptr_src +i+1))
         {
             *(ptr_dst + k)= *(ptr_src + i);
             k++;
         }
    }
    *(size_unq)= k -1;
}



/******************************** End of Task 9  ***********************************/

/*************** Task 10: Calculate the size of a given file in kBs ****************/
float get_file_size(char * filename)
{

  float size=0;
  float sizes=0;
  FILE* fh;

  fh = fopen(filename, "r"); //binary mode
while(fgetc(fh) != EOF)
    {
    size++;
    }
sizes=size/1024;

    return (sizes);
  }















/******************************** End of Task 10  **********************************/
