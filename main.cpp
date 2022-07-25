#include <iostream>


int main() {

    int32_t array[4][4][5][5];

    FILE* fp;
    fp = fopen("./array.bin", "rb");
    
    auto buff = new unsigned char[4*4*5*5*4];

    fread(buff, 1, 4*4*5*5*4, fp);

    for (int i0 = 0; i0 < 4; i0++) {
        for (int i1 = 0; i1 < 4; i1++) {
            for (int i2 = 0; i2 < 5; i2++) {
                for (int i3 = 0; i3 < 5; i3++) {
                    array[i0][i1][i2][i3] = (int32_t) buff[4 * (i0 * 4 * 5 * 5  + i1 * 5 * 5 + i2 * 5 + i3)];
                }
            }
        }
    }

    for (int i0 = 0; i0 < 4; i0++) {
        for (int i1 = 0; i1 < 4; i1++) {
            std::cout << "[ ";
            for (int i2 = 0; i2 < 5; i2++) {
                for (int i3 = 0; i3 < 5; i3++) {
                    std::cout << array[i0][i1][i2][i3] << ", ";
                }
                std::cout << "\n";
            }
            std::cout << "]\n";
        }
    }


    return 0;

}
