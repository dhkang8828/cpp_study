#include <iostream>
#include <algorithm>

bool cmp(int a, int b)
{
    return a > b;
}

int main (int argc, char **argv)
{
    int x[5] = {1, 3, 5, 2, 4};
    std::sort(x, x+5);          //1, 2, 3, 4, 5 (오름차순)

    //단항 함수(unary function): 인자가 1개인 함수
    //이항 함수(binary function): 인자가 2개인 함수
    std::sort(x, x+5, cmp);     //5, 4, 3, 2, 1 (내림차순)

    /*
     *  Lambda Expression
     *  익명의 함수(객체)를 만드는 문법
     *  함수이름(주소)가 필요한 위치에 함수 구현자체를 표기할 수 있는 문법
     *  []기호: lambda introducer
     * */
    std::sort(x, x+5, 
            [](int a, int b){return a > b;});

    /*
     *  Lambda Expression의 리턴 타입
     *  후위 반환 표기법을 사용할 수 있다.
     *  컴파일러가 return  문장을 보고 추론 할 수 있는 경우 리턴 생략 가능
     * */
    std::sort(x, x+5,
            [](int a, int b) -> bool {return a>b;});

    for (int i = 0; i < 5; i++) {
        std::cout << "x[" << i << "]:" << x[i] << std::endl;
    }

    /*
     *  Lambda Expression Usage
     *  1) std::sort등 알고리즘(C++ std-lib)의 인자로 사용
     *  2) auto변수에 담아 함수 처럼 사용. (그럼 그냥 함수를 쓰지?)
     *      > 특정 상황에서 일반 함수보다 빠르다.
     *      지역변수를 캡쳐할 수 있다.
     *      그 외에도 다양한 장점이 있지만.. C++ INTERMEDIATE 과정 참고
     * */
    auto add = [](int a, int b){return a+b;};

    int ret = add(1,2);
    std::cout << "ret: " << ret << std::endl;

}
