// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion.h"
#include "../Converter.h"
#include "MAT2d_SequenceOfConnexion.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MAT2d_DataMapOfIntegerSequenceOfConnexion.h"
#include "MAT2d_DataMapIteratorOfDataMapOfIntegerSequenceOfConnexion.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion::OCMAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion(Handle(MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion(*nativeHandle);
}

OCMAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion::OCMAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion(Standard_Integer K, OCNaroWrappers::OCMAT2d_SequenceOfConnexion^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion(new MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion(K, *((MAT2d_SequenceOfConnexion*)I->Handle), n));
}

 Standard_Integer OCMAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion::Key()
{
  return (*((Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion*)nativeHandle))->Key();
}

OCMAT2d_SequenceOfConnexion^ OCMAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion::Value()
{
  MAT2d_SequenceOfConnexion* tmp = new MAT2d_SequenceOfConnexion();
  *tmp = (*((Handle_MAT2d_DataMapNodeOfDataMapOfIntegerSequenceOfConnexion*)nativeHandle))->Value();
  return gcnew OCMAT2d_SequenceOfConnexion(tmp);
}


