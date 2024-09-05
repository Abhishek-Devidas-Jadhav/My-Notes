//snake random	with input to chanmge direction

#include<stdio.h> 
#include<unistd.h>
#include<stdlib.h>
#include<math.h>
#include<pthread.h>
#include <signal.h>

#define x_max 50
#define y_max 50
#define fps 60	/*fps*/
#define movement_change_frequency 10 /*change movement frequency*/

int dir_x=1,dir_y=1;	//direction +1 or -1 or 0

void* input_fun();
void* display_fun();

int main(){
	pthread_t input,display;
	pthread_create(&input,NULL,input_fun,NULL);
    pthread_create(&display,NULL,display_fun,NULL);
	while(1){
		if(dir_x==2&&dir_y==2){
			//pthread_kill(input,0);
			exit(0);
		}
	}
    	return 0;
}

void* input_fun(){
	char temp;
	system ("/bin/stty raw");
	while(1){
		//system ("/bin/stty raw");
		//fflush(stdin);
  		temp=getchar();
		//system ("/bin/stty cooked");
		if(temp=='Q'||temp=='q'){
			dir_x=2;
			dir_y=2;
			system ("/bin/stty cooked");
			break;
		}
		else if (temp=='W'||temp=='w'){
			dir_x=-1;
			dir_y=0;
		}
		else if (temp=='S'||temp=='s'){
			dir_x=1;
			dir_y=0;
		}
		else if (temp=='A'||temp=='a'){
			dir_y=-1;
			dir_x=0;
		}
		else if (temp=='D'||temp=='d'){
			dir_y=1;
			dir_x=0;
		}
	}
}

void* display_fun(){
    int x=0,y=0;		//x,y positon
	printf("\e[?25l");	//hide cursor
    while(1){
        x=x+dir_x;
		y=y+dir_y;
		if(x<0)
			x=x_max+x;
		if(y<0)
			y=y_max+y;
		if(x>x_max)
			x=0;
		if(y>y_max)
			y=0;
		fflush(stdout);
		printf("\033[H\033[J");
		printf("\033[%d;%dH*",x,y);
		usleep(1000*1000/fps);
    }
}
