
// ThirdDoc.cpp : CThirdDoc Ŭ������ ����
//

#include "stdafx.h"
#include "Third.h"

#include "ThirdDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CThirdDoc

IMPLEMENT_DYNCREATE(CThirdDoc, CDocument)

BEGIN_MESSAGE_MAP(CThirdDoc, CDocument)
END_MESSAGE_MAP()


// CThirdDoc ����/�Ҹ�

CThirdDoc::CThirdDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CThirdDoc::~CThirdDoc()
{
}

BOOL CThirdDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CThirdDoc serialization

void CThirdDoc::Serialize(CArchive& ar)
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


// CThirdDoc ����

#ifdef _DEBUG
void CThirdDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CThirdDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CThirdDoc ���
