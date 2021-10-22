class Solution {
public:
    long long power(long long x, long long y, long long p)
    {
        int res = 1;

        x = x % p;

        if (x == 0) return 0;

        while (y > 0)
        {
            if (y & 1)
                res = (res*x) % p;

            y = y>>1;
            x = (x*x) % p;
        }
        return res;
    }
    int minNonZeroProduct(int p) {
        if (p == 1) return 1;
        long long pow = 1;
        for (int i = 0; i<p; ++i) pow *= 2;
        pow--;
        const long long MOD = 1e9 + 7;
        long long ans = (power((pow-1), (pow/2), MOD))%MOD;
        pow%=MOD;
        return (ans*pow)%MOD;
    }
};