//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCRBaseRespVO.h"

@class CCRBankInfo, CCRBillInfo, CCROrderInfo, CCRUserCardInfo;

@interface CCRGetCreditCardDetailDEPRespVO : CCRBaseRespVO
{
    CCRBankInfo *_bankInfo;
    CCRUserCardInfo *_userCardInfo;
    CCRBillInfo *_billInfo;
    CCROrderInfo *_orderInfo;
}

@property(retain, nonatomic) CCROrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) CCRBillInfo *billInfo; // @synthesize billInfo=_billInfo;
@property(retain, nonatomic) CCRUserCardInfo *userCardInfo; // @synthesize userCardInfo=_userCardInfo;
@property(retain, nonatomic) CCRBankInfo *bankInfo; // @synthesize bankInfo=_bankInfo;
- (void).cxx_destruct;

@end

