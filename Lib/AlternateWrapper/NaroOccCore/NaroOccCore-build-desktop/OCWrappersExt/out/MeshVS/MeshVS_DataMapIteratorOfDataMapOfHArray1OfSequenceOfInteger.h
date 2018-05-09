// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger_OCWrappers_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger_OCWrappers_HeaderFile

// include native header
#include <MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCMeshVS_HArray1OfSequenceOfInteger;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshVS_DataMapOfHArray1OfSequenceOfInteger;
ref class OCMeshVS_DataMapNodeOfDataMapOfHArray1OfSequenceOfInteger;



public ref class OCMeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger(MeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger* nativeHandle);

// Methods PUBLIC


OCMeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger();


OCMeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger(OCNaroWrappers::OCMeshVS_DataMapOfHArray1OfSequenceOfInteger^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMeshVS_DataMapOfHArray1OfSequenceOfInteger^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCMeshVS_HArray1OfSequenceOfInteger^ Value() ;

~OCMeshVS_DataMapIteratorOfDataMapOfHArray1OfSequenceOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif