#include <stdio.h>
#include <time.h>
#include <stdint.h>
int main(int argc, char *argv[] ) {
	FILE *fp;
	fp  = fopen("out.log", "a+");
	time_t now = time(NULL);
	fprintf(fp, "%ju\t", (uintmax_t)now);
	
	int i;
	for(i = 1; i  < argc; i++) {	
		fprintf(fp, "%s\t", argv[i]);
	}
	fprintf(fp, "\n");
	fclose(fp);
	return 0;
}
