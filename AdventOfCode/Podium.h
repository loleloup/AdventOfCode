#pragma once
#ifndef PODIUM
#define PODIUM

class Podium {

	int* val;
	int size;

public:
	Podium(int size) {
		val = new int[size+1];	//+1 for the insertion slot
		this->size = size;
		for (int i = 0; i < size + 1; i++) {
			val[i] = 0;
		}
	}

	~Podium() {
		delete val;
	}

	void insert(int newValue);
	int sum();
};
#endif