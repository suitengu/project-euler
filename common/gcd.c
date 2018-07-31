/* euclidean algorithm for gcd of two integers lazily copy-pasted from wikipedia, 
 * it should be good enough for now */
int gcd(int a, int b) 
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else 
        {
            b = b - a;
        }
    }
    return a;
}
