#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name;

    std::cout << "이름을 입력하세요: ";
    std::cin >> name;
    std::cout << "당신의 이름은 " << name <<"입니다.";
    return 0;
}