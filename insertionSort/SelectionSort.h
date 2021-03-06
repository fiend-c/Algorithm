/*
 * SelectionSort.h
 *
 *  Created on: Aug 7, 2017
 *      Author: jian
 */

#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void selectionSort( T arr[], int n){

	for (int i = 0; i < n; i++){
	    int minIndex = i;
	    for(int j = i + 1; j < n; j++){
	    	if(arr[j] < arr[minIndex]) minIndex = j;
	    }
	    swap( arr[i], arr[minIndex] );
	}
}


#endif /* SELECTIONSORT_H_ */
