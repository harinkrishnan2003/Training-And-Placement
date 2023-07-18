#include <stdio.h>
int stack[100], i, n = 100, ch=0, top = -1, val;

void push();
void pop();
void display();

void main() {
	while (ch != 4) {
		printf ("1. push\n2. pop\n3. display\n4. exit\nEnter the operation to be performed : ");
		scanf ("%d", &ch);
		switch (ch) {
			case 1 :
				push ();
				break;
			case 2 :
				pop ();
				break;
			case 3 :
				display();
				break;
			case 4 :
				break;
			default :
				printf ("Enter valid option...\n");
				break;
		}
	}
}

void push () {
	if (top == n) {
		printf ("overflow condition\n");
		return 0;
	}
	printf ("Enter the value to be pushed : ");
	scanf ("%d", &val);
	top++;
	stack[top] = val;
	printf ("element successfully pushed\n");
}

void pop () {
	if (top == -1) {
		printf ("underflow condition\n");
		return 0;
	}
	printf ("deleted element : %d\n", stack[top]);
	top--;
}

void display () {
	if (top == -1) {
		printf ("no elements to be displayed\n");
		return 0;
	}
	for (i = 0; i<=top; i++) {
		printf ("%d\n", stack[i]);
	}
}
