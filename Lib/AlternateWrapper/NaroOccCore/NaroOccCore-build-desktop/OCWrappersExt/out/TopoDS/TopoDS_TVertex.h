// File generated by CPPExt (Transient)
//
#ifndef _TopoDS_TVertex_OCWrappers_HeaderFile
#define _TopoDS_TVertex_OCWrappers_HeaderFile

// include the wrapped class
#include <TopoDS_TVertex.hxx>
#include "../Converter.h"

#include "TopoDS_TShape.h"

#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{




public ref class OCTopoDS_TVertex : OCTopoDS_TShape {

protected:
  // dummy constructor;
  OCTopoDS_TVertex(OCDummy^) : OCTopoDS_TShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopoDS_TVertex(Handle(TopoDS_TVertex)* nativeHandle);

// Methods PUBLIC

//! Construct a vertex. <br>
OCTopoDS_TVertex();

//! Returns VERTEX. <br>
 /*instead*/  OCTopAbs_ShapeEnum ShapeType() ;

~OCTopoDS_TVertex()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
