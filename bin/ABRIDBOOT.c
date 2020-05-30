#include "utils.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void bash() {
	system("./bash/bash --posix");
}
void cmd(char *comd) {
	char buf[1024];
        FILE *fp = popen(("bash -c \"%s\"", comd), "r");
        printf("%s\n",fgets(buf,sizeof(buf),fp));
}
void localbash() {
	char getd[1024] = "";
	while(1) {
		memset(&getd[0], 0, sizeof(getd));
		printff("[root@live]$");
		gets(getd);
		cmd(getd);
	}
}
void load() {
	printff("testing utils.h, making sure it works");
	okaynl();
	printff("testing colors");
	failure();
	okaynl();
}
void welcome() {
	printff("Welcome to");
	printff("\033[0;31m");
	printff(" Abrid!");
	printff("\033[0m");
	nl();
}
int main() {
	load();
	welcome();
	printff("loading bash...");
	okaynl();
	bash();
}
