#include <iostream>
 
int main()
{
    long long n, i, total_combinations, attacking_knights;
    std::cin >> n;
    for (i=1; i<=n; ++i)
    {
        total_combinations = ((i * i) * ((i * i) - 1)) / 2;
        attacking_knights = 4 * (i-1) * (i-2);
        std::cout << total_combinations - attacking_knights << std::endl;
    }
    return 0;
}
