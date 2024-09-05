/*Count via delay
 * */

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

#define fps 60

void * counter(void*);
void * display(void*);

int main(){
	pthread_t counter_t;
	char input;
	system ("/bin/stty raw");	//enable raw input
	if(pthread_create(&counter_t,NULL,counter,(void*)&input)!=0)
		exit(0);
	//if(pthread_create(&display_t,NULL,display,(void*)&input)!=0)
	//	exit(0);
	while(1){
		scanf("%c",&input);
		if (input=='q'||input=='Q'){
			system ("/bin/stty cooked");	//disable raw input
			exit(0);
		}
	}
	return 0;
}

void * counter(void* arg){
	pthread_t display_t;
	int time[5]={0};	//ms,s,m,h,d
	if(pthread_create(&display_t,NULL,display,(void*)time)!=0)
		exit(0);
	while(1){
		if(*(char*)arg!='p'&&*(char*)arg!='P'){	//pause if p is pressed
			time[0]++;
			if(time[0]==1000){
				time[0]=0;
				time[1]++;
				if(time[1]==60){
					time[1]=0;
					time[2]++;
					if(time[2]==60)
					{
						time[2]=0;
						time[3]++;
						if(time[3]==24){
							time[3]=0;
							time[4]++;
						}
					}
				}
			}
		}	
		usleep(1000);
	}
}

void * display(void* arg){
	printf("\e[?25l");//hide cursor
	while(1){			
		fflush(stdout);
		printf("\033[H\033[J%dd %dh %dm %ds %dms",((int*)arg)[4],((int*)arg)[3],((int*)arg)[2],((int*)arg)[1],((int*)arg)[0]);
		usleep(1000*1000/fps);
	}
}
