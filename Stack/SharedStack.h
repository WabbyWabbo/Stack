#include <iostream>
using namespace std;
#define MaxSize 100

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top[2];
}SharedStack;

void InitStack(SharedStack& S) {
	S.top[0] = -1;
	S.top[1] = MaxSize;
}

bool Push(SharedStack& S, int i, ElemType x) {
	if (i < 0 || i > 1) {
		cout << "stack number is wrong" << endl;
		exit(0);
	}
	if (S.top[1] - S.top[0] == 1) {
		cout << "stack is full" << endl;
		return 0;
	}
	switch (i)
	{
	case 0:
		S.data[++S.top[0]] = x;
		return 1;
		break;
	case 1:
		S.data[--S.top[1]] = x;
		return 1;
		break;
	default:
		break;
	}
}

bool Pop(SharedStack& S, int i, ElemType& x) {
	if (i < 0 || i > 1) {
		cout << "stack number is wrong" << endl;
		exit(0);
	}
	switch (i)
	{
	case 0:
		if (S.top[0] == -1) {
			cout << "stack1 is empty" << endl;
			return 0;
		}
		else
		{
			x = S.data[S.top[0]--];
			return 1;
		}
	case 1:
		if (S.top[1] == MaxSize) {
			cout << "stack2 is empty" << endl;
			return 0;
		}
		else
		{
			x = S.data[S.top[1]++];
			return 1;
		}
	default:
		break;
	}
}