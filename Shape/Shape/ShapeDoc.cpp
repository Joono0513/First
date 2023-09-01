
// ShapeDoc.cpp : CShapeDoc 클래스의 구현
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


// CShapeDoc 생성/소멸

CShapeDoc::CShapeDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CShapeDoc::~CShapeDoc()
{
}

BOOL CShapeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CShapeDoc serialization

void CShapeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 여기에 저장 코드를 추가합니다.
	}
	else
	{
		// TODO: 여기에 로딩 코드를 추가합니다.
	}
}


// CShapeDoc 진단

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


// CShapeDoc 명령
