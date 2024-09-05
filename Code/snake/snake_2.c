//snake random

#include<stdio.h> 
#include<unistd.h>
#include<stdlib.h>
#include<math.h>

#define x_max 50
#define y_max 50
#define fps 30	/*fps*/
#define movement_change_frequency 5 /*change movement frequency*/

int main(){
    	int x=0,y=0;		//x,y positon
	int dir_x=1,dir_y=1;	//direction +1 or -1
	while(1){
		if(rand()%movement_change_frequency==0){
			dir_x=rand()%2;
			if(dir_x==0)
				dir_x=-1;
		}
		if(rand()%movement_change_frequency==0){
			dir_y=rand()%2;
			if(dir_y==0)
				dir_y=-1;
		}
		x=x+dir_x;
		y=y+dir_y;
		if(x<0)
			x=-x;
		if(y<0)
			y=-y;
		if(x>x_max)
			x=0;
		if(y>y_max)
			y=0;
		fflush(stdout);
		//printf("\033[H\033[J");
		printf("\033[%d;%dH*",x,y);
		//printf("*");
		usleep(1000*1000/fps);
	}
    	return 0;
}
