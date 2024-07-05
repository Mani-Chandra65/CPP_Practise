#include <iostream>
#include <cmath>

int main(){
    int a = 4 , b = 6;
    int c = std::max(a,b);
    int d = std::min(a,b);
    std::cout << "min= " << d << '\n';
    std::cout << "max= " << c << '\n';

    // cmath header file 

    int e = pow(a,b);                                           //Power of a number
    std::cout << "a pow b = " << e << '\n';

    int f = sqrt(a);                                            //Squareroot of a number
    std::cout << "sqrt of a = " << f << '\n';

    int g = abs(-33);                                           //Finding absolute value
    std::cout << "abs of -33 = " << g << '\n';

    double h = 3.145;
    std::cout << "Rounding.... " << h <<' '<< round(h) << '\n'; // rounds to nearest number
    std::cout << "Ceiling.... " << h <<' '<< ceil(h) << '\n';   // rounds up
    std::cout << "Flooring.... " << h <<' '<< floor(h) << '\n'; // rounds down
    


    //for more math functions go to https://www.cplusplus.com/reference/cmath/
}