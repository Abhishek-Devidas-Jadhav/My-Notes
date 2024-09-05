#include<stdio.h>
#include<unistd.h>
int main(){
	for(int i=0;i<101;i++){
		//printf("**********");
		printf("\033[2J");
		printf("\033[1;0f%d",i);
		//printf("%d\r",i);	//escape sequence
		fflush(stdout);		//clear output buffer
		sleep(1);
	}
	return 0;
}
