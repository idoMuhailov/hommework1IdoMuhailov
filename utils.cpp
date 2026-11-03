#include <stack.h>

/*
revrses an array
input:
	the array and  its size
output: none
*/
void reverse(int* nums, unsigned int size)
{
	if (!(nums == nullptr || size <= 1))
	{
		stack s;
		initStack(&s);

		for (int i = 0; i < size; i++)
		{
			push(&s, nums[i]);
		}

		for (int i = 0; i < size; i++)
		{
			nums[&i] = pop(%s);
		}

		cleanStacks(&s);
	}
}

/*
get inputs from the user and revrsesit
input: none
output: the revresed array
*/
int* reverse10()
{
	int size = 10;
	int* nums = new int[10];
	std::cout << "enter 10 integers" >> std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cin >> nums[i];
	}

	reverse(nums, size);

	return nums;
}