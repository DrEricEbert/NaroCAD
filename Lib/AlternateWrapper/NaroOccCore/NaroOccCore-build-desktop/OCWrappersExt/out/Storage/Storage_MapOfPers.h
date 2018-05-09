// File generated by CPPExt (MPV)
//
#ifndef _Storage_MapOfPers_OCWrappers_HeaderFile
#define _Storage_MapOfPers_OCWrappers_HeaderFile

// include native header
#include <Storage_MapOfPers.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCStorage_Root;
ref class OCStorage_DataMapNodeOfMapOfPers;
ref class OCStorage_DataMapIteratorOfMapOfPers;



public ref class OCStorage_MapOfPers  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCStorage_MapOfPers(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_MapOfPers(Storage_MapOfPers* nativeHandle);

// Methods PUBLIC


OCStorage_MapOfPers(Standard_Integer NbBuckets);


 /*instead*/  OCStorage_MapOfPers^ Assign(OCNaroWrappers::OCStorage_MapOfPers^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTCollection_AsciiString^ K, OCNaroWrappers::OCStorage_Root^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  OCStorage_Root^ Find(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  OCStorage_Root^ ChangeFind(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTCollection_AsciiString^ K) ;

~OCStorage_MapOfPers()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif