#include <stdio.h> 
#include <locale.h> 
#include <math.h>
int main() {
	setlocale(LC_ALL, "RUS");
	float app1 = 41.9f, app2 = 47.8f, app3 = 48.3f, app4 = 48.8f, app5 = 49.3f;
	float log1 = 57.4f, log2 = 55.4f, log3 = 53.4f, log4 = 51.4f, log5 = 54.8f;
	float que1 = 30.2f, que2 = 29.5f, que3 = 34.1f, que4 = 33.4f, que5 = 32.6f;

	float Lmin = -1.5f;
	float Lmax = 1.5f;

	printf("APP\n");
	float q1 = (app2 - app1) / ((fabsf(app2) + fabsf(app1)) / 2.0f);
	float q2 = (app3 - app2) / ((fabsf(app3) + fabsf(app2)) / 2.0f);
	float q3 = (app4 - app3) / ((fabsf(app4) + fabsf(app3)) / 2.0f);
	float q4 = (app5 - app4) / ((fabsf(app5) + fabsf(app4)) / 2.0f);
	printf("Q1 = %.5f\n", q1);
	printf("Q2 = %.5f\n", q2);
	printf("Q3 = %.5f\n", q3);
	printf("Q4 = %.5f\n", q4);

	if (q1 < Lmin || q1 > Lmax) printf("Состояние 1: ТРЕВОГА\n"); else printf("Состояние 1: НОРМА\n");
	if (q2 < Lmin || q2 > Lmax) printf("Состояние 2: ТРЕВОГА\n"); else printf("Состояние 2: НОРМА\n");
	if (q3 < Lmin || q3 > Lmax) printf("Состояние 3: ТРЕВОГА\n"); else printf("Состояние 3: НОРМА\n");
	if (q4 < Lmin || q4 > Lmax) printf("Состояние 4: ТРЕВОГА\n"); else printf("Состояние 4: НОРМА\n");

	printf("\nLOG\n");
	q1 = (log2 - log1) / ((fabsf(log2) + fabsf(log1)) / 2.0f);
	q2 = (log3 - log2) / ((fabsf(log3) + fabsf(log2)) / 2.0f);
	q3 = (log4 - log3) / ((fabsf(log4) + fabsf(log3)) / 2.0f);
	q4 = (log5 - log4) / ((fabsf(log5) + fabsf(log4)) / 2.0f);
	printf("Q1 = %.5f\n", q1);
	printf("Q2 = %.5f\n", q2);
	printf("Q3 = %.5f\n", q3);
	printf("Q4 = %.5f\n", q4);

	if (q1 < Lmin || q1 > Lmax) printf("Состояние 1: ТРЕВОГА\n"); else printf("Состояние 1: НОРМА\n");
	if (q2 < Lmin || q2 > Lmax) printf("Состояние 2: ТРЕВОГА\n"); else printf("Состояние 2: НОРМА\n");
	if (q3 < Lmin || q3 > Lmax) printf("Состояние 3: ТРЕВОГА\n"); else printf("Состояние 3: НОРМА\n");
	if (q4 < Lmin || q4 > Lmax) printf("Состояние 4: ТРЕВОГА\n"); else printf("Состояние 4: НОРМА\n");

	printf("\nQUE\n");
	q1 = (que2 - que1) / ((fabsf(que2) + fabsf(que1)) / 2.0f);
	q2 = (que3 - que2) / ((fabsf(que3) + fabsf(que2)) / 2.0f);
	q3 = (que4 - que3) / ((fabsf(que4) + fabsf(que3)) / 2.0f);
	q4 = (que5 - que4) / ((fabsf(que5) + fabsf(que4)) / 2.0f);
	printf("Q1 = %.5f\n", q1);
	printf("Q2 = %.5f\n", q2);
	printf("Q3 = %.5f\n", q3);
	printf("Q4 = %.5f\n", q4);

	if (q1 < Lmin || q1 > Lmax) printf("Состояние 1: ТРЕВОГА\n"); else printf("Состояние 1: НОРМА\n");
	if (q2 < Lmin || q2 > Lmax) printf("Состояние 2: ТРЕВОГА\n"); else printf("Состояние 2: НОРМА\n");
	if (q3 < Lmin || q3 > Lmax) printf("Состояние 3: ТРЕВОГА\n"); else printf("Состояние 3: НОРМА\n");
	if (q4 < Lmin || q4 > Lmax) printf("Состояние 4: ТРЕВОГА\n"); else printf("Состояние 4: НОРМА\n");

	return 0;
}