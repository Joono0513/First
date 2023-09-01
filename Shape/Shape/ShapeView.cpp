
// ShapeView.cpp : CShapeView Ŭ������ ����
//

#include "stdafx.h"
#include "Shape.h"

#include "ShapeDoc.h"
#include "ShapeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CShapeView

IMPLEMENT_DYNCREATE(CShapeView, CView)

BEGIN_MESSAGE_MAP(CShapeView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CShapeView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CShapeView ����/�Ҹ�

CShapeView::CShapeView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CShapeView::~CShapeView()
{
}

BOOL CShapeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CShapeView �׸���

void CShapeView::OnDraw(CDC* pDC)
{
	CShapeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	pDC -> MoveTo(100, 100);
	pDC -> LineTo(200, 200);

	pDC -> Rectangle(300, 100, 400, 200);
	
	pDC -> Ellipse(500, 100, 600, 200);

	CPoint pt1 (100, 300);
	CPoint pt2 (200, 400);
	pDC -> MoveTo(pt1);
	pDC -> LineTo(pt2);

	CRect rc1(300, 300, 400, 400);
	pDC -> Rectangle(&rc1);

	CRect rc2(500, 300, 600, 400);
	pDC -> Ellipse(&rc2);
}


// CShapeView �μ�


void CShapeView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CShapeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CShapeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CShapeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void CShapeView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CShapeView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CShapeView ����

#ifdef _DEBUG
void CShapeView::AssertValid() const
{
	CView::AssertValid();
}

void CShapeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CShapeDoc* CShapeView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CShapeDoc)));
	return (CShapeDoc*)m_pDocument;
}
#endif //_DEBUG


// CShapeView �޽��� ó����
