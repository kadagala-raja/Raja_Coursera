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
 * @file <stats.h> 
 * @brief <The stats.h header file needs to include declarations and documentation for the functions from the stats.c file.>
 *
 *
 * @author <Kadagala Raja>
 * @date <07-06-2024>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_statistics(unsigned char test[],unsigned int len);
/**
 * @brief <This function takes the charecter array and its length and calls seperate functions for finding the
 * minimum ,maximum , mean and median of the array given>
 *
 *
 * @param <unsigned char test[]> <Sent an un signed charecter array of name test which contains the elements>
 * @param <unsigned int len> <Sent an unsigned integer which is the length of the charecter array sent before>
 *
 * @return <It returns nothing>
 */


void print_array(unsigned char test[],unsigned int len);
/**
 * @brief <This function just iterates the entire array with a for loop and prints the elements of the array 
 * in an ordered way>
 *
 *
 * @param <unsigned char test[]> <Sent an un signed charecter array of name test which contains the elements>
 * @param <unsigned int len> <Sent an unsigned integer which is the length of the charecter array sent before>
 *
 * @return <It returns nothing>
 */


unsigned int find_median(unsigned char test[],unsigned int len);
/**
 * @brief <It sorts the given array and finds the middle value if the array is of odd length else returna the average
 * of the two middle elements>
 *
 *
 * @param <unsigned char test[]> <Sent an un signed charecter array of name test which contains the elements>
 * @param <unsigned int len> <Sent an unsigned integer which is the length of the charecter array sent before>
 *
 * @return <Returns an unsigned integer value which has the median of the array given>
 */


void sort(unsigned char test[],unsigned int len);
/**
 * @brief <It just sorts the given array in reverse order(i.e. largest to smallest) with the help of bubble sort by iterating the for loop twice>
 *
 *
 * @param <unsigned char test[]> <Sent an un signed charecter array of name test which contains the elements>
 * @param <unsigned int len> <Sent an unsigned integer which is the length of the charecter array sent before>
 *
 * @return <It returns nothing>
 */


unsigned int find_maximum(unsigned char test[],unsigned int len);
/**
 * @brief <It iterates the entire array with the hep of a for loop and finds the maximum element in the array>
 *
 *
 * @param <unsigned char test[]> <Sent an un signed charecter array of name test which contains the elements>
 * @param <unsigned int len> <Sent an unsigned integer which is the length of the charecter array sent before>
 *
 * @return <Returns an integer array containing the maximum value in the array>
 */


unsigned int find_minimum(unsigned char test[],unsigned int len);
/**
 * @brief <It iterates the entire array with the hep of a for loop and finds the minimum element in the array>
 *
 *
 * @param <unsigned char test[]> <Sent an un signed charecter array of name test which contains the elements>
 * @param <unsigned int len> <Sent an unsigned integer which is the length of the charecter array sent before>
 *
 * @return <Returns an integer array containing the minimum value in the array>
 */


unsigned int find_mean(unsigned char test[],unsigned int len);
/**
 * @brief <It iterates the entire array with help of for loop to calculate the sum of entire array and
 * finally divide it with the size of array to get the mean of the entire array>
 *
 *
* @param <unsigned char test[]> <Sent an un signed charecter array of name test which contains the elements>
 * @param <unsigned int len> <Sent an unsigned integer which is the length of the charecter array sent before>
 *
 * @return <Returns an integer array containing the mean of the array>
 */



#endif /* __STATS_H__ */