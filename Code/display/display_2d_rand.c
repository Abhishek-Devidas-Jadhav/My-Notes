#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define max_x 50
#define max_y 100
#define clear_all printf("\033[H\033[J")
#define goto(x,y) printf("\033[%d;%dH",(x),(y))

int main(){
	int x,y;
	fflush(stdout);
	clear_all;
	while(1){
		x=rand()%max_x;
		y=rand()%max_y;
		if(x<0||y<0)
			break;
		goto(x,y);
		fflush(stdout);
		printf("%c",(char)x+y);
		usleep(16000);
	}
	clear_all;
	return 0;
}
