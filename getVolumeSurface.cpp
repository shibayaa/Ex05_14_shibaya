#include "getVolumeSurface.h"

void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}

bool isSendable(BOX* box) {
	int all[] = { 60,80,100,120,140,160,180,200 };
	double size;
	size = box->x + box->y + box->z;
	if (size <= 200) {
		for (int j = 0; j < 8; j++) {
			if (size <= all[j]) {
				box->packSize = all[j];
				return true;
			}
		}
	}
	else {
		return false;
	}
}