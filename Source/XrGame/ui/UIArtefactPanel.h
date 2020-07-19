#pragma once
#include "UIWindow.h"
#include "../UIStaticItem.h"

class CUIXml;
class CArtefact;
class CUIStaticItem;

class CUIArtefactPanel : public CUIWindow
{
protected:
    float m_fScale;
    Fvector2 m_cell_size;
    xr_vector<Frect> m_vRects;
    CUIStaticItem m_StaticItem;
	CUIStaticItem               m_si;
public:
    CUIArtefactPanel();
    ~CUIArtefactPanel();

	virtual void InitIcons(const xr_vector<const CArtefact*>& artefacts);
	virtual void Draw();
	void InitFromXML(CUIXml& xml, LPCSTR path, int index);


};
