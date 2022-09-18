#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>

int main() {
	FILE* fp = fopen("example.txt", "w+");
	char ch;

	fputs("Manusia 103, Bumi", fp);
	rewind(fp);

	printf("Name: ");
	while ((ch = fgetc(fp)) != ' ') {
		putchar(ch);
	}

	putchar('\n');

	printf("Age: ");
	fseek(fp, 10, SEEK_SET);
	while ((ch = fgetc(fp)) != ' ') {
		putchar(ch);
	}

	putchar('\n');

	printf("City: ");
	fseek(fp, 15, SEEK_SET);
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}

	putchar('\n');

	fclose(fp);

	_getch();
	return 0;
}