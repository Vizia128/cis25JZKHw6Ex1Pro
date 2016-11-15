#include <iostream>
#include "Menu.h"
#include "Fraction.h"
#include "FractionUtility.h"
#include "Point.h"
#include "PointUtility.h"
using namespace std;

void menuHw6Ex1() {
	int option = -1;
	Point* pt1 = nullptr;
	Point* pt2 = nullptr;

	do {
		cout<< "\n*******************************"
			<< "\n*         MENU – Hw #6        *"
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
				initPoint(&pt1, &pt2);
			}
			
			else {
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
						initPoint(&pt1, &pt2);
						break;
					case 2:
						initPoint(&pt1, 1);
						break;
					case 3:
						initPoint(&pt1, 2);
						break;
					case 4:
						//TODO
						break;
					case 5:
						break;
					default:
						cout << "\n    WRONG OPTION!\n";
					}
				} while (option != 5);
			}
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
					//TODO
						break;
					case 2:
						//TODO
						break;
					case 3:
						//TODO
						break;
					case 4:
						//TODO
						break;
					default:
						//TODO
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
						<< "\n    *  1. By(frX, frY)          *"
						<< "\n    *  2. By fr                 *"
						<< "\n    *  3. Printing              *"
						<< "\n    *  4. Returning             *"
						<< "\n    *****************************"
						<< "\n    Select an option(use integer value only) : ";
					cin >> option;

					switch (option) {
					case 1:
						//TODO
						break;
					case 2:
						//TODO
						break;
					case 3:
						//TODO
						break;
					case 4:
						//TODO
						break;
					default:
						//TODO
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
						<< "\n    *  4. Returning               *"
						<< "\n    *******************************"
						<< "\n    Select an option(use integer value only) : ";
					cin >> option;
				} while (option != 4);

				switch (option) {
				case 1:
					//TODO
					break;
				case 2:
					//TODO
					break;
				case 3:
					//TODO
					break;
				case 4:
					//TODO
					break;
				default:
					//TODO
					break;
				}
			}
			break;
		case 5:
			//TODO
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