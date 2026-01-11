#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}}; // 3 rows, 2 columns

    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 2; j++) // Loop through columns
        {
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}


//Using Double Pointers

#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int **arr = new int *[m]; // Allocate memory for row pointers

    for (int i = 0; i < m; i++)
        arr[i] = new int[n]; // Allocate memory for each row

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = 10; 

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

    return 0;
}




//Using Array of Pointers

#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int *arr[m]; 

    for (int i = 0; i < m; i++)
        arr[i] = new int[n]; 

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = 10; 

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

    return 0;
}

//Using Array of Vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 3, n = 2;
    vector<int> arr[m]; 

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i].push_back(10); // Push values into the vector

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

    return 0;
}

//Using Vector of Vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m = 3, n = 2;
    vector<vector<int>> arr; 

    for (int i = 0; i < m; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
            row.push_back(10);
        arr.push_back(row); 
    }

    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";

    return 0;
}