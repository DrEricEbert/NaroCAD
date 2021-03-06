// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRepBuild_DataMapOfShapeReal;
ref class OCTopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeReal;



public ref class OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(Handle(TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal(OCNaroWrappers::OCTopoDS_Shape^ K, Standard_Real I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Real Value() ;

~OCTopOpeBRepBuild_DataMapNodeOfDataMapOfShapeReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
