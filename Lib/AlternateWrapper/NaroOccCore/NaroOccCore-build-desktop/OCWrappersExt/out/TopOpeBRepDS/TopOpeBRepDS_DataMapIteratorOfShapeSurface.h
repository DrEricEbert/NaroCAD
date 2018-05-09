// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_DataMapIteratorOfShapeSurface_OCWrappers_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfShapeSurface_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_DataMapIteratorOfShapeSurface.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCGeom_Surface;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRepDS_ShapeSurface;
ref class OCTopOpeBRepDS_DataMapNodeOfShapeSurface;



public ref class OCTopOpeBRepDS_DataMapIteratorOfShapeSurface  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_DataMapIteratorOfShapeSurface(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_DataMapIteratorOfShapeSurface(TopOpeBRepDS_DataMapIteratorOfShapeSurface* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_DataMapIteratorOfShapeSurface();


OCTopOpeBRepDS_DataMapIteratorOfShapeSurface(OCNaroWrappers::OCTopOpeBRepDS_ShapeSurface^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopOpeBRepDS_ShapeSurface^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCGeom_Surface^ Value() ;

~OCTopOpeBRepDS_DataMapIteratorOfShapeSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif