// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCAdaptor3d_HVertex;
ref class OCAdaptor2d_HCurve2d;
ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HCurve2dTool;
ref class OCIntPatch_HSurfaceTool;
ref class OCAdaptor3d_TopolTool;
ref class OCIntPatch_HInterTool;
ref class OCIntPatch_ThePointOfIntersection;
ref class OCIntPatch_SequenceOfPointOfIntersection;
ref class OCIntPatch_TheWLineOfIntersection;
ref class OCIntPatch_TheRstIntOfIntersection;
ref class OCIntPatch_ThePPIntOfIntersection;
ref class OCIntPatch_ThePolyhedronOfThePPIntOfIntersection;
ref class OCIntPatch_TheToolPolyhOfThePPIntOfIntersection;
ref class OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection;
ref class OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection;
ref class OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection;



public ref class OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection  {

protected:
  IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection* nativeHandle;
  OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection(OCDummy^) {};

public:
  property IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection* Handle
  {
    IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection(IntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection(Standard_Integer size);


 /*instead*/  void Add(Standard_Integer t) ;


 /*instead*/  Standard_Integer Val(Standard_Integer t) ;


 /*instead*/  void Raz(Standard_Integer t) ;


 /*instead*/  void ResetAnd() ;


 /*instead*/  Standard_Integer And(OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection^ Oth, Standard_Integer& indiceprecedent) ;

~OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
