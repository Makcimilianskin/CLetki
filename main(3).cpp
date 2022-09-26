#include <iostream>

using namespace std;

int main()
{
    int i1,j1,i3, j3, i4, j4, i5, j5,i6,j6, i2,j2;
    std::cin >> i1 >> j1 >> i2 >> j2 >> i3 >> j3 >> i4 >> j4 >> i5 >> j5 >> i6 >> j6;
    
    if ((i1 + j1) % 2 != 0) { 
        std::cout<< i1 << " " <<  j1 << " " ;
    }
    if ((i2 + j2) % 2 != 0) { 
        std::cout<< i2 << " " << j2 << " ";
    }
    if ((i3 + j3) % 2 != 0) { 
        std::cout<< i3 << " " << j3 << " ";
    }
    if ((i4 + j4) % 2 != 0) { 
        std::cout << i4 << " " << j4 << " ";
    }
    if ((i5 + j5) % 2 != 0) { 
        std::cout << i5 << " " << j5 << " ";
    }
    if ((i6 + j6) % 2 != 0) { 
        std::cout << i6 << " " << j6 << " ";
    }
    
    std::cout << endl;
    
    if ((i1 + j1) % 2 == 0) { 
        std::cout<< i1 << " " <<  j1 << " " ;
    }
    if ((i2 + j2) % 2 == 0) { 
        std::cout<< i2 << " " << j2 << " ";
    }
    if ((i3 + j3) % 2 == 0) { 
        std::cout<< i3 << " " << j3 << " ";
    }
    if ((i4 + j4) % 2 == 0) { 
        std::cout << i4 << " " << j4 << " ";
    }
    if ((i5 + j5) % 2 == 0) { 
        std::cout << i5 << " " << j5 << " ";
    }
    if ((i6 + j6) % 2 == 0) { 
        std::cout << i6 << " " << j6 << " ";
    }
    
    
    
}
