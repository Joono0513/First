
// ThirdDoc.h : CThirdDoc Ŭ������ �������̽�
//


#pragma once


class CThirdDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CThirdDoc();
	DECLARE_DYNCREATE(CThirdDoc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// �����Դϴ�.
public:
	virtual ~CThirdDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


