// File generated by CPPExt (CPP file)
//

#include "ChFiDS_Regularities.h"
#include "../Converter.h"
#include "ChFiDS_ListIteratorOfRegularities.h"
#include "ChFiDS_Regul.h"
#include "ChFiDS_ListNodeOfRegularities.h"


using namespace OCNaroWrappers;

OCChFiDS_Regularities::OCChFiDS_Regularities(ChFiDS_Regularities* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCChFiDS_Regularities::OCChFiDS_Regularities() 
{
  nativeHandle = new ChFiDS_Regularities();
}

 void OCChFiDS_Regularities::Assign(OCNaroWrappers::OCChFiDS_Regularities^ Other)
{
  ((ChFiDS_Regularities*)nativeHandle)->Assign(*((ChFiDS_Regularities*)Other->Handle));
}

 Standard_Integer OCChFiDS_Regularities::Extent()
{
  return ((ChFiDS_Regularities*)nativeHandle)->Extent();
}

 System::Boolean OCChFiDS_Regularities::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((ChFiDS_Regularities*)nativeHandle)->IsEmpty());
}

 void OCChFiDS_Regularities::Prepend(OCNaroWrappers::OCChFiDS_Regul^ I)
{
  ((ChFiDS_Regularities*)nativeHandle)->Prepend(*((ChFiDS_Regul*)I->Handle));
}

 void OCChFiDS_Regularities::Prepend(OCNaroWrappers::OCChFiDS_Regul^ I, OCNaroWrappers::OCChFiDS_ListIteratorOfRegularities^ theIt)
{
  ((ChFiDS_Regularities*)nativeHandle)->Prepend(*((ChFiDS_Regul*)I->Handle), *((ChFiDS_ListIteratorOfRegularities*)theIt->Handle));
}

 void OCChFiDS_Regularities::Prepend(OCNaroWrappers::OCChFiDS_Regularities^ Other)
{
  ((ChFiDS_Regularities*)nativeHandle)->Prepend(*((ChFiDS_Regularities*)Other->Handle));
}

 void OCChFiDS_Regularities::Append(OCNaroWrappers::OCChFiDS_Regul^ I)
{
  ((ChFiDS_Regularities*)nativeHandle)->Append(*((ChFiDS_Regul*)I->Handle));
}

 void OCChFiDS_Regularities::Append(OCNaroWrappers::OCChFiDS_Regul^ I, OCNaroWrappers::OCChFiDS_ListIteratorOfRegularities^ theIt)
{
  ((ChFiDS_Regularities*)nativeHandle)->Append(*((ChFiDS_Regul*)I->Handle), *((ChFiDS_ListIteratorOfRegularities*)theIt->Handle));
}

 void OCChFiDS_Regularities::Append(OCNaroWrappers::OCChFiDS_Regularities^ Other)
{
  ((ChFiDS_Regularities*)nativeHandle)->Append(*((ChFiDS_Regularities*)Other->Handle));
}

OCChFiDS_Regul^ OCChFiDS_Regularities::First()
{
  ChFiDS_Regul* tmp = new ChFiDS_Regul();
  *tmp = ((ChFiDS_Regularities*)nativeHandle)->First();
  return gcnew OCChFiDS_Regul(tmp);
}

OCChFiDS_Regul^ OCChFiDS_Regularities::Last()
{
  ChFiDS_Regul* tmp = new ChFiDS_Regul();
  *tmp = ((ChFiDS_Regularities*)nativeHandle)->Last();
  return gcnew OCChFiDS_Regul(tmp);
}

 void OCChFiDS_Regularities::RemoveFirst()
{
  ((ChFiDS_Regularities*)nativeHandle)->RemoveFirst();
}

 void OCChFiDS_Regularities::Remove(OCNaroWrappers::OCChFiDS_ListIteratorOfRegularities^ It)
{
  ((ChFiDS_Regularities*)nativeHandle)->Remove(*((ChFiDS_ListIteratorOfRegularities*)It->Handle));
}

 void OCChFiDS_Regularities::InsertBefore(OCNaroWrappers::OCChFiDS_Regul^ I, OCNaroWrappers::OCChFiDS_ListIteratorOfRegularities^ It)
{
  ((ChFiDS_Regularities*)nativeHandle)->InsertBefore(*((ChFiDS_Regul*)I->Handle), *((ChFiDS_ListIteratorOfRegularities*)It->Handle));
}

 void OCChFiDS_Regularities::InsertBefore(OCNaroWrappers::OCChFiDS_Regularities^ Other, OCNaroWrappers::OCChFiDS_ListIteratorOfRegularities^ It)
{
  ((ChFiDS_Regularities*)nativeHandle)->InsertBefore(*((ChFiDS_Regularities*)Other->Handle), *((ChFiDS_ListIteratorOfRegularities*)It->Handle));
}

 void OCChFiDS_Regularities::InsertAfter(OCNaroWrappers::OCChFiDS_Regul^ I, OCNaroWrappers::OCChFiDS_ListIteratorOfRegularities^ It)
{
  ((ChFiDS_Regularities*)nativeHandle)->InsertAfter(*((ChFiDS_Regul*)I->Handle), *((ChFiDS_ListIteratorOfRegularities*)It->Handle));
}

 void OCChFiDS_Regularities::InsertAfter(OCNaroWrappers::OCChFiDS_Regularities^ Other, OCNaroWrappers::OCChFiDS_ListIteratorOfRegularities^ It)
{
  ((ChFiDS_Regularities*)nativeHandle)->InsertAfter(*((ChFiDS_Regularities*)Other->Handle), *((ChFiDS_ListIteratorOfRegularities*)It->Handle));
}

