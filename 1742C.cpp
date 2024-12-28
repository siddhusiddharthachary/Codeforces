#include <iostream>
#include <vector>

int main() {
    const int N = 8;
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(nullptr); 

    int t;
    std::cin >> t;

    while (t--) {
        std::vector<std::string> grid(N);
        
        for (int i = 0; i < N; i++) {
            std::cin >> grid[i];
        }

        for (int i = 0; i < N; i++) {
            if (grid[i] == std::string(N, 'R')) { 
                std::cout << "R\n";
                goto next_case;
            }
        }

        for (int j = 0; j < N; j++) {
            bool allBlue = true;
            for (int i = 0; i < N; i++) {
                if (grid[i][j] != 'B') {
                    allBlue = false;
                    break;
                }
            }
            if (allBlue) {
                std::cout << "B\n";
                goto next_case;
            }
        }

    next_case:;
    }

    return 0;
}
