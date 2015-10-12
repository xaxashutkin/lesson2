#include <iostream>

using namespace std;

int main()
{
    string user;
    string ai;
    int ran;
    cout << "Enter Rock, Scissors or Paper:" << endl;
    cin >> user;
    ran = rand() % 3 +1;

    switch(ran)
    {
    case 1:
     {
        ai = "Rock";
        break;
     }
    case 2:
     {
        ai = "Scissors";
        break;
     }
    case 3:
     {
        ai = "Paper";
        break;
     }
    }

    cout << ai << endl;


    if(user == "Paper")
        {
            if (ai == "Rock")
                cout << "You win!" << endl;
           else cout << "Looser!" << endl;
        }
   else if (user == "Scissors")
        {
            if (ai == "Paper")
                cout << "You win!" << endl;
           else cout << "Looser!" << endl;
        }
    else
        {
         if (ai == "Scissors")
             cout << "You win!" << endl;
         else cout << "Looser!" << endl;
        }




    return 0;
}

