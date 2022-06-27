#include <iostream>
#include <string>

using namespace std;
	
int main() {
	//setting up both parameters for the clocks
	int timeHr;
	int timeMin;
	int timeSec;
	int userOpt;
	int timeHr2;
	int timeMin2;
	int timeSec2;
	//setting time for both clocks
	timeHr = 10;
	timeMin = 22;
	timeSec = 10;
	timeHr2 = timeHr + 12;
	timeMin2 = timeMin;
	timeSec2 = timeSec;
	//clock display
	cout << "***************************************" << endl;
	cout << "* 12-Hour Clock " << "*     *" << " 24-Hour Clock *" << endl;
	cout << "*               *     *               *" << endl;
	cout << "* " << timeHr << ":" << timeMin << ":" << timeSec << " PM   *";
	cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << "      *" << endl;
	cout << "***************************************" << endl;
	//menu display
	cout << "Please Select an option" << endl;
	cout << "1) Add 1 Hour" << endl;
	cout << "2) Add 1 Minute" << endl;
	cout << "3) Add 1 Second" << endl;
	cout << "4) Exit" << endl;

	cin >> userOpt;
	//options 1-3 to add time
	while ((userOpt >= 1) && (userOpt <= 3)) {
		cout << "***************************************" << endl;
		cout << "* 12-Hour Clock " << "*     *" << " 24-Hour Clock *" << endl;
		cout << "*               *     *               *" << endl;
		//adds 1 hour to both clocks
		if (userOpt == 1) {
			if ((timeHr + 1) > 12) {
				timeHr = timeHr + 1;
				timeHr = timeHr - 12;
				cout << "* " << timeHr << ":" << timeMin << ":" << timeSec << " PM   *";
			}

			if (timeHr < 12) {
				timeHr = timeHr + 1;
				cout << "* " << timeHr << ":" << timeMin << ":" << timeSec << " PM   *";
			}

			if ((timeHr2 + 1) == 24) {
				timeHr2 = 00;
				cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << "      *" << endl;
			}
			else {
				timeHr2 = timeHr2 + 1;
				cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << "      *" << endl;

			}
			cout << "***************************************" << endl;
			break;
		}
		//adds 1 minutes to both clocks
		if (userOpt == 2) {
			if (timeMin >= 59) {
				timeMin = timeMin - 60;
				timeMin = timeMin + 1;
				if (timeHr >= 12) {
					timeHr = timeHr - 12;
					timeHr = timeHr + 1;
					cout << "* " << timeHr << ":" << timeMin << timeMin << ":" << timeSec << " PM   *";
					//helps the time roll over to the next hour
				}
				else {
					timeHr = timeHr + 1;
					cout << "* " << timeHr << ":" << timeMin << timeMin << ":" << timeSec << " PM   *";
				}

			}
			if (timeMin < 59) {
				timeMin = timeMin + 1;
				cout << "* " << timeHr << ":" << timeMin << ":" << timeSec << " PM   *";
			}

			if (timeMin2 >= 59) {
				timeMin2 = timeMin2 - 60;
				timeMin2 = timeMin2 + 1;
				if (timeHr2 >= 23) {
					timeHr2 = 00;
					cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << "      *" << endl;
				}
				else {
					timeHr2 = timeHr2 + 1;
					cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << "      *" << endl;
				}
			}

			else {
				timeMin2 = timeMin2 + 1;
				cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << "      *" << endl;
			}
			cout << "***************************************" << endl;
			break;
		}

		//adds 1 second to the clocks
		if (userOpt == 3) {
			if (timeSec >= 59) {
				timeSec = timeSec - 60;
				timeSec = timeSec + 1;
				timeMin = timeMin + 1;
				if (timeMin >= 59) {
					timeMin = timeMin - 60;
					if (timeHr >= 12) {
						timeHr = timeHr - 12;
						timeHr = timeHr + 1;
						cout << "* " << timeHr << ":" << timeMin << timeMin << ":" << timeSec << timeSec << " PM   *";
						//time rolls over
					}
					else {
						timeHr = timeHr + 1;
						cout << "* " << timeHr << ":" << timeMin << timeMin << ":" << timeSec << timeSec << " PM   *";
					}
				}
				else {
					cout << "* " << timeHr << ":" << timeMin << ":" << timeSec << timeSec << " PM   *";
				}
			}
			if (timeSec < 59) {
				timeSec = timeSec + 1;
				cout << "* " << timeHr << ":" << timeMin << ":" << timeSec << " PM   *";

				if (timeSec2 >= 59) {
					timeSec2 = timeSec2 - 60;
					timeSec2 = timeSec2 + 1;
					timeMin2 = timeMin2 + 1;
					if (timeMin2 >= 59) {
						timeMin2 = timeMin2 - 60;
						if (timeHr2 >= 24) {
							timeHr2 = timeHr2 - 24;
							timeHr2 = timeHr2 + 1;
							cout << "     * " << timeHr2 << ":" << timeMin2 << timeMin2 << ":" << timeSec2 << timeSec2 << "      *" << endl;
							//time rolls over
						}
						else {
							timeHr2 = timeHr2 + 1;
							cout << "     * " << timeHr2 << ":" << timeMin2 << timeMin2 << ":" << timeSec2 << timeSec2 << "      *" << endl;
						}
					}
					else {
						cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << timeSec2 << "      *" << endl;
					}
				}
				if (timeSec2 < 59) {
					timeSec2 = timeSec2 + 1;
					cout << "     * " << timeHr2 << ":" << timeMin2 << ":" << timeSec2 << "      *" << endl;
				}
			}
			cout << "***************************************" << endl;
			break;
		}
		// added breaks to every option to prevent it from being an endless loop
	}
	//exit option
	if (userOpt == 4) {
		cout << "Goodbye!" << endl;
	}


	return 0;
 }