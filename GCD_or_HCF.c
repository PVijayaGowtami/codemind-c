#include <math.h>
#include <stdio.h>
 
// Function to return gcd of a and b
int gcd(int a, int b)
{
    // Find Minimum of a and b
    int result = ((a < b) ? a : b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result; // return gcd of a nd b
}
 
// Driver program to test above function
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a, b));
    return 0;
}