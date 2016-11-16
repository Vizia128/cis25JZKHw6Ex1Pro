#include <iostream>
#include "Menu.h"
using namespace std;


int main() {
	cout << "CIS 25 - C++ Programming"
		<< "\nLaney College"
		<< "\nJulian K"
		<< "\nAssignment Information --"
		<< "\n  Assignment Number : Homework 06,"
		<< "\n                      Exercise #1"
		<< "\n  Written by : Julian K"
		<< "\n  Due Date : 2016/11/15\n";
	menuHw6Ex1();
	return 0;
}


/* Output
CIS 25 - C++ Programming
Laney College
Julian K
Assignment Information --
Assignment Number : Homework 06,
Exercise #1
Written by : Julian K
Due Date : 2016/11/15


*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 2

No points are available!

*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 1

Enter coordinates of Point 1
X-coordinate -
Enter numerator : 1
Enter denominator: 2

Y-coordinate -
Enter numerator : 2
Enter denominator: 1

Enter coordinates of Point 2
X-coordinate --
Enter numerator : 4
Enter denominator: 1

Y-coordinate --
Enter numerator : 1
Enter denominator: 1

Initialization Option--
*************************************
*  Sub MENU -- PointInitialization  *
*  1. Initializing(2 Points)        *
*  2. Initializing(Point 1)         *
*  3. Initializing(Point 2)         *
*  4. Printing                      *
*  5. Returning                     *
*************************************
Select an option(use integer value only) : 5


*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 5

Point 1 : (1/2,2)
Point 2 : (4,1)

*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 3

Moving Option--
*****************************
*  Sub MENU -- MovingPoint  *
*  1. moveBy(frX, frY)      *
*  2. moveBy fr             *
*  3. Printing              *
*  4. Returning             *
*****************************
Select an option(use integer value only) : 1

Enter the horizontal movement -
Enter numerator : -1
Enter denominator: 1

Enter the vertical movement -
Enter numerator : 1
Enter denominator: -2

Moving Option--
*****************************
*  Sub MENU -- MovingPoint  *
*  1. moveBy(frX, frY)      *
*  2. moveBy fr             *
*  3. Printing              *
*  4. Returning             *
*****************************
Select an option(use integer value only) : 3

Point 1 : (-1/2,3/2)
Point 2 : (3,1/2)
Moving Option--
*****************************
*  Sub MENU -- MovingPoint  *
*  1. moveBy(frX, frY)      *
*  2. moveBy fr             *
*  3. Printing              *
*  4. Returning             *
*****************************
Select an option(use integer value only) : 2

Enter the movement -
Enter numerator : -1
Enter denominator: 1

Moving Option--
*****************************
*  Sub MENU -- MovingPoint  *
*  1. moveBy(frX, frY)      *
*  2. moveBy fr             *
*  3. Printing              *
*  4. Returning             *
*****************************
Select an option(use integer value only) : 3

Point 1 : (-3/2,1/2)
Point 2 : (2,-1/2)
Moving Option--
*****************************
*  Sub MENU -- MovingPoint  *
*  1. moveBy(frX, frY)      *
*  2. moveBy fr             *
*  3. Printing              *
*  4. Returning             *
*****************************
Select an option(use integer value only) : 4


*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 4

Flipping Option--
*******************************
*  Sub MENU -- FlippingPoint  *
*  1. Flip through X-axis     *
*  2. Flip through Y-axis     *
*  3. Flip through Origin     *
*  4. Printing                *
*  5. Returning               *
*******************************
Select an option(use integer value only) : 1

Flipping points through X-axis
Flipping Option--
*******************************
*  Sub MENU -- FlippingPoint  *
*  1. Flip through X-axis     *
*  2. Flip through Y-axis     *
*  3. Flip through Origin     *
*  4. Printing                *
*  5. Returning               *
*******************************
Select an option(use integer value only) : 4

Point 1 : (-3/2,-1/2)
Point 2 : (2,1/2)
Flipping Option--
*******************************
*  Sub MENU -- FlippingPoint  *
*  1. Flip through X-axis     *
*  2. Flip through Y-axis     *
*  3. Flip through Origin     *
*  4. Printing                *
*  5. Returning               *
*******************************
Select an option(use integer value only) : 2

Flipping points through Y-axis
Flipping Option--
*******************************
*  Sub MENU -- FlippingPoint  *
*  1. Flip through X-axis     *
*  2. Flip through Y-axis     *
*  3. Flip through Origin     *
*  4. Printing                *
*  5. Returning               *
*******************************
Select an option(use integer value only) : 5


*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 2

Placement Option--
********************************
*  Sub MENU -- PointPlacement  *
*  1. getQuadrant(Point)       *
*  2. getQuadrant()            *
*  3. Printing                 *
*  4. Returning                *
********************************
Select an option(use integer value only) : 1

Point 1 is in quadrant 4
Point 2 is in quadrant 2
Placement Option--
********************************
*  Sub MENU -- PointPlacement  *
*  1. getQuadrant(Point)       *
*  2. getQuadrant()            *
*  3. Printing                 *
*  4. Returning                *
********************************
Select an option(use integer value only) : 4


*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 4

Flipping Option--
*******************************
*  Sub MENU -- FlippingPoint  *
*  1. Flip through X-axis     *
*  2. Flip through Y-axis     *
*  3. Flip through Origin     *
*  4. Printing                *
*  5. Returning               *
*******************************
Select an option(use integer value only) : 3

Flipping points through Origin
Flipping Option--
*******************************
*  Sub MENU -- FlippingPoint  *
*  1. Flip through X-axis     *
*  2. Flip through Y-axis     *
*  3. Flip through Origin     *
*  4. Printing                *
*  5. Returning               *
*******************************
Select an option(use integer value only) : 5


*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) : 2

Placement Option--
********************************
*  Sub MENU -- PointPlacement  *
*  1. getQuadrant(Point)       *
*  2. getQuadrant()            *
*  3. Printing                 *
*  4. Returning                *
********************************
Select an option(use integer value only) : 2

Point 1 is in quadrant 2
Point 2 is in quadrant 4
Placement Option--
********************************
*  Sub MENU -- PointPlacement  *
*  1. getQuadrant(Point)       *
*  2. getQuadrant()            *
*  3. Printing                 *
*  4. Returning                *
********************************
Select an option(use integer value only) : 4


*******************************
*        MENU -- Hw #6        *
*  1. Initializing(2 Points)  *
*  2. Placement               *
*  3. Moving                  *
*  4. Flipping                *
*  5. Displaying              *
*  6. Quit                    *
*******************************
Select an option(use integer value only) :
*/

/* Comments
I put the definitions for the I/O operator 
functions for Fraction and Point on their 
respective .cpp files instead of at the end
of their .h files.  Whenever I put the 
definitions in their .h files I got error
LNK2005 saying that the opperator was
already defined.

It also took me a very long time to declare
static int getQuadrant(const Point&);
as a static function
*/