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

int main()
{
    int count;
    cout << "Enter the number of elements: ";
    cin >> count;
    if (count <= 0){
        cout << "Number of elements must be positive" << endl;
        return 1;
    }
    vector<int> numbers(count);
    cout << "Enter " << count << " numbers:" << endl;
    for (int i = 0; i < count; i++){
        cin >> numbers[i];
    }
    try{
        int maximum = findMax(numbers);
        cout << "Maximum: " << maximum << endl;
    } catch (const invalid_argument& e){
        cout << "Error: " << e.what() << endl;
        return 1;
    }
    return 0;
}
