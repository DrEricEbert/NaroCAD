// File generated by CPPExt (CPP file)
//

#include "StepGeom_HArray1OfCartesianPoint.h"
#include "../Converter.h"
#include "StepGeom_CartesianPoint.h"
#include "StepGeom_Array1OfCartesianPoint.h"


using namespace OCNaroWrappers;

OCStepGeom_HArray1OfCartesianPoint::OCStepGeom_HArray1OfCartesianPoint(Handle(StepGeom_HArray1OfCartesianPoint)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepGeom_HArray1OfCartesianPoint(*nativeHandle);
}

OCStepGeom_HArray1OfCartesianPoint::OCStepGeom_HArray1OfCartesianPoint(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepGeom_HArray1OfCartesianPoint(new StepGeom_HArray1OfCartesianPoint(Low, Up));
}

OCStepGeom_HArray1OfCartesianPoint::OCStepGeom_HArray1OfCartesianPoint(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepGeom_CartesianPoint^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepGeom_HArray1OfCartesianPoint(new StepGeom_HArray1OfCartesianPoint(Low, Up, *((StepGeom_CartesianPoint*)V->Handle)));
}

 void OCStepGeom_HArray1OfCartesianPoint::Init(OCNaroWrappers::OCStepGeom_CartesianPoint^ V)
{
  (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->Init(*((StepGeom_CartesianPoint*)V->Handle));
}

 Standard_Integer OCStepGeom_HArray1OfCartesianPoint::Length()
{
  return (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->Length();
}

 Standard_Integer OCStepGeom_HArray1OfCartesianPoint::Lower()
{
  return (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->Lower();
}

 Standard_Integer OCStepGeom_HArray1OfCartesianPoint::Upper()
{
  return (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->Upper();
}

 void OCStepGeom_HArray1OfCartesianPoint::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_CartesianPoint^ Value)
{
  (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->SetValue(Index, *((StepGeom_CartesianPoint*)Value->Handle));
}

OCStepGeom_CartesianPoint^ OCStepGeom_HArray1OfCartesianPoint::Value(Standard_Integer Index)
{
  StepGeom_CartesianPoint* tmp = new StepGeom_CartesianPoint();
  *tmp = (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->Value(Index);
  return gcnew OCStepGeom_CartesianPoint(tmp);
}

OCStepGeom_CartesianPoint^ OCStepGeom_HArray1OfCartesianPoint::ChangeValue(Standard_Integer Index)
{
  StepGeom_CartesianPoint* tmp = new StepGeom_CartesianPoint();
  *tmp = (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepGeom_CartesianPoint(tmp);
}

OCStepGeom_Array1OfCartesianPoint^ OCStepGeom_HArray1OfCartesianPoint::Array1()
{
  StepGeom_Array1OfCartesianPoint* tmp = new StepGeom_Array1OfCartesianPoint(0, 0);
  *tmp = (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->Array1();
  return gcnew OCStepGeom_Array1OfCartesianPoint(tmp);
}

OCStepGeom_Array1OfCartesianPoint^ OCStepGeom_HArray1OfCartesianPoint::ChangeArray1()
{
  StepGeom_Array1OfCartesianPoint* tmp = new StepGeom_Array1OfCartesianPoint(0, 0);
  *tmp = (*((Handle_StepGeom_HArray1OfCartesianPoint*)nativeHandle))->ChangeArray1();
  return gcnew OCStepGeom_Array1OfCartesianPoint(tmp);
}


