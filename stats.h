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
 * @file stats.h 
 * @brief Header file for assessment 1 of the coursera embedded systems course
 *
 * This header contains all the function definitions to be used within the file
 * stats.c which is in charge of calculating various statistics variables with 
 * a given array of numbers. 
 *
 * @author LANM
 * @date 22 - 01 - 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the minimum, maximum, man and median of an array
 *
 * A function that prints the statistics of an array including minimum, maximum,
 * mean and median. Given an array and its size additional functions are called
 * and their results are printed here. 
 *
 * @param 	arr 	The array to be analyzed
 * @param 	sz 		Size of the array to be analyzed
 *
 * @return 	none
 */
void print_statistics(unsigned char *arr, int sz);


/**
 * @brief Prints array
 *
 * Prints an array of unsigned char when the array and its size are given
 *
 * @param 	arr 	The array to be printed
 * @param 	sz 		Size of the array to be printed
 *
 * @return 	none
 */
void print_array(unsigned char *arr, int sz);


/**
 * @brief Find median of an array
 *
 * FIven an array and its size it returns the median value. To do so, it calls
 * the sort function and the locates the value at the center. If the array has
 * an even number of elements, the function gets the mean value between the
 * two values at the center. 
 *
 * @param 	arr 	The array to be analyzed
 * @param 	sz 		Size of the array to be analyzed
 *
 * @return 	med 	The median value 
 */
unsigned char find_median(unsigned char *arr, int sz);


/**
 * @brief Find mean of an array
 *
 * Given an array and its size it returns the mean value. To do so, it iterates
 * through all elements and adds them. THe division is then made over the size
 * of the array. 
 *
 * @param 	arr 	The array to be analyzed
 * @param 	sz 		Size of the array to be analyzed
 *
 * @return 	mean 	The mean value 
 */
int find_mean(unsigned char *arr, int sz);


/**
 * @brief Find maximum of an array
 *
 * Given an array and its size it returns the maximum value. To do so, it 
 * iterates through all elements and compares them until the maximum is left. 
 *
 * @param 	arr 	The array to be analyzed
 * @param 	sz 		Size of the array to be analyzed
 *
 * @return 	max		The maximum value 
 */
unsigned char find_maximum(unsigned char *arr, int sz);


/**
 * @brief Find minimum of an array
 *
 * Given an array and its size it returns the minimum value. To do so, it 
 * iterates through all elements and compares them until the minimum is left. 
 *
 * @param 	arr 	The array to be analyzed
 * @param 	sz 		Size of the array to be analyzed
 *
 * @return 	min		The minimum value 
 */
unsigned char find_minimum(unsigned char *arr, int sz);

/**
 * @brief SOrts an array from largest to smallest
 *
 * Given an array and its size it sorts it. TO do so, it iterates and replaces
 * through all elements several times until the end of the array (bubble sort). 
 *
 * @param 	arr 	The array to be analyzed
 * @param 	sz 		Size of the array to be analyzed
 *
 * @return 	none
 */
void sort_array(unsigned char *arr, int sz);

#endif /* __STATS_H__ */
