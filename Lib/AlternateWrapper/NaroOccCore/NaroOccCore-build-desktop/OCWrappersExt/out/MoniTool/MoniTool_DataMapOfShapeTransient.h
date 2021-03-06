// File generated by CPPExt (MPV)
//
#ifndef _MoniTool_DataMapOfShapeTransient_OCWrappers_HeaderFile
#define _MoniTool_DataMapOfShapeTransient_OCWrappers_HeaderFile

// include native header
#include <MoniTool_DataMapOfShapeTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCStandard_Transient;
ref class OCTopTools_ShapeMapHasher;
ref class OCMoniTool_DataMapNodeOfDataMapOfShapeTransient;
ref class OCMoniTool_DataMapIteratorOfDataMapOfShapeTransient;



public ref class OCMoniTool_DataMapOfShapeTransient  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMoniTool_DataMapOfShapeTransient(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_DataMapOfShapeTransient(MoniTool_DataMapOfShapeTransient* nativeHandle);

// Methods PUBLIC


OCMoniTool_DataMapOfShapeTransient(Standard_Integer NbBuckets);


 /*instead*/  OCMoniTool_DataMapOfShapeTransient^ Assign(OCNaroWrappers::OCMoniTool_DataMapOfShapeTransient^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCStandard_Transient^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCStandard_Transient^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCStandard_Transient^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCMoniTool_DataMapOfShapeTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
