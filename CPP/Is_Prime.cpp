// #include <assert.h>

// constexpr bool isPrimeRecursive(const unsigned int number, const unsigned int ref)
// {
//     return (ref * ref > number) ? true : (number % ref == 0) ? false : isPrimeRecursive(number, ref + 1);
// }

// constexpr bool isPrime(const unsigned int number)
// {
//     return (number < 2) ? false : isPrimeRecursive(number, 2);
// }

// int main()
// {
//     assert(!isPrime(0));
//     assert(!isPrime(1));
//     assert(isPrime(2));
//     assert(isPrime(3));
//     assert(!isPrime(4));
//     assert(isPrime(5));
//     assert(!isPrime(6));
//     assert(isPrime(7));
//     assert(!isPrime(8));
//     assert(!isPrime(9));
//     assert(!isPrime(10));
// }
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, N = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            N++;
        }
    }
    if (N == 2)
        printf("%d is prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}
