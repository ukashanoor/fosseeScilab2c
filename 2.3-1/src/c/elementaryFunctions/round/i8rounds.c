/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 

#include "round.h"

int8 i8rounds(int8 x) {
	int result;
	
	if(x>=0) 	result = (int8)((float)x+0.5);
	else 		result = (int8)((float)x-0.5);
	
	return (int8)result;
}
