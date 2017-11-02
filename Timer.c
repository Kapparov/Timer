#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int diff_t;

int openfile ()
{
	int c;
	FILE *file;

	file = fopen("Time", "r"); //* looks for a File named "File"
	if (file == NULL) 
	{
		printf("Error\n");
	}

/*while(1) {
	   c = fgetc(file);
	  if(feof(file)) { 
		break;
		   }
	   printf("%c", c);
	}*/
	fscanf(file, "%d\n", &c);
fclose(file);
return c;
}

int Timer()
{
	time_t start_t, end_t;

	printf("Timer Started\n");
	time(&start_t);
	getchar();
	time(&end_t);

	diff_t = difftime(end_t, start_t) + openfile();
	   if (diff_t < 60) 
                printf("Execution time: %i seconds\n", diff_t);
                
        if (diff_t >= 60, diff_t < 3600) 
                printf("Execution time: %.0i minutes %i seconds\n", diff_t / 60, diff_t % 60);
            
        if (diff_t >= 60) 
                printf("Execution time: %.0i hours %.0i minutes %.0i seconds\n", diff_t / 3600, (diff_t / 60) % 3600 - (diff_t / 3600) * 60, diff_t % 60);
        
	//printf("%i\n", diff_t);
	return diff_t;
}

int editfile () 
{
	FILE * file;
     
	file = fopen ("Time", "w+");
	if (file == NULL){
		printf("Error\n");

	}
	fprintf(file, "%d\n", diff_t);
	
	fclose(file);
	
	return 0;
}


int main(void)
{
	Timer();
	editfile();
	return 0;
} 