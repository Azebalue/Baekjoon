#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//0.입력
	int numsOfLope;
	cin >> numsOfLope;
	vector<int> weights(numsOfLope);
	for (int i = 0; i < numsOfLope; ++i) 
		cin >> weights[i];


	//1. 벡터 정렬
	sort(weights.begin(), weights.end(), greater<int>() );

	//2. 선택하는 로프의 개수에 따른 경우의 수를 일일이 탐색
	int currentWeight = 0;
	int sum = 0;//전체 중량
	for (int numsOfChoice = 1; numsOfChoice <= numsOfLope; ++numsOfChoice) {

		sum = weights[numsOfChoice - 1] * numsOfChoice;

		if (sum > currentWeight)
			currentWeight = sum;

	}

	cout << currentWeight;

}