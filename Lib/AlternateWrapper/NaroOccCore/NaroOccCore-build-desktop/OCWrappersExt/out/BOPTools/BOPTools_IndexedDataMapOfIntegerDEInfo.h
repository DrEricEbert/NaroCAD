// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_IndexedDataMapOfIntegerDEInfo_OCWrappers_HeaderFile
#define _BOPTools_IndexedDataMapOfIntegerDEInfo_OCWrappers_HeaderFile

// include native header
#include <BOPTools_IndexedDataMapOfIntegerDEInfo.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCBOPTools_DEInfo;
ref class OCTColStd_MapIntegerHasher;
ref class OCBOPTools_IndexedDataMapNodeOfIndexedDataMapOfIntegerDEInfo;



public ref class OCBOPTools_IndexedDataMapOfIntegerDEInfo  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBOPTools_IndexedDataMapOfIntegerDEInfo(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTools_IndexedDataMapOfIntegerDEInfo(BOPTools_IndexedDataMapOfIntegerDEInfo* nativeHandle);

// Methods PUBLIC


OCBOPTools_IndexedDataMapOfIntegerDEInfo(Standard_Integer NbBuckets);


 /*instead*/  OCBOPTools_IndexedDataMapOfIntegerDEInfo^ Assign(OCNaroWrappers::OCBOPTools_IndexedDataMapOfIntegerDEInfo^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(Standard_Integer K, OCNaroWrappers::OCBOPTools_DEInfo^ I) ;


 /*instead*/  void Substitute(Standard_Integer I, Standard_Integer K, OCNaroWrappers::OCBOPTools_DEInfo^ T) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(Standard_Integer K) ;


 /*instead*/  Standard_Integer FindKey(Standard_Integer I) ;


 /*instead*/  OCBOPTools_DEInfo^ FindFromIndex(Standard_Integer I) ;


 /*instead*/  OCBOPTools_DEInfo^ ChangeFromIndex(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(Standard_Integer K) ;


 /*instead*/  OCBOPTools_DEInfo^ FindFromKey(Standard_Integer K) ;


 /*instead*/  OCBOPTools_DEInfo^ ChangeFromKey(Standard_Integer K) ;


 /*instead*/  Standard_Address FindFromKey1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFromKey1(Standard_Integer K) ;

~OCBOPTools_IndexedDataMapOfIntegerDEInfo()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
