namespace CNM {
    const int N = 3e5 + 5, MOD = 1e9 + 7;
    long long quick(long long x, long long n) {
        long long res = 1;
        while (n){
            if (n & 1) res = (res * x) % MOD;
            x = x * x % MOD;
            n >>= 1;
        }
        return res;
    }
    long long inv(long long x) { return quick(x, MOD - 2); }
    long long fac[N], invfac[N];
    void init(){
        fac[0] = 1;
        for (int i = 1; i < N; ++i) fac[i] = (fac[i - 1] * i) % MOD;
        invfac[N - 1] = inv(fac[N - 1]);
        for (int i = N - 2; i >= 0; --i) invfac[i] = (invfac[i + 1] * (i + 1)) % MOD;
    }
    long long C(int n, int m){
        if (m < n || n < 0) return 0;
        return fac[m] * invfac[n] % MOD * invfac[m - n] % MOD;
    }
}