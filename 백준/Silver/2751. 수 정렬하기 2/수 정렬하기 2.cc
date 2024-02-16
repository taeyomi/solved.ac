#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> numbers; // 수를 저장할 벡터 생성

    // 수를 입력 받아 벡터에 저장
    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    // 입력 받은 수를 오름차순으로 정렬
    std::sort(numbers.begin(), numbers.end());

    // 정렬된 수를 출력
    for (int i = 0; i < N; ++i) {
        std::cout << numbers[i] << '\n';
    }

    return 0;
}