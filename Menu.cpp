#include <iostream>
#include "Menu.h"
#include "Fraction.h"
#include "FractionUtility.h"
#include "Point.h"
#include "PointUtility.h"
using namespace std;

void menuHw6Ex1() {
	int option = -1;
	int quadrant = -1;
	Fraction* tempFx = nullptr;
	Fraction* tempFy = nullptr;
	Point* pt1 = nullptr;
	Point* pt2 = nullptr;

	do {
		cout<< "\n\n*******************************"
			<< "\n*        MENU -- Hw #6        *"
			<< "\n*  1. Initializing(2 Points)  *"
			<< "\n*  2. Placement               *"
			<< "\n*  3. Moving                  *"
			<< "\n*  4. Flipping                *"
			<< "\n*  5. Displaying              *"
			<< "\n*  6. Quit                    *"
			<< "\n*******************************"
			<< "\nSelect an option(use integer value only) : ";
		cin >> option;

		switch (option) {
		case 1:
			if (pt1 == nullptr && pt2 == nullptr) {
				init(&pt1, &pt2);
			}
			
			do {
				cout << "\n  Initialization Option--"
					<< "\n    *************************************"
					<< "\n    *  Sub MENU -- PointInitialization  *"
					<< "\n    *  1. Initializing(2 Points)        *"
					<< "\n    *  2. Initializing(Point 1)         *"
					<< "\n    *  3. Initializing(Point 2)         *"
					<< "\n    *  4. Printing                      *"
					<< "\n    *  5. Returning                     *"
					<< "\n    *************************************"
					<< "\n    Select an option(use integer value only) : ";
				cin >> option;

				switch (option) {
				case 1:
					init(&pt1, &pt2);
					break;
				case 2:
					init(&pt1, 1);
					break;
				case 3:
					init(&pt2, 2);
					break;
				case 4:
					cout << "\n      Point 1 : " << *pt1
						<< "\n      Point 2 : " << *pt2;
					break;
				case 5:
					break;
				default:
					cout << "\n    WRONG OPTION!\n";
					break;
				}
			} while (option != 5);
			break;
		case 2:
			if (pt1 == nullptr || pt2 == nullptr)
				cout << "\n    No points are available!";
			
			else {
				do {
					cout << "\n  Placement Option--"
						<< "\n    ********************************"
						<< "\n    *  Sub MENU -- PointPlacement  *"
						<< "\n    *  1. getQuadrant(Point)       *"
						<< "\n    *  2. getQuadrant()            *"
						<< "\n    *  3. Printing                 *"
						<< "\n    *  4. Returning                *"
						<< "\n    ********************************"
						<< "\n    Select an option(use integer value only) : ";
					cin >> option;

					switch (option) {
					case 1:
						cout << "\n    Point 1 is in quadrant "  << Point::getQuadrant(*pt1)
							<< "\n    Point 2 is in quadrant " << Point::getQuadrant(*pt2);
						
						break;
					case 2:
						cout << "\n    Point 1 is in quadrant " << pt1->getQuadrant()
							<< "\n    Point 2 is in quadrant " << pt2->getQuadrant();
						break;
					case 3:
						cout << "\n      Point 1 : " << *pt1
							<< "\n      Point 2 : " << *pt2;
						break;
					case 4:
						break;
					default:
						cout << "\n    WRONG OPTION!\n";
						break;
					}
				}while (option != 4);
			}
			break;
		case 3:
			if (pt1 == nullptr || pt2 == nullptr)
				cout << "\n    No points are available!";
			else {
				do{
					cout << "\n  Moving Option--"
						<< "\n    *****************************"
						<< "\n    *  Sub MENU -- MovingPoint  *"
						<< "\n    *  1. moveBy(frX, frY)      *"
						<< "\n    *  2. moveBy fr             *"
						<< "\n    *  3. Printing              *"
						<< "\n    *  4. Returning             *"
						<< "\n    *****************************"
						<< "\n    Select an option(use integer value only) : ";
					cin >> option;

					switch (option) {
					case 1:
						cout << "\n      Enter the horizontal movement - ";
						init(&tempFx);
						cout << "\n      Enter the vertical movement - ";
						init(&tempFy);
						pt1->moveBy(*tempFx, *tempFy);
						pt2->moveBy(*tempFx, *tempFy);
						delete tempFx;
						delete tempFy;
						break;
					case 2:
						cout << "\n      Enter the movement - ";
						init(&tempFx);
						pt1->moveBy(*tempFx);
						pt2->moveBy(*tempFx);
						break;
					case 3:
						cout << "\n      Point 1 : " << *pt1
							<< "\n      Point 2 : " << *pt2;
						break;
					case 4:
						break;
					default:
						cout << "\n    WRONG OPTION!\n";
						break;
					}
				} while (option != 4);
			}
			break;
		case 4:
			if (pt1 == nullptr || pt2 == nullptr)
				cout << "\n    No points are available!";
			else {
				do{
					cout << "\n  Flipping Option--"
						<< "\n    *******************************"
						<< "\n    *  Sub MENU -- FlippingPoint  *"
						<< "\n    *  1. Flip through X-axis     *"
						<< "\n    *  2. Flip through Y-axis     *"
						<< "\n    *  3. Flip through Origin     *"
						<< "\n    *  4. Printing                *"
						<< "\n    *  5. Returning               *"
						<< "\n    *******************************"
						<< "\n    Select an option(use integer value only) : ";
					cin >> option;
				

					switch (option) {
					case 1:
						cout << "\n      Flipping points through X-axis";
						pt1->flipByXaxis();
						pt2->flipByXaxis();
						break;
					case 2:
						cout << "\n      Flipping points through Y-axis";
						pt1->flipByYaxis();
						pt2->flipByYaxis();
						break;
					case 3:
						cout << "\n      Flipping points through Origin";
						pt1->flipThroughOrigin();
						pt2->flipThroughOrigin();
						break;
					case 4:
						cout << "\n      Point 1 : " << *pt1
							<< "\n      Point 2 : " << *pt2;
						break;
					case 5:
						break;
					default:
						cout << "\n    WRONG OPTION!\n";
						break;
					}
				} while (option != 5);
			}
			break;
		case 5:
			cout << "\n      Point 1 : " << *pt1
				<< "\n      Point 2 : " << *pt2;
			break;
		case 6:
			cout << "\n  Having Fun ...";
			break;
		default:
			cout << "\n  WRONG OPTION!\n";
			break;
		}

	} while (option != 6);

}