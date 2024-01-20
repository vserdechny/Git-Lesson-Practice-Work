#pragma once

struct SingleDimensionArray
{
	int* array{ nullptr };
	int size{ 0 };

	void pushBackValue(int value);
	void pushFrontValue(int value);
	void pushValueAtPosition(int value, int pos);

	void removeValueFromPosition(int pos);
	void removeValue(int value);

	int sum();

	int findFirstPosition(int value);
	int fintLastPosition(int value);

	int countOf(int value);

	int merge(const SingleDimensionArray& anotherArr);
};

