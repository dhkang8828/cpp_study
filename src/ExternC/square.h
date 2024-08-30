#pragma once

//gcc로 빌드 한다면, 
// extern "C" 키워드를 알아먹지 못한다. > 컴파일 분기 필요 하다
#ifdef __cplusplus
extern "C" {    //Cpp가아니라 C라고 알려준다. 
#endif

    int square (int);

#ifdef __cplusplus
}
#endif


