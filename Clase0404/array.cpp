#include <vector>
#include <iostream>

int main(void)
{
    std::vector<double> data = {0.1, 0.5, -0.6};
    for(int ii = 0; ii < data.size(); ii++) {
        std::cout << data[ii]<<" ";
    }
    std::cout << "\n";

    return 0;
}