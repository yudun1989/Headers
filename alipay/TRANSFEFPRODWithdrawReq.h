//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TRANSFEFPRODWithdrawReq : NSObject
{
    _Bool _needResendRandomCode;
    NSString *_bankAccountNo;
    NSString *_bankMark;
    NSString *_arrivedDateType;
    NSString *_amount;
    NSString *_payPassword;
    NSString *_passwordType;
    NSString *_randomCode;
    NSString *_fillType;
    NSString *_exchangePoints;
    NSString *_exchangeRate;
    NSString *_feeRate;
    NSString *_feeAmount;
    NSString *_exchangeAmount;
}

@property(retain, nonatomic) NSString *exchangeAmount; // @synthesize exchangeAmount=_exchangeAmount;
@property(retain, nonatomic) NSString *feeAmount; // @synthesize feeAmount=_feeAmount;
@property(retain, nonatomic) NSString *feeRate; // @synthesize feeRate=_feeRate;
@property(retain, nonatomic) NSString *exchangeRate; // @synthesize exchangeRate=_exchangeRate;
@property(retain, nonatomic) NSString *exchangePoints; // @synthesize exchangePoints=_exchangePoints;
@property(retain, nonatomic) NSString *fillType; // @synthesize fillType=_fillType;
@property(retain, nonatomic) NSString *randomCode; // @synthesize randomCode=_randomCode;
@property(nonatomic) _Bool needResendRandomCode; // @synthesize needResendRandomCode=_needResendRandomCode;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *payPassword; // @synthesize payPassword=_payPassword;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *arrivedDateType; // @synthesize arrivedDateType=_arrivedDateType;
@property(retain, nonatomic) NSString *bankMark; // @synthesize bankMark=_bankMark;
@property(retain, nonatomic) NSString *bankAccountNo; // @synthesize bankAccountNo=_bankAccountNo;
- (void).cxx_destruct;

@end

