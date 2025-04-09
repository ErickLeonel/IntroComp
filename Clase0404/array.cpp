#include <vector>
#include <iostream>
//linea para tener algo que comittear 
void print_v0(std::vector<double> mydata);
void print_v1(std::vector<double> mydata);

int main(void)
{
    std::vector<double> data = {0.1, 0.5, -0.6};
    for(int ii = 0; ii < data.size(); ii++) {
        std::cout << data[ii]<<" ";
    }
    std::cout << "\n";

    return 0;
}
