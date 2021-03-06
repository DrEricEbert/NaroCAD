// File generated by CPPExt (CPP file)
//

#include "GeomPlate_HArray1OfSequenceOfReal.h"
#include "../Converter.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "GeomPlate_Array1OfSequenceOfReal.h"


using namespace OCNaroWrappers;

OCGeomPlate_HArray1OfSequenceOfReal::OCGeomPlate_HArray1OfSequenceOfReal(Handle(GeomPlate_HArray1OfSequenceOfReal)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GeomPlate_HArray1OfSequenceOfReal(*nativeHandle);
}

OCGeomPlate_HArray1OfSequenceOfReal::OCGeomPlate_HArray1OfSequenceOfReal(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomPlate_HArray1OfSequenceOfReal(new GeomPlate_HArray1OfSequenceOfReal(Low, Up));
}

OCGeomPlate_HArray1OfSequenceOfReal::OCGeomPlate_HArray1OfSequenceOfReal(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCTColStd_SequenceOfReal^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomPlate_HArray1OfSequenceOfReal(new GeomPlate_HArray1OfSequenceOfReal(Low, Up, *((TColStd_SequenceOfReal*)V->Handle)));
}

 void OCGeomPlate_HArray1OfSequenceOfReal::Init(OCNaroWrappers::OCTColStd_SequenceOfReal^ V)
{
  (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->Init(*((TColStd_SequenceOfReal*)V->Handle));
}

 Standard_Integer OCGeomPlate_HArray1OfSequenceOfReal::Length()
{
  return (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->Length();
}

 Standard_Integer OCGeomPlate_HArray1OfSequenceOfReal::Lower()
{
  return (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->Lower();
}

 Standard_Integer OCGeomPlate_HArray1OfSequenceOfReal::Upper()
{
  return (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->Upper();
}

 void OCGeomPlate_HArray1OfSequenceOfReal::SetValue(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfReal^ Value)
{
  (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->SetValue(Index, *((TColStd_SequenceOfReal*)Value->Handle));
}

OCTColStd_SequenceOfReal^ OCGeomPlate_HArray1OfSequenceOfReal::Value(Standard_Integer Index)
{
  TColStd_SequenceOfReal* tmp = new TColStd_SequenceOfReal();
  *tmp = (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->Value(Index);
  return gcnew OCTColStd_SequenceOfReal(tmp);
}

OCTColStd_SequenceOfReal^ OCGeomPlate_HArray1OfSequenceOfReal::ChangeValue(Standard_Integer Index)
{
  TColStd_SequenceOfReal* tmp = new TColStd_SequenceOfReal();
  *tmp = (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->ChangeValue(Index);
  return gcnew OCTColStd_SequenceOfReal(tmp);
}

OCGeomPlate_Array1OfSequenceOfReal^ OCGeomPlate_HArray1OfSequenceOfReal::Array1()
{
  GeomPlate_Array1OfSequenceOfReal* tmp = new GeomPlate_Array1OfSequenceOfReal(0, 0);
  *tmp = (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->Array1();
  return gcnew OCGeomPlate_Array1OfSequenceOfReal(tmp);
}

OCGeomPlate_Array1OfSequenceOfReal^ OCGeomPlate_HArray1OfSequenceOfReal::ChangeArray1()
{
  GeomPlate_Array1OfSequenceOfReal* tmp = new GeomPlate_Array1OfSequenceOfReal(0, 0);
  *tmp = (*((Handle_GeomPlate_HArray1OfSequenceOfReal*)nativeHandle))->ChangeArray1();
  return gcnew OCGeomPlate_Array1OfSequenceOfReal(tmp);
}


