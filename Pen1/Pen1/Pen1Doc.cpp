
// Pen1Doc.cpp : CPen1Doc Ŭ������ ����
//

#include "stdafx.h"
#include "Pen1.h"

#include "Pen1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPen1Doc

IMPLEMENT_DYNCREATE(CPen1Doc, CDocument)

BEGIN_MESSAGE_MAP(CPen1Doc, CDocument)
END_MESSAGE_MAP()


// CPen1Doc ����/�Ҹ�

CPen1Doc::CPen1Doc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CPen1Doc::~CPen1Doc()
{
}

BOOL CPen1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CPen1Doc serialization

void CPen1Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	}
	else
	{
		// TODO: ���⿡ �ε� �ڵ带 �߰��մϴ�.
	}
}


// CPen1Doc ����

#ifdef _DEBUG
void CPen1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPen1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CPen1Doc ���
