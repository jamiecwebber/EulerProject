#pragma once

int compute019() {
	int count{ 0 };
	
	// Jan 1 1900 is a Monday (1);
	int date{ 366 }; // 365 days later

	for (int year = 1901; year <= 2000; year++) {
		//January
		if (date % 7 == 0) count++;
		date += 31;

		//February
		if (date % 7 == 0) count++;
		date += year % 4 == 0 ? 29 : 28;

		//March
		if (date % 7 == 0) count++;
		date += 31;

		//April
		if (date % 7 == 0) count++;
		date += 30;

		//May
		if (date % 7 == 0) count++;
		date += 31;

		//June
		if (date % 7 == 0) count++;
		date += 30;

		//July
		if (date % 7 == 0) count++;
		date += 31;

		//August
		if (date % 7 == 0) count++;
		date += 31;

		//September
		if (date % 7 == 0) count++;
		date += 30;

		//October
		if (date % 7 == 0) count++;
		date += 31;

		//November
		if (date % 7 == 0) count++;
		date += 30;

		//December
		if (date % 7 == 0) count++;
		date += 31;
	}

	return count;
}