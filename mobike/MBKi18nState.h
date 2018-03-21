//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBKJsonModelObject-Protocol.h"

@class NSString;

@interface MBKi18nState : NSObject <MBKJsonModelObject>
{
    _Bool _needCreditCard;
    _Bool _unlockBlueToothSWState;
    _Bool _unlockPositiveBalanceSWState;
    _Bool _isDepositFree;
    _Bool _pendingPayDeposit;
    _Bool _pendingRepayDeposit;
    _Bool _needFirstTopup;
    _Bool _needShowOBAnimation;
    long long _depositFreeType;
    long long _depositState;
    long long _trialPeriodState;
}

+ (id)jsonKeyToPropertyNameMap;
+ (id)jsonKeyToClassNameMap;
@property(nonatomic) _Bool needShowOBAnimation; // @synthesize needShowOBAnimation=_needShowOBAnimation;
@property(nonatomic) _Bool needFirstTopup; // @synthesize needFirstTopup=_needFirstTopup;
@property(nonatomic) _Bool pendingRepayDeposit; // @synthesize pendingRepayDeposit=_pendingRepayDeposit;
@property(nonatomic) _Bool pendingPayDeposit; // @synthesize pendingPayDeposit=_pendingPayDeposit;
@property(nonatomic) _Bool isDepositFree; // @synthesize isDepositFree=_isDepositFree;
@property(nonatomic) long long trialPeriodState; // @synthesize trialPeriodState=_trialPeriodState;
@property(nonatomic) _Bool unlockPositiveBalanceSWState; // @synthesize unlockPositiveBalanceSWState=_unlockPositiveBalanceSWState;
@property(nonatomic) _Bool unlockBlueToothSWState; // @synthesize unlockBlueToothSWState=_unlockBlueToothSWState;
@property(nonatomic) _Bool needCreditCard; // @synthesize needCreditCard=_needCreditCard;
@property(nonatomic) long long depositState; // @synthesize depositState=_depositState;
@property(nonatomic) long long depositFreeType; // @synthesize depositFreeType=_depositFreeType;
- (id)initWithDictionary:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
