// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.h"
#include "../Converter.h"
#include "../Bisector/Bisector_Bisec.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MAT2d_DataMapOfIntegerBisec.h"
#include "MAT2d_DataMapNodeOfDataMapOfIntegerBisec.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec::OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec(MAT2d_DataMapIteratorOfDataMapOfIntegerBisec* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec::OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MAT2d_DataMapIteratorOfDataMapOfIntegerBisec();
}

OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec::OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec(OCNaroWrappers::OCMAT2d_DataMapOfIntegerBisec^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MAT2d_DataMapIteratorOfDataMapOfIntegerBisec(*((MAT2d_DataMapOfIntegerBisec*)aMap->Handle));
}

 void OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec::Initialize(OCNaroWrappers::OCMAT2d_DataMapOfIntegerBisec^ aMap)
{
  ((MAT2d_DataMapIteratorOfDataMapOfIntegerBisec*)nativeHandle)->Initialize(*((MAT2d_DataMapOfIntegerBisec*)aMap->Handle));
}

 Standard_Integer OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec::Key()
{
  return ((MAT2d_DataMapIteratorOfDataMapOfIntegerBisec*)nativeHandle)->Key();
}

OCBisector_Bisec^ OCMAT2d_DataMapIteratorOfDataMapOfIntegerBisec::Value()
{
  Bisector_Bisec* tmp = new Bisector_Bisec();
  *tmp = ((MAT2d_DataMapIteratorOfDataMapOfIntegerBisec*)nativeHandle)->Value();
  return gcnew OCBisector_Bisec(tmp);
}


