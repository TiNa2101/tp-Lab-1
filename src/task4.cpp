#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "task4.h"
using namespace std;

#define SIZE 1000

char* sum(char* x, char* y) {

	int n1[SIZE] = { 0 };
	int n2[SIZE] = { 0 };
	char* ans;
	long len = 0;
	long j = 0;
	int k = 0;

	for (long i = strlen(x) - 1; i >= 0; i--) {

		n1[j] = x[i] - '0';
		j++;

	}

	j = 0;

	for (long i = strlen(y) - 1; i >= 0; i--) {

		n2[j] = y[i] - '0';
		j++;

	}

	j = 0;

	if (strlen(x) >= strlen(y))
		len = strlen(x) + 1;
	else
		len = strlen(y) + 1;

	for (long i = 0; i < len; i++) {

		n1[i] += n2[i];
		n1[i + 1] += n1[i] / 10;
		n1[i] %= 10;

	}

	if (n1[len - 1] == 0)
		len--;

	for (long i = 0; i < len / 2; i++) {

		k = n1[i];
		n1[i] = n1[len - 1 - i];
		n1[len - 1 - i] = k;

	}

	ans = (char*)malloc(len * sizeof(char));

	for (long i = 0; i < len; i++) {

		ans[i] = n1[i] + '0';

	}

	return ans;

	free(n1);
	free(n2);
	free(ans);

}
