/* Write a program to find out how many days and how many weeks have passed
 between the dates 01/01/92 to 31/05/92. Also, find out how many days could not get evened out into weeks. */
 #include <iostream>
using namespace std;

// Function to calculate the total number of days between two dates
int calculateDaysBetweenDates(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  // Days in each month (non-leap year)

    // Calculate the total days for the start and end dates.
    int totalDays = 0;

    // Add days for years in between (startYear to endYear).
    for (int year = startYear; year <= endYear; year++) {
        // Check for leap year (every 4 years, except for multiples of 100 that are not divisible by 400)
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[1] = 29; // February has 29 days in a leap year
        } else {
            daysInMonth[1] = 28; // February has 28 days in a non-leap year
        }

        // Add days from the start month to the end month in the given year
        for (int month = 0; month < 12; month++) {
            if (year == startYear && month < startMonth - 1) {
                continue; // Skip months before the start month
            }

            if (year == endYear && month > endMonth - 1) {
                break; // Stop when we reach the end month
            }

            // Calculate days for the months in the year
            if (month == startMonth - 1 && year == startYear) {
                totalDays += (daysInMonth[month] - startDay); // Remaining days in the start month
            } else if (month == endMonth - 1 && year == endYear) {
                totalDays += endDay; // Days in the end month up to the end day
            } else {
                totalDays += daysInMonth[month]; // Add full months
            }
        }
    }
    return totalDays;
}

int main() {
    // Dates: 01/01/92 to 31/05/92
    int startDay = 1, startMonth = 1, startYear = 1992;
    int endDay = 31, endMonth = 5, endYear = 1992;

    // Calculate the number of days between the two dates
    int totalDays = calculateDaysBetweenDates(startDay, startMonth, startYear, endDay, endMonth, endYear);

    // Calculate how many full weeks and extra days
    int weeks = totalDays / 7;  // Calculate full weeks
    int remainingDays = totalDays % 7;  // Calculate the leftover days

    // Output the results
    cout << "Total days between " << startDay << "/" << startMonth << "/" << startYear << " and "
         << endDay << "/" << endMonth << "/" << endYear << " is: " << totalDays << " days." << endl;
    cout << "Total full weeks: " << weeks << " weeks." << endl;
    cout << "Remaining days that could not form full weeks: " << remainingDays << " days." << endl;

    return 0;
}

