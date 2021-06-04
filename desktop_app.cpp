#include "header_classA.h"

int main()
{
    //variable declaration
    int index =  0;
    int counter = 0;
    double upper_limit;
    int user_input[30];
    int c{};
    char user_approval;
    cout << "\n\n\t\t\t*********** It's Amit copyright@2020 Production***********\t\t\t\n\n\n\n";

            cout << "Please enter the upper limit of the number of digit you want to enter";
            //take the input
            cin >> upper_limit;
            if (!(int(upper_limit)))
            {
                cout << "\n\n\n\t\tInvalid entery, enter value is not integer, Please restart the program\n";
                
                exit(0);
            }
            else
            {

                if (upper_limit < 30)
                {
                    do
                    {
                        while (index < upper_limit)
                        {
                            cout << "Please enter the digit ( " << index + 1 << " )\t";
                            cin >> user_input[index];
                            if (int(user_input[index]))
                            {
                                index++;
                            }
                            else
                            {
                                cout << "\n\n\n\t\tInvalid entery, enter value is not integer, Please restart the program\n";

                                exit(0);
                            }

                        }
                        for (index = 0; index < upper_limit; index++)
                        {
                            cout << "digit (" << index << ") ==> " << user_input[index] << " , \n";
                        }
                        index = 0;
                        cout << "\n\n\n********   Do You want to Run the Program again? *(Press y to continue, any other key to exit  ********\n";
                        cin >> user_approval;
                    } while (user_approval == 'y');

                    exit(0);
                }
                if (upper_limit > 30 && counter < 3)
                {
                    cout << "\n\n\t\t\t\******Upper Limit is 30, Please Enter a Value of limit less than 30********\t\n\n";
                    cout << "\t\t\t\t\t******You have " << 3 - (counter + 1) << "  chances left*******\n\n";
                }
                counter++;
                if (counter == 3 && upper_limit > 30)
                {
                    cout << "\t\t\t*******Maximum Attempts made !!! Please Restart the Program !!********\n\n \n";
                    exit(0);
                }
            }
        
            

    //cin.clear();
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cin.get();
}
