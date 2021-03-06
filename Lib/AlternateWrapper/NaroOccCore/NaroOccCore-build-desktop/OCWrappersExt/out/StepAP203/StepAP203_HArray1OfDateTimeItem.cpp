// File generated by CPPExt (CPP file)
//

#include "StepAP203_HArray1OfDateTimeItem.h"
#include "../Converter.h"
#include "StepAP203_DateTimeItem.h"
#include "StepAP203_Array1OfDateTimeItem.h"


using namespace OCNaroWrappers;

OCStepAP203_HArray1OfDateTimeItem::OCStepAP203_HArray1OfDateTimeItem(Handle(StepAP203_HArray1OfDateTimeItem)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP203_HArray1OfDateTimeItem(*nativeHandle);
}

OCStepAP203_HArray1OfDateTimeItem::OCStepAP203_HArray1OfDateTimeItem(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_HArray1OfDateTimeItem(new StepAP203_HArray1OfDateTimeItem(Low, Up));
}

OCStepAP203_HArray1OfDateTimeItem::OCStepAP203_HArray1OfDateTimeItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP203_DateTimeItem^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP203_HArray1OfDateTimeItem(new StepAP203_HArray1OfDateTimeItem(Low, Up, *((StepAP203_DateTimeItem*)V->Handle)));
}

 void OCStepAP203_HArray1OfDateTimeItem::Init(OCNaroWrappers::OCStepAP203_DateTimeItem^ V)
{
  (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->Init(*((StepAP203_DateTimeItem*)V->Handle));
}

 Standard_Integer OCStepAP203_HArray1OfDateTimeItem::Length()
{
  return (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->Length();
}

 Standard_Integer OCStepAP203_HArray1OfDateTimeItem::Lower()
{
  return (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->Lower();
}

 Standard_Integer OCStepAP203_HArray1OfDateTimeItem::Upper()
{
  return (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->Upper();
}

 void OCStepAP203_HArray1OfDateTimeItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP203_DateTimeItem^ Value)
{
  (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->SetValue(Index, *((StepAP203_DateTimeItem*)Value->Handle));
}

OCStepAP203_DateTimeItem^ OCStepAP203_HArray1OfDateTimeItem::Value(Standard_Integer Index)
{
  StepAP203_DateTimeItem* tmp = new StepAP203_DateTimeItem();
  *tmp = (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->Value(Index);
  return gcnew OCStepAP203_DateTimeItem(tmp);
}

OCStepAP203_DateTimeItem^ OCStepAP203_HArray1OfDateTimeItem::ChangeValue(Standard_Integer Index)
{
  StepAP203_DateTimeItem* tmp = new StepAP203_DateTimeItem();
  *tmp = (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStepAP203_DateTimeItem(tmp);
}

OCStepAP203_Array1OfDateTimeItem^ OCStepAP203_HArray1OfDateTimeItem::Array1()
{
  StepAP203_Array1OfDateTimeItem* tmp = new StepAP203_Array1OfDateTimeItem(0, 0);
  *tmp = (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->Array1();
  return gcnew OCStepAP203_Array1OfDateTimeItem(tmp);
}

OCStepAP203_Array1OfDateTimeItem^ OCStepAP203_HArray1OfDateTimeItem::ChangeArray1()
{
  StepAP203_Array1OfDateTimeItem* tmp = new StepAP203_Array1OfDateTimeItem(0, 0);
  *tmp = (*((Handle_StepAP203_HArray1OfDateTimeItem*)nativeHandle))->ChangeArray1();
  return gcnew OCStepAP203_Array1OfDateTimeItem(tmp);
}


