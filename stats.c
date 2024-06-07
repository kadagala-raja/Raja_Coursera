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
 * @file <stats.c> 
 * @brief <This stats.c file contains mainly 8 functions to solve the required problem statement

    main() - The main entry point for your program

    print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.

    print_array() -  Given an array of data and a length, prints the array to the screen

    find_median() - Given an array of data and a length, returns the median value

    find_mean() -  Given an array of data and a length, returns the mean

    find_maximum() -  Given an array of data and a length, returns the maximum

    find_minimum() -  Given an array of data and a length, returns the minimum

    sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )

>
 *
 *
 * @author <Kadagala Raja>
 * @date <07-06-2024>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("The array elements are : ");
  print_array(test,SIZE);
  print_statistics(test,SIZE);
  printf("The elements of array after sorted are : \n");
  print_array(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char test[],unsigned int len){
    printf("The maximum element of the array is %d\n",find_maximum(test,len));
    printf("The minimum element of the array is %d\n",find_minimum(test,len));
    printf("The mean of the array is %d\n",find_mean(test,len));
    printf("The median of the array is %d\n",find_median(test,len));
} 

void print_array(unsigned char test[],unsigned int len){
       for(int i=0;i<len;++i){
          printf("%d ",test[i]);
       }
       printf("\n");
}

unsigned int find_median(unsigned char test[],unsigned int len){
     sort(test,len);
     if(len%2 == 0){
        return (test[len/2] + test[(len-1)/2])/2;
     }
     else{
        return test[len/2];
     }
}

void sort(unsigned char test[],unsigned int len){
     for(int i=0;i<len;++i){
        for(int j=i+1;j<len;++j){
            if(test[i]<test[j]){
                unsigned int temp = test[i];
                test[i] = test[j];
                test[j] = temp;
            }
        }
     }
}

unsigned int find_maximum(unsigned char test[],unsigned int len){
  unsigned char max = test[0];
  for(int i=1;i<len;++i){
    if(test[i]>max){
        max = test[i];
    }
  }
  return max;

}

unsigned int find_minimum(unsigned char test[],unsigned int len){
  unsigned char min = test[0];
  for(int i=1;i<len;++i){
    if(test[i]<min){
        min = test[i];
    }
  }
  return min;
}

unsigned int find_mean(unsigned char test[],unsigned int len){
   int sum = 0;
   for(int i=0;i<len;++i){
        sum = sum + test[i]; 
   }
   int average = sum/len;
   return (unsigned int)average;

}


