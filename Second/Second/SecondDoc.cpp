
// SecondDoc.cpp : CSecondDoc Ŭ������ ����
//

#include "stdafx.h"
#include "Second.h"

#include "SecondDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSecondDoc

IMPLEMENT_DYNCREATE(CSecondDoc, CDocument)

BEGIN_MESSAGE_MAP(CSecondDoc, CDocument)
END_MESSAGE_MAP()


// CSecondDoc ����/�Ҹ�

CSecondDoc::CSecondDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CSecondDoc::~CSecondDoc()
{
}

BOOL CSecondDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CSecondDoc serialization

void CSecondDoc::Serialize(CArchive& ar)
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


// CSecondDoc ����

#ifdef _DEBUG
void CSecondDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSecondDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CSecondDoc ���
