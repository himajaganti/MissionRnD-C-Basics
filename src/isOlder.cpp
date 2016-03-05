/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES:		Don't use any built-in C functions for comparisions. You are free to use helper functions*/

int isOlder(char *dob1, char *dob2) {
	
	int dd2, dd1, mm2, mm1, yyyy2, yyyy1;

		dd1 = ((int)((dob1[0] - 48) * 10)) + ((int)(dob1[1] - 48));
		mm1 = ((int)((dob1[3] - 48) * 10)) + ((int)(dob1[4] - 48));
		yyyy1 = (((int)((dob1[6] - 48) * 1000)) + ((int)((dob1[7] - 48) * 100)) + ((int)((dob1[8] - 48) * 10)) + ((int)(dob1[9] - 48)));



		dd2 = ((int)((dob2[0] - 48) * 10)) + ((int)(dob2[1] - 48));
		mm2 = ((int)((dob2[3] - 48) * 10)) + ((int)(dob2[4] - 48));
		yyyy2 = (((int)((dob2[6] - 48) * 1000)) + ((int)((dob2[7] - 48) * 100)) + ((int)((dob2[8] - 48) * 10)) + ((int)(dob2[9] - 48)));

		if ((dob1[2] != '-') || (dob1[5] != '-') || (dob2[2] != '-') || (dob2[5] != '-') || (mm1 > 12) || (mm2 > 12))
		{
			return -1;
		}
		if ((mm1 == 1) || (mm1 == 3) || (mm1 == 5) || (mm1 == 7) || (mm1 == 8) || (mm1 == 10) || (mm1 == 12) || (mm2 == 1) || (mm2 == 3) || (mm2 == 5) || (mm2 == 7) || (mm2 == 8) || (mm2 == 10) || (mm2 == 12))
		{
			if ((dd1 < 1 || dd1>31) || (dd2 < 1 || dd2>31))
			{
				return -1;
			}

		}
		if ((mm1 == 4) || (mm1 == 6) || (mm1 == 9) || (mm1 == 11) || (mm2 == 4) || (mm2 == 6) || (mm2 == 9) || (mm2 == 11))
		{
			if ((dd1 < 1 || dd1>30) || (dd2 < 1 || dd2>30))
			{
				return -1;
			}
		}
		if ((((yyyy1 % 4 == 0) && (yyyy1 % 100 != 0)) || (yyyy1 % 400 == 0)) || (((yyyy2 % 4 == 0) && (yyyy2 % 100 != 0)) || (yyyy2 % 400 == 0)))
		{
			
			if ((mm1 == 2) || (mm2 == 2))
			{
				if ((dd1 < 1 || dd1>29) || (dd2 < 1 || dd2>29))
				{
					return -1;
				}
			}
		}
		if ((yyyy1 % 4 != 0) || (yyyy2 % 4 != 0))
		{
			if ((mm1 == 2) || (mm2 == 2))
			{
				if ((dd1 < 1 || dd1>28) || (dd2 < 1 || dd2>28))
				{
					return -1;
				}
			}
		}


		if ((yyyy1 == yyyy2) && (mm1 == mm2) && (dd1 == dd2))
		{
			return 0;
		}
		if ((yyyy1 == yyyy2) && (mm1 == mm2))

		{
			if (dd1 < dd2)
				return 1;
			else
				return 2;
		}

		if ((yyyy1 == yyyy2))

		{
			if (mm1 < mm2)
				return 1;
			else return 2;
		}

		if (yyyy1 < yyyy2)
		{
			return 1;
		}
		else return 2;


	}
