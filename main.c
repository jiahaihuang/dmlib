#include "dm.h"

void main()
{
	unsigned long srcdata = 0x33cc55aa;
	unsigned long dstdata = 0;
	unsigned long result = 0;

	dstdata = EDesEn_Crypt(srcdata);
	result = dstdata;
}