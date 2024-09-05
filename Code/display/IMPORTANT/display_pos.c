#include<stdio.h>
#include<stdlib.h>
#include<ncurses.h>

#define clear_all printf("\033[H\033[J")
#define goto(x,y) printf("\033[%d;%dH",(x),(y))
#define x_max 50
#define y_max 200
#define function fx=y*y

int main(){
	int x,y,fx;
	fflush(stdout);
	clear_all;
	for(int y=0;y<y_max;y++){
		function;
		if(fx<x_max){
			fflush(stdout);
			goto(y,x_max-fx);
			printf("*");
		}
		else
			printf(" ");
	}
}
