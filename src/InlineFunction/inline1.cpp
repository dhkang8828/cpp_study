#include<iostream>

/*
 *  일반적인 함수의 경우
 *  함수 인자를 약속된 register에 넣고(32bit - stack, 64bit - register)
 *  함수로 이동
 * */
int Add1(int a, int b)
{
    return a + b;
}

/*
 *  inline 함수는
 *  함수의 기계어 코드로 치환 
 * */
inline int Add2(int a, int b) 
{
    return a + b;
}

int main (int argc, char **argv)
{
    int ret1 = Add1(1,2);
    /*
     * 인라인 치환을 적용 하려면 "/ob1" 옵션 사용 
     * 장점: 빠르다
     * 단점: 실행 파일의 크기가 커진다. 
     * (크기가 작은 함수는 inline 치환시 크기가 작아진다.)
     * */
    int ret2 = Add2(1,2);

    //함수 포인터로 사용하려면
    //함수 기계어(어셈블러)가 생성 된다.
    int (*f)(int, int) = &Add2;
    return 0;
}
