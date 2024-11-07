

#include <iostream>
#include <iomanip>
using namespace std;
string onf;
string onl;
string bn;
string mk;
string ml;
string cl;
string ln;
int mm;
int pm;
int pf;

class PoliceOfficer
{
public:

	void Carinfo()
	{
		ParkingTicket Car;
		Car.test();

		ParkingMeter CarTwo;
		CarTwo.timecalccall();

		cout << endl << "*** Parking Ticket ***" << endl << "Officer " << onf << " " << onl << " Badge Number " << bn << endl << "Vehicle License Number: " << ln;
		cout << endl << "Make:" << mk << " Color: " << cl << " Meter Minutes: " << mm << " Minutes Parked: " << pm << endl << "Parking Fee: $" << pf << endl;
	}

private:
	class ParkingTicket
	{
	public:

		void test()
		{
			Stats(onf, onl, bn, mk, ml, cl, ln, mm, pm);
		}

	private:
		void Stats(string OfficerNameFirst, string OfficerNameLast, string BadgeNumber, string Make, string Model, string Color, string LicenseNumber, int MeterMinutes, int ParkedMinutes)
		{
			cout << "What is your first name? ";
			cin >> OfficerNameFirst;
			cout << "What is your last name? ";
			cin >> OfficerNameLast;
			cout << "What is your badge number? ";
			cin >> BadgeNumber;
			cout << "What is the make of the car? ";
			cin >> Make;
			cout << "What is the model of the car? ";
			cin >> Model;
			cout << "What color is the car? ";
			cin >> Color;
			cout << "What is the license number of the car? ";
			cin >> LicenseNumber;
			cout << "How many meter minutes did the driver purchase? ";
			cin >> MeterMinutes;
			cout << "How long has the car been parked (in minutes)? ";
			cin >> ParkedMinutes;

			onf = OfficerNameFirst;
			onl = OfficerNameLast;
			bn = BadgeNumber;
			mk = Make;
			ml = Model;
			cl = Color;
			ln = LicenseNumber;
			mm = MeterMinutes;
			pm = ParkedMinutes;
		}
	};

	class ParkingMeter
	{
	public:
		void timecalccall()
		{
			timecalc(pm, mm);
		}

	private:
		void timecalc(int pm, int mm)
		{
			int ParkingFee = 0;
			int ParkingMinutes = pm;
			if (ParkingMinutes > mm)
			{
				ParkingFee = ParkingFee + 25;
				ParkingMinutes = ParkingMinutes - 60;
				for (ParkingMinutes; ParkingMinutes >= 60;)
				{
					ParkingFee = ParkingFee + 10;
					ParkingMinutes = ParkingMinutes - 60;
				}
				pf = ParkingFee;
			}
		}
	};
};



int main()
{
	PoliceOfficer Police;
	Police.Carinfo();
}



