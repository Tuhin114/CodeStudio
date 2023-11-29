// CodeStudio- Reverse Bits
// https://www.codingninjas.com/studio/problems/reverse-bits_2181102?interviewProblemRedirection=true

long reverseBits(long n)
{
    long ans = 0;
    for (int i = 0; i < 32; i++)
    {
        long lsb = n & 1; // get the last bit of n
        ans = ans | lsb << (31 - i);
        // (31-i) is the bit position in the ans
        // lsb is the bit value to be added
        n = n >> 1; // right shift n by 1 bit
    }
    return ans;
}