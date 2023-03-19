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
    int fibo[1001];
    int Fn[1001];
    int i;
    int n;
    fibo[0] = 0;
    fibo[1] = 1;

    for (i = 2; i < 1001; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    if()
    

}