//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPBaseReqVO.h"

@class NSString;

@interface PPApplyPeerPayReq : PPBaseReqVO
{
    _Bool _needResendRandomCode;
    NSString *_bizNo;
    NSString *_bizType;
    NSString *_message;
    NSString *_emotionID;
    NSString *_peerPayAccount;
    NSString *_canAddContact;
    NSString *_peerPayUserID;
    NSString *_randomCode;
    NSString *_riskId;
}

@property(retain, nonatomic) NSString *riskId; // @synthesize riskId=_riskId;
@property(retain, nonatomic) NSString *randomCode; // @synthesize randomCode=_randomCode;
@property(nonatomic) _Bool needResendRandomCode; // @synthesize needResendRandomCode=_needResendRandomCode;
@property(retain, nonatomic) NSString *peerPayUserID; // @synthesize peerPayUserID=_peerPayUserID;
@property(retain, nonatomic) NSString *canAddContact; // @synthesize canAddContact=_canAddContact;
@property(retain, nonatomic) NSString *peerPayAccount; // @synthesize peerPayAccount=_peerPayAccount;
@property(retain, nonatomic) NSString *emotionID; // @synthesize emotionID=_emotionID;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
- (void).cxx_destruct;

@end

