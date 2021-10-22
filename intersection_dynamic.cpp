#include <iostream>
using namespace std;
int main()
{
    cout << "Enter size of SET A\n";
    int n1;
    cin >> n1;

    cout << "Enter size of SET B\n";
    int n2;
    cin >> n2;

    int *setA = (int *)(malloc(n1 * sizeof(int)));
    int *setB = (int *)(malloc(n2 * sizeof(int)));

    cout << "Enter elements in SET A\n";

    for (int i = 0; i < n1; i++)
    {
        cin >> setA[i];
    }

    cout << "Enter elements in SET B\n";

    for (int j = 0; j < n2; j++)
    {
        cin >> setB[j];
    }

    if (n1 > n2)
    {
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                if (setB[i] == setA[j])
                {
                    cout << setB[i] << " ";
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                if (setA[i] == setB[j])
                {
                    cout << setA[i] << " ";
                }
            }
        }
    }

    return 0;
}