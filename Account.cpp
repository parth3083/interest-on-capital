#include <iostream>
#include <fstream>
using namespace std;
int main()
{
        ofstream account;
        account.open("account.csv");
        int entries, year;
        string month;
        cout << "Enter the no of entries you want to enter" << endl;
        cin >> entries;
        if (entries == 0)
        {
                cout << "You cannot add 0 entries...." << endl
                     << "Please try again" << endl;
                cout << "Enter the no of entries you want to enter" << endl;
                cin >> entries;
        }
        cout << "Enter the date of this month" << endl;
        int date;
        cin >> date;
        cout << "Enter the month name" << endl;
        cin >> month;
        cout << "Enter the year" << endl;
        cin >> year;

        account << "Date: " << date << " " << month << "'" << year << endl;

        for (int i = 1; i <= entries; i++)
        {
                int sr;

                string s, s1, s2;
                cout << "Enter the name of the partner 1" << endl;
                cin >> s;
                cout << "Enter the name of the partner 2" << endl;
                cin >> s1;
                cout << "Enter the name of the partner 3" << endl;
                cin >> s2;
                float a, b, c;
                cout << "Enter the interest on the capital for the Partner " << s << endl;
                cin >> a;
                cout << "Enter the interest on the capital for the Partner " << s1 << endl;
                cin >> b;
                cout << "Enter the interest on the capital for the Partner " << s2 << endl;
                cin >> c;
                cout << "----------------------------------------" << endl;

                account << "Sr. No."
                        << ","
                        << ","
                        << "Interest on Capital" << endl;
                account << i << "," << s << "," << s1 << "," << s2 << endl;
                account << "," << a << "," << b << "," << c << endl;
                float sum;
                sum = a + b + c;
                account << endl;
                account << ","
                        << "Total: "
                        << "," << sum << endl;
                cout << "Enter the ratio one by one" << endl;
                float d, e, f;
                cin >> d >> e >> f;
                float sum1 = d + e + f;
                account << ","
                        << "Ratio entered: "
                        << "," << d << ":" << e << ":" << f << endl;
                account << ","
                        << "The total of the ratio is: "
                        << "," << sum1 << endl;
                account << endl;
                float A, B, C;
                A = (sum * d) / sum1;
                B = (sum * e) / sum1;
                C = (sum * f) / sum1;
                account << ","
                        << "Profit for the " << s << " is: "
                        << "," << A << endl;
                account << ","
                        << "Profit for the " << s1 << " is: "
                        << "," << B << endl;
                account << ","
                        << "Profit for the " << s2 << " is: "
                        << "," << C << endl;
                float p1, p2, p3;
                p1 = a - A;
                p2 = b - B;
                p3 = c - C;
                account << endl;
                account << ","
                        << "Particular"
                        << "," << s << "," << s1 << "," << s2 << endl;
                account << ","
                        << "Interest on Cap."
                        << "," << a << "," << b << "," << c << endl;
                account << ","
                        << "Reduction profit"
                        << "," << A << "," << B << "," << C << endl;
                account << ","
                        << "Answer"
                        << "," << p1 << "," << p2 << "," << p3 << endl;
                account << endl;
                account << ","
                        << ","
                        << "JOURNAL ENTRY" << endl;
                account << endl;
                account << ","
                        << "Particular"
                        << ","
                        << "Debit"
                        << ","
                        << "Credit" << endl;
                if (p1 < 0)
                {
                        float neg;
                        neg = p1 * (-2);
                        float pos;
                        pos = neg / 2;
                        account << "," << s << "'s capital A/c...dr"
                                << "," << pos << endl;
                }
                if (p2 < 0)
                {
                        float neg;
                        neg = p2 * (-2);
                        float pos;
                        pos = neg / 2;
                        account << "," << s1 << "'s capital A/c...dr"
                                << "," << pos << endl;
                }
                if (p3 < 0)
                {
                        float neg;
                        neg = p3 * (-2);
                        float pos;
                        pos = neg / 2;
                        account << "," << s2 << "'s capital A/c...dr"
                                << "," << pos << endl;
                }
                if (p1 > 0)
                {
                        account << ","
                                << "   To " << s << "'s capital A/c"
                                << ","
                                << "," << p1 << endl;
                }
                if (p2 > 0)
                {
                        account << ","
                                << "   To " << s1 << "'s capital A/c"
                                << ","
                                << "," << p2 << endl;
                }
                if (p3 > 0)
                {
                        account << ","
                                << "   To " << s2 << "'s capital A/c"
                                << ","
                                << "," << p3 << endl;
                }
                account << endl;
                account << endl;
        }
}