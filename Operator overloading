#include<bits/stdc++.h>

using namespace std;

class Box
{
private:
    int l,b,h;

public:
    Box()
    {
        l=b=h=0;
    }
    Box(int length,int breadth, int height)
    {
        l=length;
        h=height;
        b=breadth;
    }
    Box(Box &daba)
    {
        l=daba.l;
        b=daba.b;
        h=daba.h;
    }

    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return l*b*h;
    }
    bool overload(Box para)
    {
        if (para.l<=l || para.b<=b || para.h<h)
            return true;
        else
            return false;

    }
    bool operator <(Box& d) {
         if(l < d.getLength()) {
            return true;
         }
        else
            return false;
      }

};


ostream& operator<<(ostream &s, Box &b11) 
{
    return s << b11.getLength() << " " << b11.getBreadth() <<" " <<b11.getHeight();
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
