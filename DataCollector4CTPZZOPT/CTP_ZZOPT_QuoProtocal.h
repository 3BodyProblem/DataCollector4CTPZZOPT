#ifndef __CTP_QUOTATION_PROTOCAL_CTP_ZZOPT_H__
#define	__CTP_QUOTATION_PROTOCAL_CTP_ZZOPT_H__
#pragma pack(1)


typedef struct
{
	char						Key[20];					///< 索引键值
	unsigned int				MarketID;					///< 市场编号
	unsigned int				MarketDate;					///< 市场日期
	unsigned int				KindCount;					///< 类别数量
	unsigned int				WareCount;					///< 商品数量
} tagZZOptionMarketInfo_LF142;


typedef struct
{
	char						Key[20];					///< 索引键值
	char						KindName[64];				///< 类别的名称
	unsigned int				PriceRate;					///< 价格放大倍数[10的多少次方]
	unsigned int				LotSize;					///< 一手等于几张合约
	unsigned int				LotFactor;					///< “手”比率
	unsigned int				PriceTick;					///< 最小变动价位
	unsigned int				ContractMult;				///< 合约乘数
	char						UnderlyingCode[20];			///< 标的证券代码
	unsigned char				DerivativeType;				///< 衍生品类型：美式认购0/认沽1 欧式认购2/认沽3
	unsigned int				PeriodsCount;				///< 交易时段信息列表长度
	unsigned int				MarketPeriods[10][2];		///< 交易时段描述信息列表
} tagZZOptionKindDetail_LF143;


typedef struct
{
	char						Key[20];					///< 索引键值
	unsigned int				MarketTime;					///< 市场时间
	unsigned char				MarketStatus;				///< 市场状态[0初始化 1行情中]
} tagZZOptionMarketStatus_HF144;


typedef struct
{
	char						Code[20];					///< 合约代码
	char						Name[64];					///< 合约名称
	unsigned int				Kind;						///< 证券类型
	unsigned int				XqPrice;					///< 行权价格[*放大倍数]
	unsigned int				StartDate;					///< 首个交易日(YYYYMMDD)
	unsigned int				EndDate;					///< 最后交易日(YYYYMMDD)
	unsigned int				XqDate;						///< 行权日(YYYYMM)
	unsigned int				DeliveryDate;				///< 交割日(YYYYMMDD)
	unsigned int				ExpireDate;					///< 到期日(YYYYMMDD)
} tagZZOptionReferenceData_LF145;


typedef struct
{
	char						Code[20];					///< 合约代码
	unsigned int				Open;						///< 开盘价[*放大倍数]
	unsigned int				Close;						///< 今收价[*放大倍数]
	unsigned int				PreClose;					///< 昨收价[*放大倍数]
	unsigned int				UpperPrice;					///< 当日涨停价格[*放大倍数], 0表示无限制
	unsigned int				LowerPrice;					///< 当日跌停价格[*放大倍数], 0表示无限制
	unsigned int				SettlePrice;				///< 今结价[*放大倍数]
	unsigned int				PreSettlePrice;				///< 合约昨结[*放大倍数]
	unsigned __int64			PreOpenInterest;			///< 昨日持仓量(张)
} tagZZOptionSnapData_LF146;


typedef struct
{
	char						Code[20];					///< 合约代码
	unsigned int				Now;						///< 最新价[*放大倍数]
	unsigned int				High;						///< 最高价[*放大倍数]
	unsigned int				Low;						///< 最低价[*放大倍数]
	double						Amount;						///< 总成交金额[元]
	unsigned __int64			Volume;						///< 总成交量[股/张]
	unsigned __int64			Position;					///< 持仓量
} tagZZOptionSnapData_HF147;


typedef struct
{
	unsigned int				Price;						///< 委托价格[* 放大倍数]
	unsigned __int64			Volume;						///< 委托量[股]
} tagZZOptionBuySellItem;


typedef struct
{
	char						Code[20];					///< 合约代码
	tagZZOptionBuySellItem		Buy[5];						///< 买五档
	tagZZOptionBuySellItem		Sell[5];					///< 卖五档
} tagZZOptionSnapBuySell_HF148;




#pragma pack()
#endif









