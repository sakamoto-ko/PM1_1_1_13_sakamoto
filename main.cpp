#include <stdio.h>

void HelloPrint();
void NewPrint();

int main() {

	HelloPrint();
	NewPrint();
	ThridBranch();

	return 0;
}

void HelloPrint(){
	printf("Hello GitHub World!\n");
}
void NewPrint() {
	printf("Hello New World!\n");
}
void ThridBranch() {
	printf("third branch\n");
}