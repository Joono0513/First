
// SecondDoc.h : CSecondDoc Ŭ������ �������̽�
//


#pragma once


class CSecondDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CSecondDoc();
	DECLARE_DYNCREATE(CSecondDoc)

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
	virtual ~CSecondDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


