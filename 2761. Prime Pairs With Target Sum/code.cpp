class Solution {
public:
    vector<bool> sieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}

    vector<vector<int>> findPrimePairs(int n) {
        
        vector<bool> isPrime = sieveOfEratosthenes(n);

    vector<std::vector<int>> result;
    for (int x = 2; x <= n / 2; x++) {
        int y = n - x;
        if (isPrime[x] && isPrime[y]) {
            result.push_back({x, y});
        }
    }

    return result;
        
    }
};
