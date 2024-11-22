all: LtG GtL menu
LtG:
	gcc bubblesort-LtG.cpp -o LtG -lstdc++
GtL:
	gcc bubblesort-GtL.cpp -o GtL -lstdc++
menu:
	gcc menu.cpp -o start -lstdc++
