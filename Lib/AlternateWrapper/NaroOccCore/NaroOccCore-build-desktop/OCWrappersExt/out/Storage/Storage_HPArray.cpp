// File generated by CPPExt (CPP file)
//

#include "Storage_HPArray.h"
#include "../Converter.h"
#include "../Standard/Standard_Persistent.h"
#include "Storage_PArray.h"


using namespace OCNaroWrappers;

OCStorage_HPArray::OCStorage_HPArray(Handle(Storage_HPArray)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Storage_HPArray(*nativeHandle);
}

OCStorage_HPArray::OCStorage_HPArray(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Storage_HPArray(new Storage_HPArray(Low, Up));
}

OCStorage_HPArray::OCStorage_HPArray(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStandard_Persistent^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Storage_HPArray(new Storage_HPArray(Low, Up, *((Handle_Standard_Persistent*)V->Handle)));
}

 void OCStorage_HPArray::Init(OCNaroWrappers::OCStandard_Persistent^ V)
{
  (*((Handle_Storage_HPArray*)nativeHandle))->Init(*((Handle_Standard_Persistent*)V->Handle));
}

 Standard_Integer OCStorage_HPArray::Length()
{
  return (*((Handle_Storage_HPArray*)nativeHandle))->Length();
}

 Standard_Integer OCStorage_HPArray::Lower()
{
  return (*((Handle_Storage_HPArray*)nativeHandle))->Lower();
}

 Standard_Integer OCStorage_HPArray::Upper()
{
  return (*((Handle_Storage_HPArray*)nativeHandle))->Upper();
}

 void OCStorage_HPArray::SetValue(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ Value)
{
  (*((Handle_Storage_HPArray*)nativeHandle))->SetValue(Index, *((Handle_Standard_Persistent*)Value->Handle));
}

OCStandard_Persistent^ OCStorage_HPArray::Value(Standard_Integer Index)
{
  Handle(Standard_Persistent) tmp = (*((Handle_Storage_HPArray*)nativeHandle))->Value(Index);
  return gcnew OCStandard_Persistent(&tmp);
}

OCStandard_Persistent^ OCStorage_HPArray::ChangeValue(Standard_Integer Index)
{
  Handle(Standard_Persistent) tmp = (*((Handle_Storage_HPArray*)nativeHandle))->ChangeValue(Index);
  return gcnew OCStandard_Persistent(&tmp);
}

OCStorage_PArray^ OCStorage_HPArray::Array1()
{
  Storage_PArray* tmp = new Storage_PArray(0, 0);
  *tmp = (*((Handle_Storage_HPArray*)nativeHandle))->Array1();
  return gcnew OCStorage_PArray(tmp);
}

OCStorage_PArray^ OCStorage_HPArray::ChangeArray1()
{
  Storage_PArray* tmp = new Storage_PArray(0, 0);
  *tmp = (*((Handle_Storage_HPArray*)nativeHandle))->ChangeArray1();
  return gcnew OCStorage_PArray(tmp);
}


