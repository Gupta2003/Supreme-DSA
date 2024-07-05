#include <iostream>
#include <vector>
using namespace std;
int rotating_array(vector<int> v, int n, int rotate_by)
{
    // making new vector and copying values
    vector<int> v1;
    int size = v.size();
    for (int i = 0; i < rotate_by; i++)
    {
        int element;
        element = v[n - rotate_by + i];
        v1.push_back(element);
    }
    // shifting the elements
    for (int i = size - 1; i >= rotate_by; i--)
    {
        // v.insert(v.begin() + i + rotate_by, v[i]);
        v[i] = v[i - rotate_by];
    }
    // copying the values
    // we can also take the rotate by as limit of for loop because hame utni time chalana h jitne element h or element utne hi h v1 me jitne times rotate krna hai
    for (int i = 0; i < v1.size(); i++)
    {
        v[i] = v1[i];
    }
    // printing the vector
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int rotate_by, n;
    cout << "Enter the no of elements : " << endl;
    cin >> n;
    cout << "Enter the no of rotations : " << endl;
    cin >> rotate_by;
    cout << "Enter the values of vector : " << endl;
    // initializing the vector
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int item;
        cin >> item;
        v.push_back(item);
    }
    // handling the edge case if the rotation size is greater than the original vector size
    if (rotate_by > v.size())
    {
        rotate_by = rotate_by % v.size();
    }
    rotating_array(v, n, rotate_by);
    return 0;
}