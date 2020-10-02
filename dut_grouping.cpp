#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <initializer_list>
#include <vector>   //陣列
using namespace std;

class std_value{
public:
    int id;
    int dut;
    int pad;
    float cx;
    float cy;
};

struct dut
{
    int dut_num;
    float max_x;
    float max_y;
    float min_x;
    float min_y;
};

vector<string> _csv(string s);
vector<std_value> Std_Values; //store all the standard value
unordered_map<int, dut> dutmap;//value map organized by dut 

void readfile();
void dut_grouping( );
void generate_arr(struct dut *x, struct dut *y);

int main()
{
   
    
    readfile();
    dut_grouping();

    int dut_size = dutmap.size();
    //dynamically to fit different probe card value
    struct dut * xarr = new struct dut [dut_size];
    struct dut * yarr = new struct dut [dut_size];
    
    generate_arr(xarr, yarr);

    delete [] xarr;
    delete [] yarr;
    
}

vector<string> _csv(string s)
{
    vector<string> arr;
    istringstream delim(s);
    string token;
    int c = 0;
    while (getline(delim, token, ','))        
    {
        arr.push_back(token);                
        c++;                                           
    }
    return  arr;
}

void readfile()
{
    
    ifstream inFile("std_csv.csv", ios::in);
    if (!inFile)
    {
        cout << "開啟檔案失敗！" << endl;
        exit(1);
    }   

    int count=0;
    string line;  
    while (getline(inFile, line))
    {
        //cout << "org=" << line << endl;   
        //========================
        vector<string> a = _csv(line);
        std_value temp;
        if(count != 0){    
            temp.id = stoi(a[0]);
            temp.dut = stoi(a[1]);
            temp.pad = stoi(a[2]);
            temp.cx = stof(a[3]);
            temp.cy = stof(a[4]);
            Std_Values.push_back(temp);
        }
        ++count;
        //========================
    }
    inFile.close();
    cout<<"read file complete!"<<endl;
} 

void dut_grouping()
{
    //check all data 
    for (int i = 0; i < Std_Values.size(); i++)
    {
        //check if dut_number is present in map
        if(dutmap.count(Std_Values[i].dut)>0)
        //yes then compare the two min/max
        {
            // edit if bigger than max or smaller than min 
            unordered_map<int, dut>::const_iterator mapval = dutmap.find(Std_Values[i].dut);
            if(dutmap.at(Std_Values[i].dut).max_x < Std_Values[i].cx) //max_x
                dutmap.at(Std_Values[i].dut).max_x = Std_Values[i].cx;
            if(dutmap.at(Std_Values[i].dut).max_y < Std_Values[i].cy) //max_y
                dutmap.at(Std_Values[i].dut).max_y = Std_Values[i].cy;
            if(dutmap.at(Std_Values[i].dut).min_x > Std_Values[i].cx) //min_x
                dutmap.at(Std_Values[i].dut).min_x = Std_Values[i].cx;
            if(dutmap.at(Std_Values[i].dut).min_y > Std_Values[i].cy) //min_y
                dutmap.at(Std_Values[i].dut).min_y = Std_Values[i].cy;
        }
        //no then create new one with init x,y value with its value
        else
        {
            dutmap.insert
            (
                {
                    Std_Values[i].dut,
                    {
                        Std_Values[i].dut,// int
                        Std_Values[i].cx,// float max_x;
                        Std_Values[i].cy,// float max_y;
                        Std_Values[i].cx,// float min_x;
                        Std_Values[i].cy,// float min_y;
                    }
                }
            );
        }
        

    }
    
} 

bool xcmp(struct dut& a, struct dut& b)
{
    return a.max_x < b.max_x;
}
bool ycmp(struct dut& a, struct dut& b)
{
    return a.max_y < b.max_y;
}

//use double linked list to insert, then output the arrays needed
void generate_arr(struct dut *x, struct dut *y)//x: xarr y: yarr
{
    //work first, put it all into list then sort them
    for (auto i = dutmap.begin(); i != dutmap.end(); ++i)
    {
        for (int j = 0; j< x.length(); j++)
    }
    
}