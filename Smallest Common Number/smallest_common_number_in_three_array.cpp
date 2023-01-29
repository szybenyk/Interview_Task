/*
“Given three integer arrays sorted in ascending order, 
return the smallest number that is common in all three arrays. 
Return -1 if there is no common number.”
*/

#include <iostream>
#include <vector>


int findLeastCommonNumber(const std::vector<int>& arr1, const std::vector<int>& arr2, const std::vector<int>& arr3)
{
    std::vector<int>::size_type it1{ 0 }, it2{ 0 }, it3{ 0 };
    while(it1 < arr1.size() && it2 < arr2.size() && it3 < arr3.size())
    {
        if(arr1[it1] == arr2[it2] && arr2[it2] == arr3[it3])
            return arr1[it1];
        
        if(arr1[it1] < arr2[it2] && arr1[it1] < arr3[it3])
            ++it1;
        else if(arr2[it2] < arr1[it1] && arr2[it2] < arr3[it3])
            ++it2;
        else if(arr3[it3] < arr1[it1] && arr3[it3] < arr2[it2])
            ++it3;
    }
    
    return -1;
}


int main()
{
    std::vector<int> v1{6, 7, 10, 25, 30, 63, 64};
    std::vector<int> v2{0, 4, 5, 6, 7, 8, 50};
    std::vector<int> v3{1, 6, 10, 14};

    int res{ findLeastCommonNumber(v1, v2, v3) };
    if( res == -1 )
        std::cout << "There isn't smallest number that is common in all three arrays\n";
    else
        std::cout << res << " is the smallest number that is common for all three arrays\n";
    

    return 0;
}
