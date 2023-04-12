// Proyectosopadeletras.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Isarel Cortes
//COMP2315.STRUCTURED PROGRAMMING
//30/3/2023

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int x, y, z;
	x = 1;
	y = 0;
	z = 0;
	string attemp1, attemp2, attemp3;
	vector<string> code{ "heat #$%@@%^&(*^^(&(&&&%^&^%&))_++++++++==-0-0-9089078987","car efugcuagcuscgjah38r2963796e9736949t0809288e71e77e637r68178277e7r7037e - 1 -= / '.'.'.;.'; ","dog 77oi0ppucxdoiyhcag / ';[];=-{}{}{}{^&%&$%@$$@$@#!#^%$&%%(&&&(&(&(&&^&^&^&%treyugvgcgctdtyfytfyuugiuupuppyfyffdyydfjfyffffffffhftfdfhfhft76736e69r4797e86bcbv dbvkdbgvbsksbidy./.,;.,,/.;[][]][][{{}{}}{}{}[{}{}[]{}[}[]{]{awaresrsxtxxsq2##%#@#@$^$$$" };
	cout << code[0] << "\n" << code[1] << "\n" << code[2] << "\n";
	cout << "\n";
	cout << "Find the hidden worlds in the mysterious code\n";
	cout << "There are three hidden worlds, and you have three attemps to find them all\n";
	do {
		do {
			cout << "Attemp" << x << endl;
			cin >> attemp1;
			if (attemp1 == "heat" || attemp1 == "car" || attemp1 == "dog") {
				cout << "You find one!!!!!!\n";
				z++;
				//cout << z << endl;
			}
			else {
				cout << "You fail\n";
				y++;
				//cout << y << endl;
				if (y == 3) {
					z = 6;
				}
			}
			x++;
		} while (z < 3);
		y = 3;
	} while (y < 3);
	if (z == 3) {
		cout << "You have successfuly win!!!\n";
	}
	else {
		cout << "You sadly have lost\n";
	}
	return 0;
}