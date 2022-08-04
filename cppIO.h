#ifndef cppIO_h_
#define cppIO_h_

#include <stdlib.h>
#include <stdio.h>
#include <fstream>
namespace io {
	 void std(char msg[]) {
		fprintf(stdout, msg);
	}
	 void err(char msg[]) {
		fprintf(stderr, msg);
	}
	 void warn(char msg[]) {
		FILE *fp;
		fp = fopen("stdwarn", "a");
		fprintf(fp, msg);
		fclose(fp);
	}
	 void info(char msg[]) {
		FILE *fp;
		fp =  fopen("info", "a");
		fprintf(fp, msg);
		fclose(fp);
	}
	 void DelOut() {
	remove("stdwarn");
	remove("info");
	}
}
#endif
