#include <stdio.h>

int main(void) {
	FILE* out;

	out = fopen("/dev/ttyUSB1", "r+");
	puts("\xff\x05B\x91\x7f\x7f\x7f\xa9");
	fputs("\xff\x05B\x91\x7f\x7f\x7f\xa9", out);
	fclose(out);

	getchar();
}
