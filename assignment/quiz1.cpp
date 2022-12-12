//소수점 단위까지 계산되는 +-*/가 계산되는 계산기 만들기
//+함수, -함수, *함수, /함수
#include <iostream>
int main()
{
    using namespace std;
    double num1;
    cout << "첫번째 숫자를 입력해주세요: ";
    cin >> num1;
    double num2;
    cout << "두번째 숫자를 입력해주세요: ";
    cin >> num2;
    double result = num1 + num2;
    cout << num1 << "+" << num2 << "=" << result;
    return 0;
}