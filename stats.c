/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Assessment 1 of the coursera embedded course.
 *
 * Assessment 1 in which an array is analyzed to obtain its median, mean,
 * maximum, and minimum valus as well as to sort it from largest to smallest. 
 *
 * @author LANM
 * @date 22 - 01 2022
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* MAIN -------------------------------------------------------------*/
void main() {
	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
    print_statistics(test, SIZE);
}

/* FUNCTIONS ---------------------------------------------------------*/
void print_statistics(unsigned char *arr, int sz){
	printf("\nORIGINAL ARRAY: \n"); print_array(arr, sz);
	sort_array(arr, sz);
	printf("\nSORTED ARRAY: \n"); 		print_array(arr, sz);
	printf("\nMEDIAN VALUE: \t%u\n",	find_median(arr, sz));
	printf("\nMEAN VALUE: \t%u\n",		find_mean(arr, sz));
	printf("\nMAXIMUM VALUE: \t%u\n",	find_maximum(arr, sz));
	printf("\nMINIMUM VALUE: \t%u\n",	find_minimum(arr, sz));
}

void print_array(unsigned char *arr, int sz){
	for(int i=0; i<sz; i++){
		printf("%d\t", arr[i]);
		if((i+1)%10 == 0)	printf("\n");
	}
}

void sort_array(unsigned char *arr, int sz){
	for(int i=0; i<sz; i++){
		for(int j=i+1; j<sz; j++){
			if(arr[j] > arr[i]){
				unsigned char aux = arr[j];
				arr[j] = arr[i];
				arr[i] = aux;
			}
		}
	}
}

unsigned char find_median(unsigned char *arr, int sz){
	unsigned char median;
	for(int i=0; i<sz; i++){
		for(int j=i+1; j<sz; j++){
			if(arr[j] > arr[i]){
				unsigned char aux = arr[j];
				arr[j] = arr[i];
				arr[i] = aux;
			}
		}
	}
	if(sz%2 == 0) median = (arr[(sz/2)-1] + arr[sz/2])/2;
	else median = arr[(sz-1)/2];
	return median;
}

int find_mean(unsigned char *arr, int sz){
	int mean = 0;
	for(int i=0; i<sz; i++) mean += arr[i];
	return mean /= sz;
}

unsigned char find_maximum(unsigned char *arr, int sz){
	unsigned char max = arr[0];
	for(int i=0; i<sz; i++){
		if(max < arr[i])	max = arr[i];
	}
	return max;
}

unsigned char find_minimum(unsigned char *arr, int sz){
	unsigned char min = arr[0];
	for(int i=0; i<sz; i++){
		if(min > arr[i])	min = arr[i];
	}
	return min;
}