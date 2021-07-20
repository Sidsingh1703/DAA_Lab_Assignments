
  
# include <iostream>
using namespace std;

void linear_Search(int n, int inputArray[], int key)
{
    int flag = 0, total_Comparisons = 0;
    for(int i = 0; i < n; i++)
    {
        if(inputArray[i] == key)
        {
            flag = 1;
            total_Comparisons++;
            break;
        }
        
        else
        total_Comparisons++;
    }
    
    if(flag == 1)
    cout<<"Present"<<" "<<total_Comparisons<<"\n";
    
    else
    cout<<"Not Present"<<" "<<total_Comparisons<<"\n";
}

int main()
{
    int T, n, key;
    cin>>T;
    for(int i = 1; i <= T; i++)
    {
        cin>>n;
        int inputArray[n];
        for(int j = 0; j < n; j++)
        cin>>inputArray[j];
        cin>>key;
        linear_Search(n,inputArray,key);
    }
    return 0;
}

