#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
        time_t start_t, end_t;
        int diff_t;
        int min_t = 0;
        int hrs_t = 0;

        printf("Timer Started\n");
        time(&start_t);
        getchar();
        time(&end_t);

        diff_t = difftime(end_t, start_t);

        if (diff_t < 60) {
                printf("Execution time: %i seconds\n", diff_t);
                exit(0);
        }
        if (diff_t >= 60, diff_t < 3600) {
                printf("Execution time: %.0i minutes %i seconds\n", diff_t / 60, diff_t % 60);
                exit(0);
        }
        if (diff_t >= 25) {
                printf("Execution time: %.0i hours %.0i minutes %.0i seconds\n", diff_t / 3600, (diff_t / 60) % 3600 - (diff_t / 3600) * 60, diff_t % 60);
        }
        return(0);
}
