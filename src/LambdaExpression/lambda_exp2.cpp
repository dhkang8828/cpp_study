#include <iostream>
#include <algorithm>

void foo (int n )
{
    if ( n < 40) {
        std::cout << "n: " << n << std::endl;
    }
}

int main (int argc, char **argv)
{

    int score[5] = {95, 35, 63, 72, 22};
    //std::for_each
    //구간의 모든 요소를 마지막 인자로 전달된 "단항함수"에 
    //차례대로 전달
    std::for_each(score, score+5, foo);

    /*
     *  Capture Local Variable
     *  lambda exp안에서는 자신이 속한 문맥(main 함수)의 지역변수에 접근 할 수
     *  있다.
     *  > 이를 Caputer 했다고 표현
     * */

    int pass = 70;
    //점수가 pass 미만을 출력하시오
    std::for_each(score, score+5, 
            [pass] (int n) {    //Capture
                if ( n < pass)  {
                    std::cout << "n: " << n << std::endl;
                }
            }
    );

}
