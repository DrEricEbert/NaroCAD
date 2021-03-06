// File generated by CPPExt (CPP file)
//

#include "STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"
#include "../Standard/Standard_Transient.h"
#include "STEPConstruct_PointHasher.h"
#include "STEPConstruct_DataMapOfPointTransient.h"
#include "STEPConstruct_DataMapNodeOfDataMapOfPointTransient.h"


using namespace OCNaroWrappers;

OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient::OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient(STEPConstruct_DataMapIteratorOfDataMapOfPointTransient* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient::OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new STEPConstruct_DataMapIteratorOfDataMapOfPointTransient();
}

OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient::OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient(OCNaroWrappers::OCSTEPConstruct_DataMapOfPointTransient^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new STEPConstruct_DataMapIteratorOfDataMapOfPointTransient(*((STEPConstruct_DataMapOfPointTransient*)aMap->Handle));
}

 void OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient::Initialize(OCNaroWrappers::OCSTEPConstruct_DataMapOfPointTransient^ aMap)
{
  ((STEPConstruct_DataMapIteratorOfDataMapOfPointTransient*)nativeHandle)->Initialize(*((STEPConstruct_DataMapOfPointTransient*)aMap->Handle));
}

OCgp_Pnt^ OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient::Key()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((STEPConstruct_DataMapIteratorOfDataMapOfPointTransient*)nativeHandle)->Key();
  return gcnew OCgp_Pnt(tmp);
}

OCStandard_Transient^ OCSTEPConstruct_DataMapIteratorOfDataMapOfPointTransient::Value()
{
  Handle(Standard_Transient) tmp = ((STEPConstruct_DataMapIteratorOfDataMapOfPointTransient*)nativeHandle)->Value();
  return gcnew OCStandard_Transient(&tmp);
}


