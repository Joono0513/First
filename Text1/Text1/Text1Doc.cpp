
// Text1Doc.cpp : CText1Doc Ŭ������ ����
//

#include "stdafx.h"
#include "Text1.h"

#include "Text1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CText1Doc

IMPLEMENT_DYNCREATE(CText1Doc, CDocument)

BEGIN_MESSAGE_MAP(CText1Doc, CDocument)
END_MESSAGE_MAP()


// CText1Doc ����/�Ҹ�

CText1Doc::CText1Doc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CText1Doc::~CText1Doc()
{
}

BOOL CText1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CText1Doc serialization

void CText1Doc::Serialize(CArchive& ar)
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


// CText1Doc ����

#ifdef _DEBUG
void CText1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CText1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CText1Doc ���
