#include<iostream>
#include<cstdio>

//cpp reference는 class를 사용
template<class T>    
T square(T a)
{
    T n;
    return a * a;
}

#ifdef CPP_20
auto square (auto a)
{
    //T n;        //ERROR!
    return a * a;
}
#endif

int main (int argc, char **argv) 
{

    square<int>(3);
    square(3);          

    //2.함수와 함수 템플릿의 구분!
    //printf("%p\n", &square);      //Compile Error!
    printf("%p\n", &square<int>);   //Compile OKAY!   
    printf("%p\n", &square<double>);//Compile OKAY!

    return 0;
}
