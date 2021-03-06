// File generated by CPPExt (CPP file)
//

#include "TColStd_QueueOfReal.h"
#include "../Converter.h"
#include "TColStd_QueueNodeOfQueueOfReal.h"


using namespace OCNaroWrappers;

OCTColStd_QueueOfReal::OCTColStd_QueueOfReal(TColStd_QueueOfReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_QueueOfReal::OCTColStd_QueueOfReal() 
{
  nativeHandle = new TColStd_QueueOfReal();
}

OCTColStd_QueueOfReal^ OCTColStd_QueueOfReal::Assign(OCNaroWrappers::OCTColStd_QueueOfReal^ Other)
{
  TColStd_QueueOfReal* tmp = new TColStd_QueueOfReal();
  *tmp = ((TColStd_QueueOfReal*)nativeHandle)->Assign(*((TColStd_QueueOfReal*)Other->Handle));
  return gcnew OCTColStd_QueueOfReal(tmp);
}

 Standard_Integer OCTColStd_QueueOfReal::Length()
{
  return ((TColStd_QueueOfReal*)nativeHandle)->Length();
}

 System::Boolean OCTColStd_QueueOfReal::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_QueueOfReal*)nativeHandle)->IsEmpty());
}

 Standard_Real OCTColStd_QueueOfReal::Front()
{
  return ((TColStd_QueueOfReal*)nativeHandle)->Front();
}

 void OCTColStd_QueueOfReal::Push(Standard_Real T)
{
  ((TColStd_QueueOfReal*)nativeHandle)->Push(T);
}

 void OCTColStd_QueueOfReal::Pop()
{
  ((TColStd_QueueOfReal*)nativeHandle)->Pop();
}

 Standard_Real OCTColStd_QueueOfReal::ChangeFront()
{
  return ((TColStd_QueueOfReal*)nativeHandle)->ChangeFront();
}


