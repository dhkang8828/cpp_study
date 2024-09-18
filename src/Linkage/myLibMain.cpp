#include<iostream>
#include"myLib.h"

/*
 *  Linkage
 *  해결책: 함수 구현 자체를 헤더 파일에 넣어야 한다.
 *
 *  1) internal linkage: 심볼(함수, 변수이름)이 "선언된 같은 컴파일 단위
 *  (파일)에서만 사용가능" 
 *  e.g.,) 인라인 함수, 템플릿
 *
 *  2) external linkage: 프로젝트내의 "모든 컴파일 단위(파일)에서 사용 가능"
 *  e.g.,) 일반 함수, 전역 변수 
 * */
int main (int argc, char **argv)
{
    /*
     *  컴파일 할 때, Add1의 주소를 알 수 없다.
     *  Linker가 실제 주소를 채워 넣는다. 
     * */
    Add1(1,2);
    // g++ myLibMain.cpp myLib.cpp >> Compile ERROR!!
    /*
     *  inline이라 기계어로 치환해야 하는데,
     *  Add2가 다른 파일에 있으므로, 컴파일러는 Add2 구현을 알 수 없다.
     * */
    //Add2(1,2);

    // g++ myLibMain.cpp myLib.cpp >> Compile ERROR!!
    /*
     *  Add3(int, int)와 같은 함수를 생성해야 한다.
     *  그런데 Add3 템플릿이 다른 파일에 구현 되어 있어서 
     *  컴파일러는 Add3 구현을 알 수 없다.
     * */
    //Add3(1,2);
    return 0;
}
