#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
//#include <graphics.h>//not working

#define delay 1*1000*1000
#define amp 100	//maximum amplitude
#define diff 5//difference from -diff to +diff//must check later

//void rand(void);
int main(){
	int t_diff=0,t_amp,t_prev,t_diff_neg,z;
	printf("Starting...");
	t_amp=rand()%amp;	//printf("%d",t_amp);//debugging
	clock_t t0,t1,t2;
	while(1){
		t0=clock();
		t_prev=t_amp;	//printf("%d",t_prev);//debugging
	
		t_diff=rand()%diff-rand()%diff;	
		z=t_diff;
		t_amp=t_amp+t_diff;
		//controlling overflow from range 0 to amp
		if(t_amp>amp)
			t_amp=2*amp-t_amp;
		else if(t_amp<0)
			t_amp=-t_amp;
		else;		//printf("%d\t%d\n",t_amp,t_diff);/debugging
		
		if(t_prev<t_amp){
			printf("%*s",t_prev,"");	//musty print "" to avoid error
			//void setcolor(int 4);//not working with graphics.h
			for(;t_diff>0;t_diff--)
				printf("\033[1;32m*");
		}
		else if(t_prev>t_amp){
			t_diff_neg=t_prev-t_amp;
			printf("%*s",t_amp,"");
			for(;t_diff_neg>0;t_diff_neg--)
				printf("\033[1;31m*");
		}
		else
			printf("\033[1;37m%*s",t_amp,"*");
		t1=clock();
		printf("%*s",(amp-t_amp)," ");
		printf("%f ",(double)(((double)(t1-t0))/CLOCKS_PER_SEC));
		usleep(delay);
		t2=clock();
		//printf("%f",(double)(((double)(t2-t0))/CLOCKS_PER_SEC));
		double tz=((double)(t2-t0))/CLOCKS_PER_SEC;
		printf("%f",tz);
		printf("\n");
	}
	return 0;
}
