
// SecondDoc.cpp : CSecondDoc 클래스의 구현
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


// CSecondDoc 생성/소멸

CSecondDoc::CSecondDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CSecondDoc::~CSecondDoc()
{
}

BOOL CSecondDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CSecondDoc serialization

void CSecondDoc::Serialize(CArchive& ar)
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


// CSecondDoc 진단

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


// CSecondDoc 명령
