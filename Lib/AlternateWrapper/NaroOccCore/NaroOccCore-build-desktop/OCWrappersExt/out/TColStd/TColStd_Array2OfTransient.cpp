// File generated by CPPExt (CPP file)
//

#include "TColStd_Array2OfTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"


using namespace OCNaroWrappers;

OCTColStd_Array2OfTransient::OCTColStd_Array2OfTransient(TColStd_Array2OfTransient* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_Array2OfTransient::OCTColStd_Array2OfTransient(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColStd_Array2OfTransient(R1, R2, C1, C2);
}

OCTColStd_Array2OfTransient::OCTColStd_Array2OfTransient(OCNaroWrappers::OCStandard_Transient^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColStd_Array2OfTransient(*((Handle_Standard_Transient*)Item->Handle), R1, R2, C1, C2);
}

 void OCTColStd_Array2OfTransient::Init(OCNaroWrappers::OCStandard_Transient^ V)
{
  ((TColStd_Array2OfTransient*)nativeHandle)->Init(*((Handle_Standard_Transient*)V->Handle));
}

OCTColStd_Array2OfTransient^ OCTColStd_Array2OfTransient::Assign(OCNaroWrappers::OCTColStd_Array2OfTransient^ Other)
{
  TColStd_Array2OfTransient* tmp = new TColStd_Array2OfTransient(0, 0, 0, 0);
  *tmp = ((TColStd_Array2OfTransient*)nativeHandle)->Assign(*((TColStd_Array2OfTransient*)Other->Handle));
  return gcnew OCTColStd_Array2OfTransient(tmp);
}

 Standard_Integer OCTColStd_Array2OfTransient::ColLength()
{
  return ((TColStd_Array2OfTransient*)nativeHandle)->ColLength();
}

 Standard_Integer OCTColStd_Array2OfTransient::RowLength()
{
  return ((TColStd_Array2OfTransient*)nativeHandle)->RowLength();
}

 Standard_Integer OCTColStd_Array2OfTransient::LowerCol()
{
  return ((TColStd_Array2OfTransient*)nativeHandle)->LowerCol();
}

 Standard_Integer OCTColStd_Array2OfTransient::LowerRow()
{
  return ((TColStd_Array2OfTransient*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTColStd_Array2OfTransient::UpperCol()
{
  return ((TColStd_Array2OfTransient*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTColStd_Array2OfTransient::UpperRow()
{
  return ((TColStd_Array2OfTransient*)nativeHandle)->UpperRow();
}

 void OCTColStd_Array2OfTransient::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCStandard_Transient^ Value)
{
  ((TColStd_Array2OfTransient*)nativeHandle)->SetValue(Row, Col, *((Handle_Standard_Transient*)Value->Handle));
}

OCStandard_Transient^ OCTColStd_Array2OfTransient::Value(Standard_Integer Row, Standard_Integer Col)
{
  Handle(Standard_Transient) tmp = ((TColStd_Array2OfTransient*)nativeHandle)->Value(Row, Col);
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCTColStd_Array2OfTransient::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  Handle(Standard_Transient) tmp = ((TColStd_Array2OfTransient*)nativeHandle)->ChangeValue(Row, Col);
  return gcnew OCStandard_Transient(&tmp);
}


