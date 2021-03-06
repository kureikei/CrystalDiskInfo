#pragma once

#include <atlimage.h>
#include <gdiplus.h>
#pragma comment(lib, "Gdiplus.lib")
using namespace Gdiplus;

class CSliderCtrlFx : public CSliderCtrl
{
	DECLARE_DYNAMIC(CSliderCtrlFx)

public:
	CSliderCtrlFx();
	virtual ~CSliderCtrlFx();
	BOOL InitControl(int x, int y, int width, int height, double zoomRatio, CDC* bkDC, int renderMode, BOOL bHighContrast, BOOL bDarkMode, int min, int max, int pos);

	BOOL m_bHighContrast;
	CBrush m_BkBrush;

protected:
	int m_X;
	int m_Y;
	CSize m_CtrlSize;
	CRect m_Margin;
	int m_RenderMode;
	BOOL m_bDarkMode;
	CDC* m_BkDC;
};

