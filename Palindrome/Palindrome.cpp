#include <iostream>

bool isPalindrome(int number)
{
    int tmpNum, revNum = 0;
    tmpNum = number;
    do
    {
        revNum = (revNum * 10 ) + tmpNum % 10;
        tmpNum /= 10;
    } while (tmpNum != 0 );

    //std::cout << " The reverse of the number is: " << revNum << '\n';
    if (number == revNum)
        return true;
    return false;
}


int main(int argc, char const *argv[])
{
    std::cout << "Enter positive number\n";
    int num;
    std::cin >> num;
    if ( isPalindrome(num) )
        std::cout << "The number " << num << " is palindrome\n";
    else
        std::cout << "The number " << num << " isn't palindrome\n";


    return 0;
}
