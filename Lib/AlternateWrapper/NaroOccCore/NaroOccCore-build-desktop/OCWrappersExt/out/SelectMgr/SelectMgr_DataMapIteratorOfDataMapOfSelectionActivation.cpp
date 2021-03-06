// File generated by CPPExt (CPP file)
//

#include "SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation.h"
#include "../Converter.h"
#include "SelectMgr_Selection.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "SelectMgr_DataMapOfSelectionActivation.h"
#include "SelectMgr_DataMapNodeOfDataMapOfSelectionActivation.h"


using namespace OCNaroWrappers;

OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation::OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation(SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation::OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation();
}

OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation::OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation(OCNaroWrappers::OCSelectMgr_DataMapOfSelectionActivation^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation(*((SelectMgr_DataMapOfSelectionActivation*)aMap->Handle));
}

 void OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation::Initialize(OCNaroWrappers::OCSelectMgr_DataMapOfSelectionActivation^ aMap)
{
  ((SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation*)nativeHandle)->Initialize(*((SelectMgr_DataMapOfSelectionActivation*)aMap->Handle));
}

OCSelectMgr_Selection^ OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation::Key()
{
  Handle(SelectMgr_Selection) tmp = ((SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation*)nativeHandle)->Key();
  return gcnew OCSelectMgr_Selection(&tmp);
}

 Standard_Integer OCSelectMgr_DataMapIteratorOfDataMapOfSelectionActivation::Value()
{
  return ((SelectMgr_DataMapIteratorOfDataMapOfSelectionActivation*)nativeHandle)->Value();
}


