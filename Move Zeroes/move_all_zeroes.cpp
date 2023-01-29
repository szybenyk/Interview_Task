/*
Given an integer array, move all elements that are 0 to the left 
while maintaining the order of other elements in the array. 
The array must be modified in-place.
*/

#include <iostream>
#include <vector>


void moveAllValToLeft(std::vector<int>& array, int movingVal)
{
    int writeIt{ static_cast<int>(array.size()) - 1 }, readIt{ writeIt };
    while (readIt >= 0 && writeIt >= 0)
    {
        if( array[writeIt] != movingVal )
            --writeIt;
        if( (array[writeIt] == movingVal) && (array[readIt] != movingVal) && (writeIt > readIt) )
        {
            array[writeIt] = array[readIt];
            array[readIt] = movingVal;
            --writeIt;
        }
        --readIt;
    }
}


int main()
{
    std::vector<int> array{ 0, 1, 10, 20, 0, 0, 59, 63, 0, 88, 0 };

    std::cout << "Input array before moving:\n";
    for(const auto& el : array)
        std::cout << el << "  ";
    std::cout << '\n';

    moveAllValToLeft(array, 0);
    std::cout << "Input array after moving zeroes to left:\n";
    for(const auto& el : array)
        std::cout << el << "  ";
    std::cout << '\n';

    return 0;
}
