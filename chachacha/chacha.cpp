#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	int rub1 = 0, rup2 = 0, n = 0;
	float  sigx = 0, sigmx = 0, SD = 0;
	scanf("%d %d",&rub1,&rup2);
	

	if (rub1 > rup2) {
		for (; rub1 >= rup2; rub1--) {
			printf("%d ", rub1);
			n++;
			sigx += rub1;
			sigmx += rub1 * rub1;
		}
		SD = sqrt((n * sigmx - sigx * sigx) / (n * (n - 1)));
		printf("\nAverage = %.1f",sigx/n );
		printf("\nS.D. = %.2f", SD);
		
	}

	else if (rub1 < rup2) {
		for (; rub1 <= rup2; rub1++) {
			printf("%d ", rub1);
			n++;
			sigx += rub1;
			sigmx += rub1 * rub1;
		}
		SD = sqrt((n * sigmx - sigx * sigx) / (n * (n - 1)));
		printf("\nAverage = %.1f", sigx / n);
		printf("\nS.D. = %.2f", SD);

	}
	else {

		printf("%d", rub1);
		printf("\nAverage = %d",rub1);
		printf("\nS.D. = 0.00");

	}

	return 0;

}