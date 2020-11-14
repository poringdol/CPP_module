#include <string.h>
#include <stdio.h>

int main() {
	char buf[] = "1234567890";
	memcpy(buf, &buf[3], 6);
	printf("%s\n", buf);

	char buf1[] = "1234567890";
	memmove(buf1, &buf1[3], 6);
	printf("%s\n", buf1);
}