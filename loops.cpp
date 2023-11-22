/**
 * loops.cpp
 *
 * EECS 183
 * Lab 5: Loops exercises
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the assignment here#>
 */

#include "loops.h"
#include <iostream>

using namespace std;

/** 
 * TODO
 * Implement all loops.h functions:
 * printRectangle, printRight, printRightJustified, printIsosceles
 */
// declare printRectangle function;
void printRectangle(int rows, int cols) {
	int i;
	int j;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void printRight(int n) {
	int i;
	int j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void printRightJustified(int n) {
	int i;
	int j;
	int k;
	for (i = n; i >= 1; i--) {
		for (j = 1; j < i; j++) {
			cout << " ";
		}
		for (k = n; k >= i; k--) {
			cout << "*";
		}
		cout << endl;
	}
}

void printIsosceles(int n) {

	int i;
	int j;
	int k;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (k = 1; k <= 2 * i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
