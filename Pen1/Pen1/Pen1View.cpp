
// Pen1View.cpp : CPen1View Ŭ������ ����
//

#include "stdafx.h"
#include "Pen1.h"

#include "Pen1Doc.h"
#include "Pen1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPen1View

IMPLEMENT_DYNCREATE(CPen1View, CView)

BEGIN_MESSAGE_MAP(CPen1View, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CPen1View::OnFilePrintPreview)
END_MESSAGE_MAP()

// CPen1View ����/�Ҹ�

CPen1View::CPen1View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CPen1View::~CPen1View()
{
}

BOOL CPen1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CPen1View �׸���

void CPen1View::OnDraw(CDC* pDC)
{
	CPen1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	int nPenStyle[] = {PS_SOLID, PS_DASH, PS_DOT, PS_DASHDOT, PS_DASHDOTDOT, PS_NULL, PS_INSIDEFRAME};
	CString PenStyle[] = {_T("PS_SOLID"), _T("PS_DASH"), _T("PS_DOT"), _T("PS_DASHDOT"), _T("PS_DASHDOTDOT"), _T("PS_NULL"), _T("PS_INSIDEFRAME")};
	for (int i = 0; i < sizeof(nPenStyle) / sizeof(nPenStyle[0]); i++) 
	{
		CPen pen(nPenStyle[i], 1, RGB(0, 0 ,255));
		pDC -> SelectObject(&Pen);
		CString str = PenStyle[i];

		pDC -> TextOut(50, 50 + i * 25, str);
		pDC -> MoveTo(200, 60 + i * 25);
		pDC -> LineTo(300, 60 + i * 25);
	}

	CPen redPen(PS_SOLID, 1, RGB(255, 0, 0));
	CPen soldPen(PS_SOLID, 10 , RGB(0, 0, 255));
	CPen insidePen(PS_INSIDEFRAME, 10, RGB(0, 0, 255));

	pDC -> SelectObject(&redPen);
	pDC -> Rectangle(400, 100, 500, 200);
	pDC -> Rectangle(550, 100, 650, 200);

	pDC -> SelectObject(&soldPen);
	pDC -> Ellipse(400, 100, 500, 200);

	pDC -> SelectObject(&insidePen);
	pDC -> Ellipse(550, 100, 650, 200);
}


// CPen1View �μ�


void CPen1View::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CPen1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CPen1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CPen1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CPen1View::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CPen1View::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CPen1View ����

#ifdef _DEBUG
void CPen1View::AssertValid() const
{
	CView::AssertValid();
}

void CPen1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPen1Doc* CPen1View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPen1Doc)));
	return (CPen1Doc*)m_pDocument;
}
#endif //_DEBUG


// CPen1View �޽��� ó����
