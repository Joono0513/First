
// Pen1View.h : CPen1View Ŭ������ �������̽�
//


#pragma once


class CPen1View : public CView
{
protected: // serialization������ ��������ϴ�.
	CPen1View();
	DECLARE_DYNCREATE(CPen1View)

// Ư���Դϴ�.
public:
	CPen1Doc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CPen1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Pen1View.cpp�� ����� ����
inline CPen1Doc* CPen1View::GetDocument() const
   { return reinterpret_cast<CPen1Doc*>(m_pDocument); }
#endif

