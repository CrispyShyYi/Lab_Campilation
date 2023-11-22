/**
 * arrays.cpp
 *
 * EECS 183
 * Lab 6: Array exercises
 *
 * Jialiang Wu
 * alfredwu
 *
 * print_array is a function to print an array;
 * negate_all is a function to print the element with multiple of -1    ;
 * is_sorted is a function to judge whether the element;
 * in an array is in a order from least to greatest; 
 * copy_positive_elements is a function to put the positive elements 
 * from original array to the target array;
 * sort_array is a function to reorder the element in an array from least to greates;
 */

#include "arrays.h"
#include <iostream>

using namespace std;

void print_array(const int array[], int size) {
    cout << "{" << array[0];
    for (int i = 1; i < size; i++) {
        cout << ", " << array[i];
    }
    cout << "}" << endl;
    return;
}

/** 
 * TODO
 * Implement all arrays.h functions:
 * negate_all, is_sorted, copy_positive_elements, sort_array
 */

void negate_all(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * -1;
    }
    return;
}

bool is_sorted(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            count++;
        }
    }
    if (count == 0) {
        return true;
    }
    else {
        return false;
    }
}

void copy_positive_elements(const int source[], int target[], int size) {
    for (int i = 0; i < size; i++) {
        target[i] = 0;
    }
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (source[i] > 0) {
            target[j] = source[i];
            j++;
        }
    }
}

void sort_array(int arr[], int size) {
    int temp;
    bool swap = true;
    while (swap) {
        swap = false;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = true;
            }
        }
    }
}