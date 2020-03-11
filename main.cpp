#include <iostream>

using namespace std;

int n;
int occurences[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main() {
   cout << "Enter the last number" << endl;
   cin >> n;
   for (int i = 0; i <= n; i++){

       //You need to target the current value of i
       int current = i;

       //breaking down number into individual numbers
       while (current > 0){


        //Checking the value broken down
        switch(current % 10){
            case 0:
                occurences[0]++;
                break;
            case 1:
                occurences[1]++;
                break;
            case 2:
                occurences[2]++;
                break;
            case 3:
                occurences[3]++;
                break;
            case 4:
                occurences[4]++;
                break;
            case 5:
                occurences[5]++;
                break;
            case 6:
                occurences[6]++;
                break;
            case 7:
                occurences[7]++;
                break;
            case 8:
                occurences[8]++;
                break;
            case 9:
                occurences[9]++;
                break;

            default: cout << "An error has occured";

        }

        current/=10;

    }

   }

    for(int c = 0; c <= 9; c++){
        cout << c << " appeared " << occurences[c] << " times." << endl;

    }


    return 0;
}
