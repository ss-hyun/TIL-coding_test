﻿#include <Windows.h>
#include <iostream>
#include "class4_problem_list.h"

using namespace std;

int main(){

	cout << "실행시킬 문제 번호 입력 : ";

	int problem;
	cin >> problem;

	switch (problem){
	case 1629:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1629();
		break;
	case 1149:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1149();
		break;
	default:
		cout << problem << "은 없는 문제입니다.\n";
		break;
	}

	system("pause");

	return 0;
}