#include <stdio.h>
#include <math.h>

#define N 1000
#define C 1024

int function_1 (double a) {
    char A[100];
    double b;
	int flag = 0;
    printf ("Choose a scale : 1000 (press 1) or 1024 (press 2)");
    scanf ("%d", &flag);
    
    if (flag == 1) {
        if (a > N) {   // проверка на байты
            b = a / N;
            if (b > N) {  // проверка на килобайты
                b = b / N;
                if ( b > N ) {  // проверка на мегабайты
                    b = b / N;
                    if (b > N) {  // проверка на гигабайты
                        b = b / N;
                        sprintf (A, "gigabytes = %lf", b);
                    } 
                }
                else {
                    sprintf (A, "megabytes = %lf", b);
                }
            }
            else {
            sprintf (A, "kilobytes = %lf", b);
            }
        }
        else {
        sprintf (A, "bytes = %lf", a);
        }
    }

    else {
        if (a > C) {   // проверка на байты
            b = a / C;
            if (b > C) {  // проверка на килобайты
                b = b / C;
                if ( b > C ) {  // проверка на мегабайты
                    b = b / C;
                    if (b > C) {  // проверка на гигабайты
                        b = b / C;
                        sprintf (A, "gigabytes = %lf", b);
                    } 
                }
                else {
                    sprintf (A, "megabytes = %lf", b);
                }
            }
            else {
            sprintf (A, "kilobytes = %lf", b);
            }
        }
        else {
        sprintf (A, "bytes = %lf", a);
        }
    }
    printf ("%s", A);
}

void main (void) {
    double a;
    printf ("Hello. Enter the value in bytes.");
    scanf ("%lf", &a);
    function_1 (a);
}