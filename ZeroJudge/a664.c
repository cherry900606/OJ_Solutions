#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX 10000

int find_len(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}
int priority(char op)
{
	switch (op)
	{
	case '*':case '/':
		return 2;
	case '+': case '-':
		return 1;
	default:
		return 0;
	}
}

void to_postfix(char* infix, char* postfix)
{
	int top = 0, j = 0;
	char stack[MAX] = { '\0' };

	
	int len = find_len(infix);
	infix[len] = ')'; infix[len + 1] = '\0'; len++;
	stack[++top] = '(';
	//printf("%c%s\n", stack[top], infix);

	for (int i = 0; infix[i] != '\0'; i++)
	{
		switch (infix[i])
		{
		case '(': // push into stack
			stack[++top] = infix[i];
			break;
		case ')': // pop the stack until (
			while (stack[top] != '(')
			{
				postfix[j++] = stack[top--];
			}
			top--;
			break;
		case '+': case '-': case '*': case '/': // pop all operator that priority is greater until not
			while (priority(infix[i]) <= priority(stack[top]))
			{
				postfix[j++] = stack[top--];
			}
			stack[++top] = infix[i]; // and push new operator into stack
			break;
		default:
			do // operand
			{
				postfix[j++] = infix[i++];
			} while ('0' <= infix[i] && infix[i] <= '9');
			postfix[j++] = ' '; // use space between every number
			i--;
		}
	}
	while (top >= 0) // pop all item left in stack
	{
		postfix[j++] = stack[top--];
	}
	postfix[j++] = '\0';
}

void print_postfix(char* postfix)
{
	for (int i = 0; postfix[i] != '\0'; i++)
	{
		printf("%c", postfix[i]);
		if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*'||postfix[i]=='/')
			printf(" ");
	}
	printf("\n");
}

long long int evaluate_postfix(char* postfix)
{
	long long int stack[MAX] = { 0 };
	int top = 0;
	for (int i = 0; postfix[i] != '\0'; i++)
	{
		if ('0' <= postfix[i] && postfix[i] <= '9')
		{
			stack[top] = stack[top] * 10 + postfix[i] - '0';
		}
		else if (postfix[i] == ' ')
			top++;
		else
		{
			top--;
			if (postfix[i] == '+') stack[top - 1] = stack[top - 1] + stack[top];
			else if (postfix[i] == '-') stack[top - 1] = stack[top - 1] - stack[top];
			else if (postfix[i] == '*') stack[top - 1] = stack[top - 1] * stack[top];
			else if (postfix[i] == '/') stack[top - 1] = stack[top - 1] / stack[top];
			stack[top] = 0;
		}
	}
	return stack[0];
}

int parenthesesError(char* str)
{
	int parenteses = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '(') parenteses++;
		else if (str[i] == ')')
		{
			if (parenteses == 0) return 1;
			parenteses--;
		}
	}
	if (parenteses != 0) return 1;
	return 0;
}

int operatorError(char* str)
{
	int len = find_len(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '*')
		{
			if (i == 0 || i == len - 1) return 1;
			else if (str[i - 1] != ')' && !('0' <= str[i - 1] && str[i - 1] <= '9')) return 1;
			else if (str[i + 1] != '(' && !('0' <= str[i + 1] && str[i + 1] <= '9')) return 1;
		}
	}
	return 0;
}

int main()
{
	char infix[MAX] = { '\0' }, postfix[MAX] = { '\0' };
	int n;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", infix);
		if (parenthesesError(infix) || operatorError(infix))
		{
			printf("invalid\n");
		}
		else
		{
			to_postfix(infix, postfix);
			//print_postfix(postfix);
			printf("%lld\n", evaluate_postfix(postfix));
		}
	}

	

	return 0;
}
