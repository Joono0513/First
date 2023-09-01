
// ShapeView.cpp : CShapeView 클래스의 구현
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CShapeView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CShapeView 생성/소멸

CShapeView::CShapeView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CShapeView::~CShapeView()
{
}

BOOL CShapeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CShapeView 그리기

void CShapeView::OnDraw(CDC* pDC)
{
	CShapeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
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


// CShapeView 인쇄


void CShapeView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CShapeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CShapeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CShapeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
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


// CShapeView 진단

#ifdef _DEBUG
void CShapeView::AssertValid() const
{
	CView::AssertValid();
}

void CShapeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CShapeDoc* CShapeView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CShapeDoc)));
	return (CShapeDoc*)m_pDocument;
}
#endif //_DEBUG


// CShapeView 메시지 처리기
