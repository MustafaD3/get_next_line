#include <stdio.h>
#include "get_next_line.h"
int main(){
	int fd = open("text.txt",O_RDWR);
	printf("file:%d\n",fd);
	printf("%s",get_next_line(fd));
	printf("\n%s",get_next_line(fd));
}