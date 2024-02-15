//Copyright 2024 ZHOLT
#ifndef _ARRAY_FUNCTIONS_H_
#define _ARRAY_FUNCTIONS_H_

//Function to fill an integer array with randomly generated values in a 
//specified  range.
bool Populate(int[], int size, int min = 0, int max = 100);

// function to output the values in an integer array to the standard output
// device (using cout)
// if the function should not modify the values in the array, make the array
// parameter const
void OutputArray(const int a[], int size);

//function that returns the average value in an array of integers
double AverageArray(const int numbs[], int size);


#endif
