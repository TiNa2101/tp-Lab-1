//Ðåàëèçîâàòü ôóíêöèþ ñëîæåíèÿ äâóõ ñâåðõäëèííûõ ÷èñåë, çàäàííûõ â âèäå ñòðîê

#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task4.h"

#define SIZE 1000

int main() {

	char n1[SIZE] = "568486";
	char n2[SIZE] = "9625154";
	char* ans;
	long length = 0;

	length = (long)strlen(sum(n1, n2));
	length = strlen(sum(n1, n2));
	ans = (char*)malloc(length * sizeof(char));
	ans = sum(n1, n2);

	for (long i = 0; i < length; i++)

		if ((ans[i] >= '0') && (ans[i] <= '9'))

			printf("%c", ans[i]);

	free(ans);

	return 0;
}
