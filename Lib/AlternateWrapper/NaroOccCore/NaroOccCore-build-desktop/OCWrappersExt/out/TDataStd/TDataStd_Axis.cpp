// File generated by CPPExt (CPP file)
//

#include "TDataStd_Axis.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../gp/gp_Lin.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_Axis::OCTDataStd_Axis(Handle(TDataStd_Axis)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_Axis(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_Axis::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_Axis::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_Axis^ OCTDataStd_Axis::Set(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_Axis) tmp = TDataStd_Axis::Set(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_Axis(&tmp);
}

OCTDataStd_Axis^ OCTDataStd_Axis::Set(OCNaroWrappers::OCTDF_Label^ label, OCNaroWrappers::OCgp_Lin^ L)
{
  Handle(TDataStd_Axis) tmp = TDataStd_Axis::Set(*((TDF_Label*)label->Handle), *((gp_Lin*)L->Handle));
  return gcnew OCTDataStd_Axis(&tmp);
}

OCTDataStd_Axis::OCTDataStd_Axis() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_Axis(new TDataStd_Axis());
}

OCStandard_GUID^ OCTDataStd_Axis::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_Axis*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_Axis::Restore(OCNaroWrappers::OCTDF_Attribute^ with)
{
  (*((Handle_TDataStd_Axis*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)with->Handle));
}

OCTDF_Attribute^ OCTDataStd_Axis::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_Axis*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_Axis::Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_Axis*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_Axis::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_Axis*)nativeHandle))->Dump(anOS);
}

