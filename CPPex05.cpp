#include <iostream>
#include "getVolumeSurface.h"
using namespace std;

int main() {
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "������́F";
		cin >> boxes[i].x;
		cout << "��������́F";
		cin >> boxes[i].y;
		cout << "���s����́F";
		cin >> boxes[i].z;
		getVolumeSurface(&boxes[i]);
		//cout << "�̐ς�" << boxes[i].volume << endl;
		//cout << "�\�ʐς�" << boxes[i].surface << endl;
		if (isSendable(&boxes[i])) {
			cout << boxes[i].packSize << "�T�C�Y�ő���܂�" << endl;
		}
		else {
			cout << "��}�ւł͑���܂���" << endl;
		}
	}
	return 0;
}
