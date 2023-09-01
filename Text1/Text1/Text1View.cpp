
// Text1View.cpp : CText1View Ŭ������ ����
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
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CText1View::OnFilePrintPreview)
END_MESSAGE_MAP()

// CText1View ����/�Ҹ�

CText1View::CText1View()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CText1View::~CText1View()
{
}

BOOL CText1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// CText1View �׸���

void CText1View::OnDraw(CDC* pDC)
{
	CText1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
	CRect rect;
	GetClientRect(&rect);

	pDC -> SetTextColor(RGB(0, 0, 255));
	pDC -> SetBkColor(RGB(0, 255, 0));
	pDC -> DrawText(_T("�ؽ�Ʈ ����� �����ϰ� �ֽ��ϴ�."), -1, &rect,
		DT_CENTER | DT_VCENTER | DT_SINGLELINE);


	pDC -> TextOut(rect.Width() / 2, rect.Height() / 4 * 3 - 30,
		_T("�ؽ�Ʈ ����Ʈ ���� ������� ���"));

	pDC -> SetBkMode(TRANSPARENT);
	pDC -> SetTextAlign(TA_RIGHT);
	pDC -> TextOut(rect.Width() / 2, rect.Height() / 4 * 3,
		_T("�ؽ�Ʈ ������ ���� ������� ���"));
	
	pDC -> SetBkMode(OPAQUE);
	pDC -> SetTextAlign(TA_CENTER);
	pDC -> TextOut(rect.Width() / 2, rect.Height() / 4 * 3 + 30,
		_T("�ؽ�Ʈ ��� ���� ������� ���"));
}


// CText1View �μ�


void CText1View::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CText1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CText1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CText1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
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


// CText1View ����

#ifdef _DEBUG
void CText1View::AssertValid() const
{
	CView::AssertValid();
}

void CText1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CText1Doc* CText1View::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CText1Doc)));
	return (CText1Doc*)m_pDocument;
}
#endif //_DEBUG


// CText1View �޽��� ó����
