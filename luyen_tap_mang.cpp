#include <iostream>

using namespace std;

int main()
{
    int number[4] = {8, 8, 8, 8};
    int max_number = number[0];
    
    for (int i = 0; i < 4 ; i++)
    {
        if(number[i] > max_number)
        {
            max_number = number[i];
        }

    }
    cout << "so luong nhat la: " << max_number << endl;
    int second_max = 0;
    bool kiem_tra = false;
    for (int i = 0; i < 4; i++)
    {
        if(number[i] < max_number)
        {
            
        
            if(kiem_tra == false || number[i] > second_max)
            {
                second_max = number[i];
                kiem_tra = true;
            }
    }   }
    if (kiem_tra == true)
    {
        cout << "so lon nhat thu 2 la: " << second_max << endl;
    }
    else
    {
        cout << "khong ton tai so lon thu 2 phan biet!!!" << endl;
    }
    
    
  
  
    return 0;
}