#include<stdio.h>
#include<unistd.h>
int main(){
	printf("\033[2~");
	printf("\033[2J");
	for(int i=0;i++<101;){
		//printf("**********");
		//printf("\033[2J");
		printf("\033[1;0f%d",i);
		printf("%*s",i,"*");
		//printf("%d\r",i);	//escape sequence
		fflush(stdout);		//clear output buffer
		//sleep(0.99);
		//usleep(1000000);
		usleep(16000);
		if(i==101)
			i=0;
	}
	return 0;
}
