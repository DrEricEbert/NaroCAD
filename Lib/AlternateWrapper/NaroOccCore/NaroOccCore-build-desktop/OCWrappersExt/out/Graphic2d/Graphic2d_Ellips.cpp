// File generated by CPPExt (CPP file)
//

#include "Graphic2d_Ellips.h"
#include "../Converter.h"
#include "Graphic2d_GraphicObject.h"
#include "Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCGraphic2d_Ellips::OCGraphic2d_Ellips(Handle(Graphic2d_Ellips)* nativeHandle) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic2d_Ellips(*nativeHandle);
}

OCGraphic2d_Ellips::OCGraphic2d_Ellips(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length X, Quantity_Length Y, Quantity_Length MajorRadius, Quantity_Length MinorRadius, Quantity_PlaneAngle anAngle) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic2d_Ellips(new Graphic2d_Ellips(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), X, Y, MajorRadius, MinorRadius, anAngle));
}

 void OCGraphic2d_Ellips::Center(Quantity_Length& X, Quantity_Length& Y)
{
  (*((Handle_Graphic2d_Ellips*)nativeHandle))->Center(X, Y);
}

 Quantity_Length OCGraphic2d_Ellips::MajorRadius()
{
  return (*((Handle_Graphic2d_Ellips*)nativeHandle))->MajorRadius();
}

 Quantity_Length OCGraphic2d_Ellips::MinorRadius()
{
  return (*((Handle_Graphic2d_Ellips*)nativeHandle))->MinorRadius();
}

 Quantity_PlaneAngle OCGraphic2d_Ellips::Angle()
{
  return (*((Handle_Graphic2d_Ellips*)nativeHandle))->Angle();
}

 void OCGraphic2d_Ellips::Save(Aspect_FStream& aFStream)
{
  (*((Handle_Graphic2d_Ellips*)nativeHandle))->Save(aFStream);
}

 void OCGraphic2d_Ellips::Retrieve(Aspect_IFStream& anIFStream, OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject)
{
  Graphic2d_Ellips::Retrieve(anIFStream, *((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle));
}

