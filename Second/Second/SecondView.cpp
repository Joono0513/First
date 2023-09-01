
// SecondView.cpp : CSecondView Ŭ������ ����
//

#include "stdafx.h"
#include "Second.h"

#include "SecondDoc.h"
#include "SecondView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSecondView

IMPLEMENT_DYNCREATE(CSecondView, CView)

BEGIN_MESSAGE_MAP(CSecondView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CSecondView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CSecondView ����/�Ҹ�

CSecondView::CSecondView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CSecondView::~CSecondView()
{
}

BOOL CSecondView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CSecondView �׸���

void CSecondView::OnDraw(CDC* /*pDC*/)
{
	CSecondDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	CDC *pDC = GetDC();
	pDC->TextOut(100, 50, _T("MFC Application"));
	ReleaseDC(pDC);

	CClientDC dc(this);
	dc.TextOut(100, 100, _T("MFC Application"));
}


// CSecondView �μ�


void CSecondView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CSecondView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CSecondView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CSecondView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CSecondView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CSecondView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CSecondView ����

#ifdef _DEBUG
void CSecondView::AssertValid() const
{
	CView::AssertValid();
}

void CSecondView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSecondDoc* CSecondView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSecondDoc)));
	return (CSecondDoc*)m_pDocument;
}
#endif //_DEBUG


// CSecondView �޽��� ó����
