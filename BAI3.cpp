#include<iostream>
using namespace std;
int main()
{
  int n;
  do
  {
    cout<<"\nNhap vao day so: ";
    cin>>n;
    if (n <= 0)
    {
      cout<<"\nSo n phai >= 0, vui long nhap lai! ";
    }
  } while (n <= 0);
  bool CheckTangDan = true;
  int themang = n;
  int ChuSoCuoi = themang % 10;
  themang /= 10;
  while(themang != 0)
  {
    int ChuSoKeCuoi = themang % 10;
    themang /= 10;
    if (ChuSoCuoi < ChuSoKeCuoi)
    {
      CheckTangDan = false;
      break;
    }
    else
    {
      ChuSoCuoi = ChuSoKeCuoi;
    }
  }
  if(CheckTangDan)
    cout<<"\nDung !";
  else
    cout<<"Sai !";
 
}
