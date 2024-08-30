#include <stdio.h>
#include "square.h"
/*
 *  1. 컴파일러는 각각의 소스코드를 컴파일 후 obj 파일 생성
 *  링커가 이 오브젝트를 링킹
 *  2. 컴파일러는 확장자에 따라 언어를 결정
 *   >> 링키시에 name mangling 된 함수를 찾을 수 없다는
 *   >> Cpp가 아니라 C라는걸 알려줘야 한다: extern "C"
 *
 * */

int main (int argc, char **argv) 
{
    printf("[EXTERN_C] Test\n"); 
    int n = square(3);
    return 0;
}
