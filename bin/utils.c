#include <stdio.h>
void nl() {
	printf("\n");
}
void printff( char *text) {
	printf(text);
}
void isokay() {
	printff("[");
	printff("\033[1;32m");
	printff("OKAY");
	printff("\033[0m");
	printff("]");
}
void failure() {
	printff("[");
	printff("\033[1;31m");
	printff("FAIL");
	printff("\033[0m");
	printff("]");
}
void okaynl() {
	isokay();
	nl();
}
void failnl() {
	failure();
	nl();
}
