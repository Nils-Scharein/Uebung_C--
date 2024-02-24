#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int i;
    for(i = 0; i < 10; i++)
        printf("Test Nummer: %d\n", i);

    vector <int> nums {10, 20, 30, 40, 50};
    for(int k = 0; k < nums.size(); k++)
        printf("%d\n", nums[k]);
}