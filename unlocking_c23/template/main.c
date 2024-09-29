#include "headers/require.h"

int main(int argc, char* argv[])
{
    const char* string = "Milad Kahsari Alhadi";
    int variable_int = 20;
    float variable_float = 20.2f;
    double arrays[4]={
        [0] = 2.6,
        [1] = 3.6,
        [2] = 4.6,
        [3] = 5.6
    };

    for(size_t i= 0; i < 4; ++i) 
    {
        printf("element %zu is %g,\t its square is %g\n",i,arrays[i], arrays[i] * arrays[i]);
    };

    return 0;
}

