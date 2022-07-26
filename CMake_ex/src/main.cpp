#include <iostream>
#include <cstdlib>
#include "mysqrt.h"
#include "mysquare.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "Usage : " << argv[0] << "number" << std::endl;
		return (1);
	}
	double inputVal = atof(argv[1]);
	std::cout << "The sqaure of " << inputVal << " is " << mysquare(inputVal)
				<< ", and its square root is " << mysqrt(inputVal) << std::endl;
	return (0);
}