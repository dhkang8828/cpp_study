#include <iostream>
#include <algorithm>

/*
 *  C standard-library
 *  C++ standard-library 
 *      > 정렬, 선형검색, 이진검색, 순열 등등
 *      >> C++ Standard-library(template)
 *
 * */

int main ()
{
    int x[5] = {1, 3, 5, 2, 4};
    int i;

    std::sort(x, x+5);      //배역의 시작주소, 끝 다음(반복자(주소)) 전달
    for (i=0; i<5; i++)
        std::cout << x[i] << std::endl;

    /*
     *  C++20 Constraint algorithm
     *  인자로 구간 뿐 아니라, 컨테이너(배열이름)도 전달 가능.
     *  -std:c++20 옵션 추가!!
     * */
    std::ranges::sort(x, x+5);
    for (i=0; i<5; i++)
        std::cout << x[i] << std::endl;

    std::ranges::sort(x);
    for (i=0; i<5; i++)
        std::cout << x[i] << std::endl;

    return 0;
}
