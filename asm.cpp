#include<iostream>
using namespace std;

unsigned long int u;
void * p;

int main(){
	
	p = &u;
	_asm	{

		mov eax, OFFSET u
		MOV WORD PTR [eax], 7
	}

	cout << u << endl;

	return 0;
}
