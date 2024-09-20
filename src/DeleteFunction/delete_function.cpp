#include<iostream>

int gcd(int a, int b)
{
    return b != 0 ? gcd(b, a % b) : a;
}

double gcd(double a, double b);             //구현없이 선언만. (Link Error)
double gcd(double a, double b) = delete;    //C++, Function Delete (Complie Error)
                                
/*
 *  class문법중, 
 *  사용자가 만들지 않으면 컴파일러가 자동으로 생성하는 함수가 있다.
 *  자동 생성하는 함수를 만들지 못하게 하고 싶을 때 주로 사용
 * */
int main (int argc, char **argv) 
{
    gcd(10, 4);

    /*
     *  암시적 형변환(double -> int)으로 int gcd()가 호출
     *  그러나 실수의 최대공약수는 구할 수 없다.
     *  아래와 같이 사용될 때, Compile Error를 발생 시키고 싶다.
     * */
    //gcd(3.3, 4.4);    //compile Error!
    return 0;
}
