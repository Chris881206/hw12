#include <iostream>
using namespace std;

int main()
{
	int x=5;
	cout<<endl;
    cout<<"�ˤT����"<<endl;
    for(int i=1;i<=x;i++){
        for(int y=1;y<i;y++){
            cout<<" ";
        }

        for(int y=x;y>=i;y--){
            cout<<"*";
        }

        cout<<endl;
    }
    system("pause");
    return 0;
	
}
