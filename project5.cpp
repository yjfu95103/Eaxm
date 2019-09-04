#include <iostream>
#include <vector> 

using namespace std;
 
int main()
{
	int array_a[] = {77,5,5,22,13,55,97,4,796,1,0,9};
    int array_b[] = {0,1,2,3,4,5,6,7,8,9};
    int size1 = sizeof(array_a) / sizeof(array_a[0]);
    int size2 = sizeof(array_b) / sizeof(array_b[0]);
    int end = size1;
    vector <int> array_c,array_d,array_e;
    bool swap = false; //標示情況 
 
    for(int i=0; i<end;)
    {
        swap = false;
        for(int j=i; j<size2; j++)
        {
            if(array_a[i] == array_b[j])
            {
                int tmp = array_b[i];
                array_b[i] = array_b[j];
                array_b[j] = tmp;
                swap = true;
                break;       
            }
        }
        if(swap != true)
        {
            int tmp = array_a[i];
            array_a[i] = array_a[--end];
            array_a[end] = tmp;
        }
        else
       		i++;
    }     
    
    //交集
    for(int i=0; i<end; i++)
    {
		array_c.push_back(array_a[i]);
    }

    cout<<"a 交集 b => ";
    for(int i=0; i<end; i++)
    {
		cout<<array_c[i]<<" ";
    }
    cout<<endl;
 
	//差集
    for(int i=end; i<size1; i++)
    {
		array_d.push_back(array_a[i]);
    }
    int size3= sizeof(array_d) / sizeof(array_d[0]);
    
    cout<<"a 差集 b => ";
    for(int i=0; i<size3; i++)
    {
		cout<<array_d[i]<<" ";
	
    }
    cout<<endl;
     
    
     //聯集
    for(int i=0 ; i<end; i++)
    {
		array_e.push_back(array_a[i]);
    }
    for(int i=end; i<size1; i++)
    {
		array_e.push_back(array_a[i]);
    }
	for(int i=end; i<size2; i++)
    {
		array_e.push_back(array_a[i]);
    }
    
    int size4;
    if(size1>size2)
    	size4 = end+size1;
    else
    	size4 = end+size2;
    
    cout<<"a 聯集 b => ";
    for(int i=0 ; i<size4; i++)
    {
		cout<<array_e[i]<<" ";
    }
    cout<<endl;
     
    return 0;
 
}
