#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <tiarg.hpp>
#include "tiobj.hpp"


using namespace std;


int main(int argc, char **argv){
	TiObj aux;
	aux.loadFile(stdin);

	TiObj& obj = aux.box[0];

	string res = "([\"class\"]=\""+obj.classe+"\" ";
	for (uint i=0; i<obj.varpkg.size(); i++){
		res += "[\""+obj.varpkg[i].name+"\"]="+obj.varpkg[i].toString()+" ";
	}
	res += ")";
	cout << res << endl;
	return 0;
}
