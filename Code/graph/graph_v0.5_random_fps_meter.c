#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
#include <sys/time.h>   // for gettimeofday()
//#include <graphics.h>//not working

#define delay 1000*16
#define amp 100	//maximum amplitude
#define diff 5//difference from -diff to +diff//must check later

/*
struct timeval {
    long tv_sec;    // seconds
    long tv_usec;   // microseconds
};
*/

int main(){
	int t_diff=0,t_amp,t_prev,t_diff_neg;
	struct timeval tt0,tt1,tt2;
	//clock_t t0,t1,t2;
	printf("Starting...");
	t_amp=rand()%amp;	//printf("%d",t_amp);//debugging
	
	while(1){
		gettimeofday(&tt0,NULL);
		//t0=clock();

		t_prev=t_amp;	//printf("%d",t_prev);//debugging
	
		t_diff=rand()%diff-rand()%diff;	
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
		gettimeofday(&tt1,NULL);
		//t1=clock();
		printf("%*s",(amp-t_amp)," ");
		//printf("%f ",(double)(((double)(t1-t0))/CLOCKS_PER_SEC));
		usleep(delay);
		gettimeofday(&tt2,NULL);
		printf("%d sec %d ms %dus\t",(tt1.tv_sec-tt0.tv_sec),(tt1.tv_usec-tt0.tv_usec)/1000,(tt1.tv_usec-tt0.tv_usec)%1000);
		printf("%d sec %d ms %dus",(tt2.tv_sec-tt1.tv_sec),(tt2.tv_usec-tt1.tv_usec)/1000,(tt2.tv_usec-tt1.tv_usec)%1000);
		//t2=clock();
		//printf("%f",(double)(((double)(t2-t0))/CLOCKS_PER_SEC));
		//double tz=((double)(t2-t0))/CLOCKS_PER_SEC;
		//printf("%f",tz);
		printf("\n");
	}
	return 0;
}
