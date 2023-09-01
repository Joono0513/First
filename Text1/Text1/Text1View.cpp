
// Text1View.cpp : CText1View 클래스의 구현
//

#include "stdafx.h"
#include "Text1.h"

#include "Text1Doc.h"
#include "Text1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CText1View

IMPLEMENT_DYNCREATE(CText1View, CView)

BEGIN_MESSAGE_MAP(CText1View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CText1View::OnFilePrintPreview)
END_MESSAGE_MAP()

// CText1View 생성/소멸

CText1View::CText1View()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CText1View::~CText1View()
{
}

BOOL CText1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CText1View 그리기

void CText1View::OnDraw(CDC* pDC)
{
	CText1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	CRect rect;
	GetClientRect(&rect);

	pDC -> SetTextColor(RGB(0, 0, 255));
	pDC -> SetBkColor(RGB(0, 255, 0));
	pDC -> DrawText(_T("텍스트 출력을 연습하고 있습니다."), -1, &rect,
		DT_CENTER | DT_VCENTER | DT_SINGLELINE);


	pDC -> TextOut(rect.Width() / 2, rect.Height() / 4 * 3 - 30,
		_T("텍스트 디폴트 정렬 방식으로 출력"));

	pDC -> SetBkMode(TRANSPARENT);
	pDC -> SetTextAlign(TA_RIGHT);
	pDC -> TextOut(rect.Width() / 2, rect.Height() / 4 * 3,
		_T("텍스트 오른쪽 정렬 방식으로 출력"));
	
	pDC -> SetBkMode(OPAQUE);
	pDC -> SetTextAlign(TA_CENTER);
	pDC -> TextOut(rect.Width() / 2, rect.Height() / 4 * 3 + 30,
		_T("텍스트 가운데 정렬 방식으로 출력"));
}


// CText1View 인쇄


void CText1View::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CText1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CText1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CText1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CText1View::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CText1View::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CText1View 진단

#ifdef _DEBUG
void CText1View::AssertValid() const
{
	CView::AssertValid();
}

void CText1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CText1Doc* CText1View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CText1Doc)));
	return (CText1Doc*)m_pDocument;
}
#endif //_DEBUG


// CText1View 메시지 처리기
