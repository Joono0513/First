
// ShapeDoc.cpp : CShapeDoc Ŭ������ ����
//

#include "stdafx.h"
#include "Shape.h"

#include "ShapeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CShapeDoc

IMPLEMENT_DYNCREATE(CShapeDoc, CDocument)

BEGIN_MESSAGE_MAP(CShapeDoc, CDocument)
END_MESSAGE_MAP()


// CShapeDoc ����/�Ҹ�

CShapeDoc::CShapeDoc()
{
	// TODO: ���⿡ ��ȸ�� ���� �ڵ带 �߰��մϴ�.

}

CShapeDoc::~CShapeDoc()
{
}

BOOL CShapeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ���⿡ ���ʱ�ȭ �ڵ带 �߰��մϴ�.
	// SDI ������ �� ������ �ٽ� ����մϴ�.

	return TRUE;
}




// CShapeDoc serialization

void CShapeDoc::Serialize(CArchive& ar)
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


// CShapeDoc ����

#ifdef _DEBUG
void CShapeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CShapeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CShapeDoc ���
