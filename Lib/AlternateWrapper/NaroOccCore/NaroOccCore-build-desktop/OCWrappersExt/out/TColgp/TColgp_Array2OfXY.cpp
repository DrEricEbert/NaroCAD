// File generated by CPPExt (CPP file)
//

#include "TColgp_Array2OfXY.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"


using namespace OCNaroWrappers;

OCTColgp_Array2OfXY::OCTColgp_Array2OfXY(TColgp_Array2OfXY* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColgp_Array2OfXY::OCTColgp_Array2OfXY(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColgp_Array2OfXY(R1, R2, C1, C2);
}

OCTColgp_Array2OfXY::OCTColgp_Array2OfXY(OCNaroWrappers::OCgp_XY^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColgp_Array2OfXY(*((gp_XY*)Item->Handle), R1, R2, C1, C2);
}

 void OCTColgp_Array2OfXY::Init(OCNaroWrappers::OCgp_XY^ V)
{
  ((TColgp_Array2OfXY*)nativeHandle)->Init(*((gp_XY*)V->Handle));
}

OCTColgp_Array2OfXY^ OCTColgp_Array2OfXY::Assign(OCNaroWrappers::OCTColgp_Array2OfXY^ Other)
{
  TColgp_Array2OfXY* tmp = new TColgp_Array2OfXY(0, 0, 0, 0);
  *tmp = ((TColgp_Array2OfXY*)nativeHandle)->Assign(*((TColgp_Array2OfXY*)Other->Handle));
  return gcnew OCTColgp_Array2OfXY(tmp);
}

 Standard_Integer OCTColgp_Array2OfXY::ColLength()
{
  return ((TColgp_Array2OfXY*)nativeHandle)->ColLength();
}

 Standard_Integer OCTColgp_Array2OfXY::RowLength()
{
  return ((TColgp_Array2OfXY*)nativeHandle)->RowLength();
}

 Standard_Integer OCTColgp_Array2OfXY::LowerCol()
{
  return ((TColgp_Array2OfXY*)nativeHandle)->LowerCol();
}

 Standard_Integer OCTColgp_Array2OfXY::LowerRow()
{
  return ((TColgp_Array2OfXY*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTColgp_Array2OfXY::UpperCol()
{
  return ((TColgp_Array2OfXY*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTColgp_Array2OfXY::UpperRow()
{
  return ((TColgp_Array2OfXY*)nativeHandle)->UpperRow();
}

 void OCTColgp_Array2OfXY::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_XY^ Value)
{
  ((TColgp_Array2OfXY*)nativeHandle)->SetValue(Row, Col, *((gp_XY*)Value->Handle));
}

OCgp_XY^ OCTColgp_Array2OfXY::Value(Standard_Integer Row, Standard_Integer Col)
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_Array2OfXY*)nativeHandle)->Value(Row, Col);
  return gcnew OCgp_XY(tmp);
}

OCgp_XY^ OCTColgp_Array2OfXY::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_Array2OfXY*)nativeHandle)->ChangeValue(Row, Col);
  return gcnew OCgp_XY(tmp);
}


