// File generated by CPPExt (CPP file)
//

#include "StepData_Protocol.h"
#include "../Converter.h"
#include "../Dico/Dico_DictionaryOfTransient.h"
#include "../Interface/Interface_Protocol.h"
#include "../Standard/Standard_Transient.h"
#include "../Standard/Standard_Type.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "StepData_EDescr.h"
#include "StepData_ESDescr.h"
#include "StepData_ECDescr.h"
#include "../TColStd/TColStd_SequenceOfAsciiString.h"
#include "StepData_PDescr.h"


using namespace OCNaroWrappers;

OCStepData_Protocol::OCStepData_Protocol(Handle(StepData_Protocol)* nativeHandle) : OCInterface_Protocol((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepData_Protocol(*nativeHandle);
}

OCStepData_Protocol::OCStepData_Protocol() : OCInterface_Protocol((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepData_Protocol(new StepData_Protocol());
}

 Standard_Integer OCStepData_Protocol::NbResources()
{
  return (*((Handle_StepData_Protocol*)nativeHandle))->NbResources();
}

OCInterface_Protocol^ OCStepData_Protocol::Resource(Standard_Integer num)
{
  Handle(Interface_Protocol) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->Resource(num);
  return gcnew OCInterface_Protocol(&tmp);
}

 Standard_Integer OCStepData_Protocol::CaseNumber(OCNaroWrappers::OCStandard_Transient^ obj)
{
  return (*((Handle_StepData_Protocol*)nativeHandle))->CaseNumber(*((Handle_Standard_Transient*)obj->Handle));
}

 Standard_Integer OCStepData_Protocol::TypeNumber(OCNaroWrappers::OCStandard_Type^ atype)
{
  return (*((Handle_StepData_Protocol*)nativeHandle))->TypeNumber(*((Handle_Standard_Type*)atype->Handle));
}

 System::String^ OCStepData_Protocol::SchemaName()
{
  return OCConverter::StandardCStringToString((*((Handle_StepData_Protocol*)nativeHandle))->SchemaName());
}

OCInterface_InterfaceModel^ OCStepData_Protocol::NewModel()
{
  Handle(Interface_InterfaceModel) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->NewModel();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

 System::Boolean OCStepData_Protocol::IsSuitableModel(OCNaroWrappers::OCInterface_InterfaceModel^ model)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepData_Protocol*)nativeHandle))->IsSuitableModel(*((Handle_Interface_InterfaceModel*)model->Handle)));
}

OCStandard_Transient^ OCStepData_Protocol::UnknownEntity()
{
  Handle(Standard_Transient) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->UnknownEntity();
  return gcnew OCStandard_Transient(&tmp);
}

 System::Boolean OCStepData_Protocol::IsUnknownEntity(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepData_Protocol*)nativeHandle))->IsUnknownEntity(*((Handle_Standard_Transient*)ent->Handle)));
}

 Standard_Integer OCStepData_Protocol::DescrNumber(OCNaroWrappers::OCStepData_EDescr^ adescr)
{
  return (*((Handle_StepData_Protocol*)nativeHandle))->DescrNumber(*((Handle_StepData_EDescr*)adescr->Handle));
}

 void OCStepData_Protocol::AddDescr(OCNaroWrappers::OCStepData_EDescr^ adescr, Standard_Integer CN)
{
  (*((Handle_StepData_Protocol*)nativeHandle))->AddDescr(*((Handle_StepData_EDescr*)adescr->Handle), CN);
}

 System::Boolean OCStepData_Protocol::HasDescr()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepData_Protocol*)nativeHandle))->HasDescr());
}

OCStepData_EDescr^ OCStepData_Protocol::Descr(Standard_Integer num)
{
  Handle(StepData_EDescr) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->Descr(num);
  return gcnew OCStepData_EDescr(&tmp);
}

OCStepData_EDescr^ OCStepData_Protocol::Descr(System::String^ name, System::Boolean anylevel)
{
  Handle(StepData_EDescr) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->Descr(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(anylevel));
  return gcnew OCStepData_EDescr(&tmp);
}

OCStepData_ESDescr^ OCStepData_Protocol::ESDescr(System::String^ name, System::Boolean anylevel)
{
  Handle(StepData_ESDescr) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->ESDescr(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(anylevel));
  return gcnew OCStepData_ESDescr(&tmp);
}

OCStepData_ECDescr^ OCStepData_Protocol::ECDescr(OCNaroWrappers::OCTColStd_SequenceOfAsciiString^ names, System::Boolean anylevel)
{
  Handle(StepData_ECDescr) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->ECDescr(*((TColStd_SequenceOfAsciiString*)names->Handle), OCConverter::BooleanToStandardBoolean(anylevel));
  return gcnew OCStepData_ECDescr(&tmp);
}

 void OCStepData_Protocol::AddPDescr(OCNaroWrappers::OCStepData_PDescr^ pdescr)
{
  (*((Handle_StepData_Protocol*)nativeHandle))->AddPDescr(*((Handle_StepData_PDescr*)pdescr->Handle));
}

OCStepData_PDescr^ OCStepData_Protocol::PDescr(System::String^ name, System::Boolean anylevel)
{
  Handle(StepData_PDescr) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->PDescr(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(anylevel));
  return gcnew OCStepData_PDescr(&tmp);
}

 void OCStepData_Protocol::AddBasicDescr(OCNaroWrappers::OCStepData_ESDescr^ esdescr)
{
  (*((Handle_StepData_Protocol*)nativeHandle))->AddBasicDescr(*((Handle_StepData_ESDescr*)esdescr->Handle));
}

OCStepData_EDescr^ OCStepData_Protocol::BasicDescr(System::String^ name, System::Boolean anylevel)
{
  Handle(StepData_EDescr) tmp = (*((Handle_StepData_Protocol*)nativeHandle))->BasicDescr(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(anylevel));
  return gcnew OCStepData_EDescr(&tmp);
}


