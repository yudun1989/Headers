//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHCommonRequest.h"

@class NSString;

@interface WEALTHFundAutoTransferOutUpdateReq : WEALTHCommonRequest
{
    NSString *_bankCardId;
    NSString *_transferOutAmount;
    NSString *_arrivingDay;
    NSString *_memo;
    NSString *_ruleId;
    NSString *_passwordType;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *arrivingDay; // @synthesize arrivingDay=_arrivingDay;
@property(retain, nonatomic) NSString *transferOutAmount; // @synthesize transferOutAmount=_transferOutAmount;
@property(retain, nonatomic) NSString *bankCardId; // @synthesize bankCardId=_bankCardId;
- (void).cxx_destruct;

@end

