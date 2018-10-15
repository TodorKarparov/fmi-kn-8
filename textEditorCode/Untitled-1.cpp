
#include <iostream>
#include <cmath>
using namespace std;

/*
int main () {

    char letter, small, capital;

    cout << "Enter your letter!";
    cin >> letter;
    if (letter < 90){
        small = letter + 32;
        cout << small;
    } else {
        capital = letter - 32;
        cout << capital;
    }


    return 0;
}
*/

/*
   int findDayOfTheWeek (int day = 0, int month = 0, int currentDay = 0){
        if (month%12 == 2){
            
                    month = month + 57;
            
                } else if(month%2 == 1) {
            
                    month = month + month*30 + (month/2)*1;
            
                }
                currentDay = (month + day)%7;
                cout << currentDay;
    }   
int main (){

    int day = 0, month = 0, currentDay = 0;


    cout << "Enter day: ";
    cin >> day;
    cout << "Ënter month: ";
    cin >> month;

    findDayOfTheWeek (day, month, currentDay);

    return 0;
}

*/
/*
    int reverse(number,digit){

        for(int i = 0; n/10 > 9; i++){

        n%10 = digit;
        n = n/10;
        digit = digit + digit*(pow (i, 10));
    }


}
*/
int reversePalindrome(int number, int remaining, int reversedNumber){

    while(number != 0)
    {
        remaining = number%10;
        reversedNumber = reversedNumber*10 + remaining;
        number /= 10;
        
    }

}

int main() {


    int inputNumber, number, reversedNumber = 0, remaining;

    cout << "Enter your number! ";
    cin >> inputNumber;
    number == inputNumber;
    reversePalindrome(number, remaining, reversedNumber);


    if (reversedNumber != inputNumber) {
        cout << "This number is not a Palindrome!";
    } else {
    cout << reversedNumber;
    }


    return 0;
}

