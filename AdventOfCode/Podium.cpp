#include "Podium.h"

void Podium::insert(int newValue)
{
	val[size] = newValue;
	int i = size;
	while (i > 0 && val[i] > val[i-1]) {
		val[i] = val[i-1];
		val[i - 1] = newValue;
		i--;
	}
}

int Podium::sum()
{
	int res = 0;

	for (int i = 0; i < size; i++) {
		res += val[i];
	}

	return res;
}
