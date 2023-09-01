
// ThirdDoc.cpp : CThirdDoc 클래스의 구현
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


// CThirdDoc 생성/소멸

CThirdDoc::CThirdDoc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CThirdDoc::~CThirdDoc()
{
}

BOOL CThirdDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CThirdDoc serialization

void CThirdDoc::Serialize(CArchive& ar)
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


// CThirdDoc 진단

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


// CThirdDoc 명령
