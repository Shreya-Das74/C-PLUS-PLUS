#include<iostream>
using namespace std;

class Item
{
	int item_no;
	float cost;
	
	public:
		void set_no(int no, float cost)
		{
			item_no = no;	
			this->cost = cost;
		}	
		void set_no()
		{
		}
		void show()
		{
			cout << "Item num = " << item_no << " cost = " << cost << endl;
		}
};

class Phone: public Item
{
	
};

int main()
{
	Item i1, i2, i3;
	
	i1.set_no(10, 120.67);

	i2.set_no(1, 12.67);	
	i1.show();
	i2.show();
		
	return 0;
}
