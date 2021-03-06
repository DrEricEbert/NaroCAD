// File generated by CPPExt (CPP file)
//

#include "BRep_ListIteratorOfListOfCurveRepresentation.h"
#include "../Converter.h"
#include "BRep_ListOfCurveRepresentation.h"
#include "BRep_CurveRepresentation.h"
#include "BRep_ListNodeOfListOfCurveRepresentation.h"


using namespace OCNaroWrappers;

OCBRep_ListIteratorOfListOfCurveRepresentation::OCBRep_ListIteratorOfListOfCurveRepresentation(BRep_ListIteratorOfListOfCurveRepresentation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRep_ListIteratorOfListOfCurveRepresentation::OCBRep_ListIteratorOfListOfCurveRepresentation() 
{
  nativeHandle = new BRep_ListIteratorOfListOfCurveRepresentation();
}

OCBRep_ListIteratorOfListOfCurveRepresentation::OCBRep_ListIteratorOfListOfCurveRepresentation(OCNaroWrappers::OCBRep_ListOfCurveRepresentation^ L) 
{
  nativeHandle = new BRep_ListIteratorOfListOfCurveRepresentation(*((BRep_ListOfCurveRepresentation*)L->Handle));
}

 void OCBRep_ListIteratorOfListOfCurveRepresentation::Initialize(OCNaroWrappers::OCBRep_ListOfCurveRepresentation^ L)
{
  ((BRep_ListIteratorOfListOfCurveRepresentation*)nativeHandle)->Initialize(*((BRep_ListOfCurveRepresentation*)L->Handle));
}

 System::Boolean OCBRep_ListIteratorOfListOfCurveRepresentation::More()
{
  return OCConverter::StandardBooleanToBoolean(((BRep_ListIteratorOfListOfCurveRepresentation*)nativeHandle)->More());
}

 void OCBRep_ListIteratorOfListOfCurveRepresentation::Next()
{
  ((BRep_ListIteratorOfListOfCurveRepresentation*)nativeHandle)->Next();
}

OCBRep_CurveRepresentation^ OCBRep_ListIteratorOfListOfCurveRepresentation::Value()
{
  Handle(BRep_CurveRepresentation) tmp = ((BRep_ListIteratorOfListOfCurveRepresentation*)nativeHandle)->Value();
  return gcnew OCBRep_CurveRepresentation(&tmp);
}


