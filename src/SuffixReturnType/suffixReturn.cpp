#include<iostream>

/*
 *  C++11에서 추가된 후위 반환 타입
 * */

int Add1(int a, int b)
{
    return a + b;
}

/*
 *  Suffix Return Type
 *  Argument > Function > Return 
 *  직관적인 표기방법
 *
 *  왜 필요한가요?
 *  반드시 필요한 경우
 *      1) 복잡한 형태의 함수 템플릿(template)
 *      2) 람다 표현식
 * */
auto Add2(int a, int b) -> int
{
    return a + b;
}

int main (int argc, char **argv)
{
    int ret1 = Add1(1,2);
    int ret2 = Add2(1,2);
    return 0;
}
