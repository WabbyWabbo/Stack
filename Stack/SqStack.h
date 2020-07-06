#define MaxSize 50

typedef int ElemType;

typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;

void InitStack(SqStack &S) {
	S.top = -1;
}

bool StackEmpty(SqStack S) {
	if (S.top == -1)
		return true;
	else
		return true;
}

bool Push(SqStack& S, ElemType x) {
	if (S.top = MaxSize - 1)
		return false;
	else
	{
		S.data[++S.top] = x;
		return true;
	}
}

bool Pop(SqStack& S, ElemType& x) {
	if (S.top == -1)
		return false;
	else
	{
		x = S.data[S.top--];
		return true;
	}
}

bool GetTop(SqStack S, ElemType& x) {
	if (S.top == -1) {
		return false;
	}
	else
	{
		x = S.data[S.top];
		return true;
	}
}