#ifndef __CTP_QUOTATION_PROTOCAL_CTP_ZZOPT_H__
#define	__CTP_QUOTATION_PROTOCAL_CTP_ZZOPT_H__
#pragma pack(1)


typedef struct
{
	char						Key[20];					///< ������ֵ
	unsigned int				MarketID;					///< �г����
	unsigned int				MarketDate;					///< �г�����
	unsigned int				KindCount;					///< �������
	unsigned int				WareCount;					///< ��Ʒ����
} tagZZOptionMarketInfo_LF142;


typedef struct
{
	char						Key[20];					///< ������ֵ
	char						KindName[64];				///< ��������
	unsigned int				PriceRate;					///< �۸�Ŵ���[10�Ķ��ٴη�]
	unsigned int				LotSize;					///< һ�ֵ��ڼ��ź�Լ
	unsigned int				LotFactor;					///< ���֡�����
	unsigned int				PriceTick;					///< ��С�䶯��λ
	unsigned int				ContractMult;				///< ��Լ����
	char						UnderlyingCode[20];			///< ���֤ȯ����
	char						OptionType;					///< ��Ȩ���ͣ�'E' = ŷʽ��Ȩ 'A' = ��ʽ��Ȩ������Ȩ��
	unsigned int				PeriodsCount;				///< ����ʱ����Ϣ�б���
	unsigned int				MarketPeriods[10][2];		///< ����ʱ��������Ϣ�б�
} tagZZOptionKindDetail_LF143;


typedef struct
{
	char						Key[20];					///< ������ֵ
	unsigned int				MarketTime;					///< �г�ʱ��
	unsigned char				MarketStatus;				///< �г�״̬[0��ʼ�� 1������]
} tagZZOptionMarketStatus_HF144;


typedef struct
{
	char						Code[20];					///< ��Լ����
	char						Name[64];					///< ��Լ����
	unsigned int				Kind;						///< ֤ȯ����
	char						CallOrPut;					///< �Ϲ��Ϲ���'C' = �Ϲ� 'P' = �Ϲ�������Ȩ��
	unsigned int				XqPrice;					///< ��Ȩ�۸�[*�Ŵ���]
	unsigned int				StartDate;					///< �׸�������(YYYYMMDD)
	unsigned int				EndDate;					///< �������(YYYYMMDD)
	unsigned int				XqDate;						///< ��Ȩ��(YYYYMM)
	unsigned int				DeliveryDate;				///< ������(YYYYMMDD)
	unsigned int				ExpireDate;					///< ������(YYYYMMDD)
} tagZZOptionReferenceData_LF145;


typedef struct
{
	char						Code[20];					///< ��Լ����
	unsigned int				Open;						///< ���̼�[*�Ŵ���]
	unsigned int				Close;						///< ���ռ�[*�Ŵ���]
	unsigned int				PreClose;					///< ���ռ�[*�Ŵ���]
	unsigned int				UpperPrice;					///< ������ͣ�۸�[*�Ŵ���], 0��ʾ������
	unsigned int				LowerPrice;					///< ���յ�ͣ�۸�[*�Ŵ���], 0��ʾ������
	unsigned int				SettlePrice;				///< ����[*�Ŵ���]
	unsigned int				PreSettlePrice;				///< ��Լ���[*�Ŵ���]
	unsigned __int64			PreOpenInterest;			///< ���ճֲ���(��)
} tagZZOptionSnapData_LF146;


typedef struct
{
	char						Code[20];					///< ��Լ����
	unsigned int				Now;						///< ���¼�[*�Ŵ���]
	unsigned int				High;						///< ��߼�[*�Ŵ���]
	unsigned int				Low;						///< ��ͼ�[*�Ŵ���]
	double						Amount;						///< �ܳɽ����[Ԫ]
	unsigned __int64			Volume;						///< �ܳɽ���[��/��]
	unsigned __int64			Position;					///< �ֲ���
} tagZZOptionSnapData_HF147;


typedef struct
{
	unsigned int				Price;						///< ί�м۸�[* �Ŵ���]
	unsigned __int64			Volume;						///< ί����[��]
} tagZZOptionBuySellItem;


typedef struct
{
	char						Code[20];					///< ��Լ����
	tagZZOptionBuySellItem		Buy[5];						///< ���嵵
	tagZZOptionBuySellItem		Sell[5];					///< ���嵵
} tagZZOptionSnapBuySell_HF148;




#pragma pack()
#endif









