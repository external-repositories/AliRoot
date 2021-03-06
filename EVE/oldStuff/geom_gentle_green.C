#if !defined(__CINT__) || defined(__MAKECINT__)
#include <TFile.h>
#include <TEveManager.h>
#include <TEveElement.h>
#include <TEveGeoShape.h>
#include <TEveGeoShapeExtract.h>

#include <AliEveEventManager.h>
#include <AliEveMultiView.h>
#endif

void geom_gentle_green(Bool_t register_as_global=kTRUE)
{
  TEveGeoShape* gsre1;
  TEveGeoShape* gsre2;
  TEveGeoShape* gsre3;

  {TFile f("$ALICE_ROOT/EVE/resources/geometry/gentle_geo.root");
    TEveGeoShapeExtract* gse = (TEveGeoShapeExtract*) f.Get("Gentle");
    gsre1 = TEveGeoShape::ImportShapeExtract(gse);
    f.Close();

    if (register_as_global)
    {
      gEve->AddGlobalElement(gsre1);
    }

    // Fix visibility, color and transparency

    gsre1->SetRnrSelf(kFALSE);
    TEveElement::List_i i = gsre1->BeginChildren();

  //ITS
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);
    TEveElement::List_i j = lvl1->BeginChildren();

    TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
    lvl2->SetRnrSelf(kFALSE);
    TEveElement::List_i k = lvl2->BeginChildren();

    TEveGeoShape* its1 = (TEveGeoShape*) *k;
    its1->SetRnrSelf(kTRUE);
    its1->SetMainColor(kMagenta-5);
    its1->SetMainTransparency(60);
    k++;

    TEveGeoShape* its2 = (TEveGeoShape*) *k;
    its2->SetRnrSelf(kTRUE);
    its2->SetMainColor(kCyan-5);
    its2->SetMainTransparency(60);
    k++;

    TEveGeoShape* its3 = (TEveGeoShape*) *k;
    its3->SetRnrSelf(kTRUE);
    its3->SetMainColor(kGreen-5);
    its3->SetMainTransparency(60);
    }
  //TPC

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);
    TEveElement::List_i j = lvl1->BeginChildren();

    TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
    lvl2->SetRnrSelf(kFALSE);
    TEveElement::List_i k = lvl2->BeginChildren();

    TEveGeoShape* lvl3 = (TEveGeoShape*) *k;
    lvl3->SetRnrSelf(kFALSE);
    lvl3->SetMainColor(1);
    lvl3->SetMainTransparency(70);
    TEveElement::List_i l = lvl3->BeginChildren();

    TEveGeoShape* lvl4 = (TEveGeoShape*) *l;
    lvl4->SetRnrSelf(kFALSE);
    TEveElement::List_i m = lvl4->BeginChildren();

    TEveGeoShape* tpc1 = (TEveGeoShape*) *m;
    tpc1->SetRnrSelf(kTRUE);
    tpc1->SetMainColor(1);
    tpc1->SetMainTransparency(70);
    m++;

    TEveGeoShape* tpc2 = (TEveGeoShape*) *m;
    tpc2->SetRnrSelf(kTRUE);
    tpc2->SetMainColor(1);
    tpc2->SetMainTransparency(70);
    m++;

    TEveGeoShape* tpc3 = (TEveGeoShape*) *m;
    tpc3->SetRnrSelf(kTRUE);
    tpc3->SetMainColor(1);
    tpc3->SetMainTransparency(70);
    m++;
    }
  //TRD+TOF

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);
    TEveElement::List_i j = lvl1->BeginChildren();

    TEveGeoShape* trd1 = (TEveGeoShape*) *j;
    trd1->SetRnrSelf(kTRUE);
    trd1->SetMainColor(kMagenta-8);
    trd1->SetMainTransparency(80);
    j++;

    TEveGeoShape* tof1 = (TEveGeoShape*) *j;
    tof1->SetRnrSelf(kTRUE);
    tof1->SetMainColor(kMagenta-1);
    tof1->SetMainTransparency(80);
    }
  //PHOS

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); ++j)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(kGreen-8);
        lvl2->SetMainTransparency(20);
      }
    }
  //HMPID

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); ++j)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(kBlue-5);
        lvl2->SetMainTransparency(20);
      }
    }
  }
  
  {TFile f("$ALICE_ROOT/EVE/resources/geometry/gentle_rphi_geo.root");
    TEveGeoShapeExtract* gse = (TEveGeoShapeExtract*) f.Get("Gentle");
    gsre2 = TEveGeoShape::ImportShapeExtract(gse);
    f.Close();

    // Fix visibility, color and transparency

    gsre2->SetRnrSelf(kFALSE);
    TEveElement::List_i i = gsre2->BeginChildren();

  //ITS
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);
    TEveElement::List_i j = lvl1->BeginChildren();

    TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
    lvl2->SetRnrSelf(kFALSE);
    TEveElement::List_i k = lvl2->BeginChildren();

    TEveGeoShape* its1 = (TEveGeoShape*) *k;
    its1->SetRnrSelf(kTRUE);
    its1->SetMainColor(1);
    its1->SetMainTransparency(80);

    k++;

    TEveGeoShape* its2 = (TEveGeoShape*) *k;
    its2->SetRnrSelf(kTRUE);
    its2->SetMainColor(1);
    its2->SetMainTransparency(80);
    k++;

    TEveGeoShape* its3 = (TEveGeoShape*) *k;
    its3->SetRnrSelf(kTRUE);
    its3->SetMainColor(1);
    its3->SetMainTransparency(80);
    }
  //TPC

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); j++)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(1);
        lvl2->SetMainTransparency(80);
      }
    }
  //PHOS

    i++;
    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); j++)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(1);
        lvl2->SetMainTransparency(80);

      }
    }
  //HMPID

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); j++)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(1);
        lvl2->SetMainTransparency(80);
      }
    }
  }
  
  { TFile f("$ALICE_ROOT/EVE/resources/geometry/gentle_rhoz_geo.root");
    TEveGeoShapeExtract* gse = (TEveGeoShapeExtract*) f.Get("Gentle");
    gsre3 = TEveGeoShape::ImportShapeExtract(gse);
    f.Close();

    // Fix visibility, color and transparency

    gsre3->SetRnrSelf(kFALSE);
    TEveElement::List_i i = gsre3->BeginChildren();

  //ITS
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);
    TEveElement::List_i j = lvl1->BeginChildren();

    TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
    lvl2->SetRnrSelf(kFALSE);
    TEveElement::List_i k = lvl2->BeginChildren();

    TEveGeoShape* its1 = (TEveGeoShape*) *k;
    its1->SetRnrSelf(kTRUE);
    its1->SetMainColor(1);
    k++;

    TEveGeoShape* its2 = (TEveGeoShape*) *k;
    its2->SetRnrSelf(kTRUE);
    its2->SetMainColor(1);
    k++;

    TEveGeoShape* its3 = (TEveGeoShape*) *k;
    its3->SetRnrSelf(kTRUE);
    its3->SetMainColor(1);
    }
  //TPC

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); j++)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(1);
        lvl2->SetMainTransparency(80);

      }
    }
  //PHOS

    i++;
    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); j++)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(1);
        lvl2->SetMainTransparency(80);
      }
    }
  //HMPID

    i++;
    {
    TEveGeoShape* lvl1 = (TEveGeoShape*) *i;
    lvl1->SetRnrSelf(kFALSE);

    for (TEveElement::List_i j = lvl1->BeginChildren(); j != lvl1->EndChildren(); j++)
      {
        TEveGeoShape* lvl2 = (TEveGeoShape*) *j;
        lvl2->SetRnrSelf(kTRUE);
        lvl2->SetMainColor(1);
        lvl2->SetMainTransparency(80);
      }
    }

  }
  
//fix all the viewers

  TEveElement* top = gEve->GetCurrentEvent();

  AliEveMultiView *mv = AliEveMultiView::Instance();
  
  mv->InitGeomGentle(gsre1, gsre2, gsre3, 0);

  gEve->FullRedraw3D(kTRUE, kTRUE);

}
