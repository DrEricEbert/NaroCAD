// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_DataMapOfTopolTool_OCWrappers_HeaderFile
#define _TopOpeBRep_DataMapOfTopolTool_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_DataMapOfTopolTool.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepTopAdaptor_TopolTool;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRep_DataMapNodeOfDataMapOfTopolTool;
ref class OCTopOpeBRep_DataMapIteratorOfDataMapOfTopolTool;



public ref class OCTopOpeBRep_DataMapOfTopolTool  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTopOpeBRep_DataMapOfTopolTool(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRep_DataMapOfTopolTool(TopOpeBRep_DataMapOfTopolTool* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_DataMapOfTopolTool(Standard_Integer NbBuckets);


 /*instead*/  OCTopOpeBRep_DataMapOfTopolTool^ Assign(OCNaroWrappers::OCTopOpeBRep_DataMapOfTopolTool^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepTopAdaptor_TopolTool^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepTopAdaptor_TopolTool^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepTopAdaptor_TopolTool^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTopOpeBRep_DataMapOfTopolTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
