#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <char> vowels (5);
    vector <int> score (120);

    score[0] = 100;
    score.push_back(1000);
    score.push_back(120);
    
    printf("%d\n",score.at(0));
    printf("%d", score.size());
    printf("%d", score.at(120));

    printf("The Vectos has %d elements.\n", score.size());
    int i;

    for(i = 0; i < score.size(); i++)
    {
        printf("Index: %d, element: %d\n", i, score.at(i));
    }

    vector <vector<int>> twodarray {
    {0, 1, 2, 4},
    {3, 4, 5, 4}, 
    {6, 7, 8, 4}
    };

    int j;
    int p;

    for(j = 0; j < twodarray.size(); j++)
    {
        for(p = 0; p < twodarray.at(j).size(); p++)
        {
            printf("Index y: %d, Index x %d, element: %d\n", j, p, twodarray.at(j).at(p));
        }
    }
}