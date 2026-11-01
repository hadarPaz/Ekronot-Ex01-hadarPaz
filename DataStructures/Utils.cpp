#include "Utils.h"
#include "Stack.h"
#include <iostream>

int main()
{
	reverse10();
}
void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);
	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}

	for (i = 0; i < size; i++)
	{
		nums[i] = s->head->num;
		pop(s);
	}
}

int* reverse10()
{
	int* nums = new int[10];
	int i = 0;
	int num = 0;

	for (i = 0; i < 10; i++)
	{
		std::cout << "Please enter a number to the array" << std::endl;
		std::cin >> num;
		nums[i] = num;
	}
	reverse(nums, 10);
	return nums;
}
