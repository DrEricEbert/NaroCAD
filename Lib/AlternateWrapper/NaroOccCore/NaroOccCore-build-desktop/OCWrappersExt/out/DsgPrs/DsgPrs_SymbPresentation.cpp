// File generated by CPPExt (CPP file)
//

#include "DsgPrs_SymbPresentation.h"
#include "../Converter.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Drawer.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCDsgPrs_SymbPresentation::OCDsgPrs_SymbPresentation(DsgPrs_SymbPresentation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCDsgPrs_SymbPresentation::Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ OffsetPoint)
{
  DsgPrs_SymbPresentation::Add(*((Handle_Prs3d_Presentation*)aPresentation->Handle), *((Handle_Prs3d_Drawer*)aDrawer->Handle), *((TCollection_ExtendedString*)aText->Handle), *((gp_Pnt*)OffsetPoint->Handle));
}

