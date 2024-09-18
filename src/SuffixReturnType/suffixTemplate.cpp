#include<iostream>

int Add1(int a, int b)
{
    return a + b;
}

template<class T>
T Add2 (T a, T b)
{
    return a + b;
}

template <class T1, class T2>
//decltype(a + b) Add3(T1 a, T2 b)  //Compile Error!!
//auto add (T1 a, T2 b)                     //C++14(return 보고 알아서 추론)
auto Add3(T1 a, T2 b) -> decltype(a + b)    //C++11
{
    return a + b;
}

int main (int argc, char **argv)
{
    //Step1.
    std::cout << Add1(1,2) << std::endl;
    std::cout << Add1(1.2, 2.1) << std::endl;   //형변환에 따른 손실 발생

    //Step1.1
    std::cout << Add2<int>(1, 2) << std::endl;
    std::cout << Add2(1, 2) << std::endl;
    std::cout << Add2(1.2, 2.1) << std::endl;

    //Step2.
    //std::cout << Add2(1, 2.1) << std::endl;       //Compile Error! 
    std::cout << Add2<double>(1, 2.1) << std::endl; //Compile Okay.. but..

    //Step3.
    std::cout << Add3(1, 2.1) << std::endl;         //Compile Okay!

    return 0;
}
