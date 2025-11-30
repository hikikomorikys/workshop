#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>
using namespace std;
int findMax(const vector<int>& numbers)
{
    if (numbers.empty()){
        throw invalid_argument("List is empty");
    }
    int max = numbers[0];
    for (size_t i = 1; i < numbers.size(); i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}
int main(){
    vector<int> numbers = {1, 5, 3, 9, 2};
    cout << "Maximum: " << findMax(numbers) << endl;
    return 0;
}
