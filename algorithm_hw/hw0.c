#include <stdio.h>
#define N 209 //The 1000th Fibonacci number has 209 decimal digit
void print_digits(char d[N])
{
    int i = 0;
    while (d[i] == 0)
        i++;
    while (i < N)
        printf("%d", d[i++]); // "%d" instead of "%c"
}
// Add aa and bb and store the result in bb.
// aa is assumed to be always larger.
void add_digits(char aa[N], char bb[N])
{
    int i = 0;
    int carry = 0;
    int j, s;

    while (aa[i] == 0)
        i++;                    // after loop, i is the first "non-zero" place
    for (j = N - 1; j >= i - 1; j--) { // the sum can have non-zero at (i-1)th place
        if ((s = carry + aa[j] + bb[j]) > 9) {
            bb[j] = s - 10;
            carry = 1;
        }
        else {
            bb[j] = s;
            carry = 0;
        }
    }
}
int main()
{
    char fibo1[N] = { 0 };
    char fibo2[N] = { 0 };
    char old_fibo[N];
    int i,j;

    fibo1[N - 1] = 0;
    fibo2[N - 1] = 1;

    print_digits(fibo1);
    printf("\n");
    print_digits(fibo2);
    printf("\n");
    

    for (i = 2; i < 1000; i++)
    {
        add_digits(fibo1, fibo2);
        print_digits(fibo2);
        printf("\n");

        for (j = 0; j < N; j++)
        {
            old_fibo[j] = fibo1[j];
            fibo1[j] = fibo2[j];
            fibo2[j] = old_fibo[j];
        }
    } 
}
