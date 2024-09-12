#include<iostream>

/*
 *  함수 오버로딩(function overloading)
 *  > 인자의 형태(타입,개수)가 다르면 '동일 이름의 함수를 여러개 만들 수 있다.'
 *      장)하나의 함수 처럼 사용할 수 있다.(일관된 형태의lib 생성 가능)
 *      단)구현이 유사한 함수를 여러개 만들어야 한다.
 * */
int square(int a)
{
    return a * a;
}

double square (double a)
{
    return a * a;
}

//함수를 생성하는 틀( template)를 사용하자!
template<typename T>    //template를 만들것이다, 사용하려면 typename을 하나만명시하라
T square(T a)
{
    return a * a;
}

int main (int argc, char **argv) 
{
    std::cout << "FunctionTemplate" << std::endl;
    square(3);
    square(3.4);

    //1. template instantiation
    square<int>(3);
    square<double>(3.4);

    //2. Type deduction
    square(3);      //compile가 type을 유추
    square(3.4);    

    /*3. Code Bloat
     *  템플릿이 너무 많은 타입에 대해 인스턴스화가 되어 
     *  코드 메모리 증가
     * */
    char c = 3;
    short s = 3;
    int n = 3;

    square(c);
    square(s);
    square(n);

    //Code Bloat Solution
    square<int>(c);
    square<int>(s);
    square<int>(n);


    return 0;
}
