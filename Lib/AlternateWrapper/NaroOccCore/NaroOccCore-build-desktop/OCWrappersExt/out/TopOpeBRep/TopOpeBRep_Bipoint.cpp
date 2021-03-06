// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_Bipoint.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_Bipoint::OCTopOpeBRep_Bipoint(TopOpeBRep_Bipoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRep_Bipoint::OCTopOpeBRep_Bipoint() 
{
  nativeHandle = new TopOpeBRep_Bipoint();
}

OCTopOpeBRep_Bipoint::OCTopOpeBRep_Bipoint(Standard_Integer I1, Standard_Integer I2) 
{
  nativeHandle = new TopOpeBRep_Bipoint(I1, I2);
}

 Standard_Integer OCTopOpeBRep_Bipoint::I1()
{
  return ((TopOpeBRep_Bipoint*)nativeHandle)->I1();
}

 Standard_Integer OCTopOpeBRep_Bipoint::I2()
{
  return ((TopOpeBRep_Bipoint*)nativeHandle)->I2();
}


