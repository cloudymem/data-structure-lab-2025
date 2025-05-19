#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct stackNode {
	char data;
	struct stackNode* link;
} stackNode;

stackNode* top;

void push(char item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	temp->data = item;
	temp->link = top;
	top = temp;
}

char pop() {
	char item;
	stackNode* temp = top;
	if (top == NULL) { //스택이 공백인 경우
		printf("\n\n stack is empty!\n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

int testPair(char* exp) {
	char symbol, open_pair;
	int i, length = strlen(exp);
	top = NULL;

	for (i = 0;i < length;i++) {
		symbol = exp[i];
		switch (symbol)
		{
		case '(':
		case '{':
		case '[':
			push(symbol); break;

		case ')':
		case '}':
		case ']':
			if (top == NULL) return 0;
			else {
				open_pair = pop();
				if ((open_pair == '(' && symbol != ')') ||
					(open_pair == '{' && symbol != '}') ||
					(open_pair == '[' && symbol != ']'))
					return 0;
				else break;
			}

		}
	}
	if (top == NULL) return 1;
	else return 0;
}

int main() {
	char* express = "{(A+B)=3}*5+[{cos(x+y)+7}-1]*4";
	printf("%s", express);

	if (testpair(express) == 1)
		printf("\n\n 수식의 괄호가 맞게 사용됨.\n");
	else
		printf("\n\n 수식의 괄호가 틀림.\n");

	getchar(); return 0;
}
