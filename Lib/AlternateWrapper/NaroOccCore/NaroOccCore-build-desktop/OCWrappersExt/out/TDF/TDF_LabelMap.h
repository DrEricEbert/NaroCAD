// File generated by CPPExt (MPV)
//
#ifndef _TDF_LabelMap_OCWrappers_HeaderFile
#define _TDF_LabelMap_OCWrappers_HeaderFile

// include native header
#include <TDF_LabelMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelMapHasher;
ref class OCTDF_StdMapNodeOfLabelMap;
ref class OCTDF_MapIteratorOfLabelMap;



public ref class OCTDF_LabelMap  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTDF_LabelMap(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_LabelMap(TDF_LabelMap* nativeHandle);

// Methods PUBLIC


OCTDF_LabelMap(Standard_Integer NbBuckets);


 /*instead*/  OCTDF_LabelMap^ Assign(OCNaroWrappers::OCTDF_LabelMap^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Add(OCNaroWrappers::OCTDF_Label^ aKey) ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTDF_Label^ aKey) ;


 /*instead*/  System::Boolean Remove(OCNaroWrappers::OCTDF_Label^ aKey) ;

~OCTDF_LabelMap()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif