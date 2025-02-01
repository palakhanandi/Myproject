#include <iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int sum = 0;
void enter()
{
    int choice;
    cout << " How many students do you want to enter : ";
    cin >> choice;
    if (sum == 0)
    {

        sum = sum + choice;
        for (int i = 0; i < choice; i++)
        {
            cout << "\nEnter data of student : " << i + 1 << endl
                 << endl;
            cout << "Enter name : " << endl;
            cin >> arr1[i];
            cout << "Enter Roll no : " << endl;
            cin >> arr2[i];
            cout << "Enter Subject : " << endl;
            cin >> arr3[i];
            cout << "Enter Class : " << endl;
            cin >> arr4[i];
            cout << "Enter Contact : " << endl;
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = sum; i < sum + choice; i++)
        {
            cout << "\nEnter data of student : " << i + 1 << endl
                 << endl;
            cout << "Enter name : " << endl;
            cin >> arr1[i];
            cout << "Enter Roll no : " << endl;
            cin >> arr2[i];
            cout << "Enter Subject : " << endl;
            cin >> arr3[i];
            cout << "Enter Class : " << endl;
            cin >> arr4[i];
            cout << "Enter Contact : " << endl;
            cin >> arr5[i];
        }
        sum = sum + choice;
    }
}
void show()
{
    for (int i = 0; i < sum; i++)
    {
        cout << "Data of student : " << i + 1 << endl
             << endl;
        cout << "Name : " << arr1[i] << endl;
        cout << "Roll No : " << arr2[i]<< endl;
        cout << "Subject : " << arr3[i]<< endl;
        cout << "Class : " << arr4[i]<< endl;
        cout << "Contact : " << arr5[i]<< endl;
    }
}
void search()
{
    string rollno;
    cout << "Enter Roll no of student which you wantb to search : ";
    cin >> rollno;
    for (int i = 0; i < sum; i++)
    {
        if (rollno == arr2[i])
        {
            cout << "Data of student : " << i + 1 << endl
                 << endl;
            cout << "Name : " << arr1[i] << endl;
            cout << "Roll No : " << arr2[i]<< endl;
            cout << "Subject : " << arr3[i]<< endl;
            cout << "Class : " << arr4[i]<< endl;
            cout << "Contact : " << arr5[i]<< endl;
        }
    }
}

void update()

{

    if (sum == 0)

    {

        cout << "No data is entered" << endl;
    }

    else
    {

        string rollno;

        cout << "Enter the roll no of student which you want to update" << endl;

        cin >> rollno;

        for (int i = 0; i < sum; i++)

        {

            if (rollno == arr2[i])

            {

                cout << "\nPrevious data" << endl
                     << endl;

                cout << "Data of Student " << i + 1 << endl;

                cout << "Name " << arr1[i] << endl;

                cout << "Roll no " << arr2[i] << endl;

                cout << "Course " << arr3[i] << endl;

                cout << "Class " << arr4[i] << endl;

                cout << "Contact " << arr5[i] << endl;

                cout << "\nEnter new data" << endl
                     << endl;

                cout << "Enter name ";

                cin >> arr1[i];

                cout << "Enter Roll no\n";

                cin >> arr2[i];

                cout << "Enter course\n ";

                cin >> arr3[i];

                cout << "Enter class \n";

                cin >> arr4[i];

                cout << "Enter contact\n ";

                cin >> arr5[i];
            }
        }
    }
}

void deleterecord()

{

    if (sum == 0)

    {

        cout << "No data is entered" << endl;
    }

    else
    {

        int a;

        cout << "Enter 1 to delete all record" << endl;

        cout << "Enter 2 to delete specific record" << endl;

        cin >> a;

        if (a == 1)

        {

            sum = 0;

            cout << "All record is deleted..!!" << endl;
        }

        else if (a == 2)

        {

            string rollno;

            cout << "Enter the roll no of student which you wanted to delete" << endl;

            cin >> rollno;

            for (int i = 0; i < sum; i++)

            {

                if (rollno == arr2[i])

                {

                    for (int j = i; j < sum; j++)

                    {

                        arr1[j] = arr1[j + 1];

                        arr2[j] = arr2[j + 1];

                        arr3[j] = arr3[j + 1];

                        arr4[j] = arr4[j + 1];

                        arr5[j] = arr5[j + 1];
                    }

                    sum--;

                    cout << "Your required record is deleted" << endl;
                }
            }
        }

        else

        {

            cout << "Invalid input";
        }
    }
}

int main()

{

    int value;

    while (true)

    {

        cout << "\nEnter 1 to enter data" << endl;

        cout << "Enter 2 to show data" << endl;

        cout << "Enter 3 to search data" << endl;

        cout << "Enter 4 to update data" << endl;

        cout << "Enter 5 to delete data" << endl;

        cout << "Enter 6 to exit" << endl;

        cin >> value;

        switch (value)

        {

        case 1:

            enter();

            break;

        case 2:

            show();

            break;

        case 3:

            search();

            break;

        case 4:

            update();

            break;

        case 5:

            deleterecord();

            break;

        case 6:

            exit(0);

            break;

        default:

            cout << "Invalid input" << endl;

            break;
        }
    }
}
