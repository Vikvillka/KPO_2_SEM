#pragma once

#include <locale>
#include <iostream>
#include "Varparm.h"

int Varparm::ivarparm(int x, ...) {

	int* p = &x;
	int umn = 1;
	int k = 1;
	while (p[k] != INT_MAX) {
		umn = umn * p[k];
		k++;
	}
	std::cout << "ivarparm(" << k << ") - " << umn << std::endl;

	return umn;
}

int Varparm::svarparm(short x, ...) {

	int* p = (int*)&x;
	int j = 0;
	int max = p[j];
	int k = 1;
	while (p[k] != SHRT_MAX) {
		if (p[k] > p[j]) {
			max = p[k];
		}
		j++;
		k++;
	}
	std::cout << "svarparm(" << k << ") - " << max << std::endl;

	return max;
}

double Varparm::fvarparm(float x, ...) {

	double* p = (double*)(&x + 1);
	double sum = x;
	int k = 0;
	while (p[k] != (double)FLT_MAX) {
		sum = sum + p[k];
		k++;
	}
	if (p[0] != (double)FLT_MAX) {
		sum = sum - p[k - 1];
	}
	else {
		sum = 0;
	}
	std::cout << "fvarparm(" << k + 1 << ") - " << sum << std::endl;

	return sum;
}

double Varparm::dvarparm(double x, ...) {

	double* p = &x;
	double sum = 0;
	int k = 0;
	while (p[k] != DBL_MAX) {
		sum = sum + p[k];
		k++;
	}
	if (p[0] != (double)DBL_MAX) {
		sum = sum - p[k - 1];
	}
	std::cout << "fvarparm(" << k + 1 << ") - " << sum << std::endl;

	return sum;
}
