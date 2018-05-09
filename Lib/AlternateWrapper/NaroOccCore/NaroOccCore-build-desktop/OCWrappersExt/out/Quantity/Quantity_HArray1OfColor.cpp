// File generated by CPPExt (CPP file)
//

#include "Quantity_HArray1OfColor.h"
#include "../Converter.h"
#include "Quantity_Color.h"
#include "Quantity_Array1OfColor.h"


using namespace OCNaroWrappers;

OCQuantity_HArray1OfColor::OCQuantity_HArray1OfColor(Handle(Quantity_HArray1OfColor)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Quantity_HArray1OfColor(*nativeHandle);
}

OCQuantity_HArray1OfColor::OCQuantity_HArray1OfColor(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Quantity_HArray1OfColor(new Quantity_HArray1OfColor(Low, Up));
}

OCQuantity_HArray1OfColor::OCQuantity_HArray1OfColor(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCQuantity_Color^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Quantity_HArray1OfColor(new Quantity_HArray1OfColor(Low, Up, *((Quantity_Color*)V->Handle)));
}

 void OCQuantity_HArray1OfColor::Init(OCNaroWrappers::OCQuantity_Color^ V)
{
  (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->Init(*((Quantity_Color*)V->Handle));
}

 Standard_Integer OCQuantity_HArray1OfColor::Length()
{
  return (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->Length();
}

 Standard_Integer OCQuantity_HArray1OfColor::Lower()
{
  return (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->Lower();
}

 Standard_Integer OCQuantity_HArray1OfColor::Upper()
{
  return (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->Upper();
}

 void OCQuantity_HArray1OfColor::SetValue(Standard_Integer Index, OCNaroWrappers::OCQuantity_Color^ Value)
{
  (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->SetValue(Index, *((Quantity_Color*)Value->Handle));
}

OCQuantity_Color^ OCQuantity_HArray1OfColor::Value(Standard_Integer Index)
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->Value(Index);
  return gcnew OCQuantity_Color(tmp);
}

OCQuantity_Color^ OCQuantity_HArray1OfColor::ChangeValue(Standard_Integer Index)
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->ChangeValue(Index);
  return gcnew OCQuantity_Color(tmp);
}

OCQuantity_Array1OfColor^ OCQuantity_HArray1OfColor::Array1()
{
  Quantity_Array1OfColor* tmp = new Quantity_Array1OfColor(0, 0);
  *tmp = (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->Array1();
  return gcnew OCQuantity_Array1OfColor(tmp);
}

OCQuantity_Array1OfColor^ OCQuantity_HArray1OfColor::ChangeArray1()
{
  Quantity_Array1OfColor* tmp = new Quantity_Array1OfColor(0, 0);
  *tmp = (*((Handle_Quantity_HArray1OfColor*)nativeHandle))->ChangeArray1();
  return gcnew OCQuantity_Array1OfColor(tmp);
}

