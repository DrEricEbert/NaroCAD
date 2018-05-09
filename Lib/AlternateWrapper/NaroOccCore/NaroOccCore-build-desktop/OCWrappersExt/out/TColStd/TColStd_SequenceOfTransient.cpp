// File generated by CPPExt (CPP file)
//

#include "TColStd_SequenceOfTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "TColStd_SequenceNodeOfSequenceOfTransient.h"


using namespace OCNaroWrappers;

OCTColStd_SequenceOfTransient::OCTColStd_SequenceOfTransient(TColStd_SequenceOfTransient* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_SequenceOfTransient::OCTColStd_SequenceOfTransient() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_SequenceOfTransient();
}

OCTColStd_SequenceOfTransient^ OCTColStd_SequenceOfTransient::Assign(OCNaroWrappers::OCTColStd_SequenceOfTransient^ Other)
{
  TColStd_SequenceOfTransient* tmp = new TColStd_SequenceOfTransient();
  *tmp = ((TColStd_SequenceOfTransient*)nativeHandle)->Assign(*((TColStd_SequenceOfTransient*)Other->Handle));
  return gcnew OCTColStd_SequenceOfTransient(tmp);
}

 void OCTColStd_SequenceOfTransient::Append(OCNaroWrappers::OCStandard_Transient^ T)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->Append(*((Handle_Standard_Transient*)T->Handle));
}

 void OCTColStd_SequenceOfTransient::Append(OCNaroWrappers::OCTColStd_SequenceOfTransient^ S)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->Append(*((TColStd_SequenceOfTransient*)S->Handle));
}

 void OCTColStd_SequenceOfTransient::Prepend(OCNaroWrappers::OCStandard_Transient^ T)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->Prepend(*((Handle_Standard_Transient*)T->Handle));
}

 void OCTColStd_SequenceOfTransient::Prepend(OCNaroWrappers::OCTColStd_SequenceOfTransient^ S)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->Prepend(*((TColStd_SequenceOfTransient*)S->Handle));
}

 void OCTColStd_SequenceOfTransient::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCStandard_Transient^ T)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->InsertBefore(Index, *((Handle_Standard_Transient*)T->Handle));
}

 void OCTColStd_SequenceOfTransient::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfTransient^ S)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->InsertBefore(Index, *((TColStd_SequenceOfTransient*)S->Handle));
}

 void OCTColStd_SequenceOfTransient::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCStandard_Transient^ T)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->InsertAfter(Index, *((Handle_Standard_Transient*)T->Handle));
}

 void OCTColStd_SequenceOfTransient::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfTransient^ S)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->InsertAfter(Index, *((TColStd_SequenceOfTransient*)S->Handle));
}

OCStandard_Transient^ OCTColStd_SequenceOfTransient::First()
{
  Handle(Standard_Transient) tmp = ((TColStd_SequenceOfTransient*)nativeHandle)->First();
  return gcnew OCStandard_Transient(&tmp);
}

OCStandard_Transient^ OCTColStd_SequenceOfTransient::Last()
{
  Handle(Standard_Transient) tmp = ((TColStd_SequenceOfTransient*)nativeHandle)->Last();
  return gcnew OCStandard_Transient(&tmp);
}

 void OCTColStd_SequenceOfTransient::Split(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfTransient^ Sub)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->Split(Index, *((TColStd_SequenceOfTransient*)Sub->Handle));
}

OCStandard_Transient^ OCTColStd_SequenceOfTransient::Value(Standard_Integer Index)
{
  Handle(Standard_Transient) tmp = ((TColStd_SequenceOfTransient*)nativeHandle)->Value(Index);
  return gcnew OCStandard_Transient(&tmp);
}

 void OCTColStd_SequenceOfTransient::SetValue(Standard_Integer Index, OCNaroWrappers::OCStandard_Transient^ I)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->SetValue(Index, *((Handle_Standard_Transient*)I->Handle));
}

OCStandard_Transient^ OCTColStd_SequenceOfTransient::ChangeValue(Standard_Integer Index)
{
  Handle(Standard_Transient) tmp = ((TColStd_SequenceOfTransient*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStandard_Transient(&tmp);
}

 void OCTColStd_SequenceOfTransient::Remove(Standard_Integer Index)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->Remove(Index);
}

 void OCTColStd_SequenceOfTransient::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColStd_SequenceOfTransient*)nativeHandle)->Remove(FromIndex, ToIndex);
}

