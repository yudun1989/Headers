//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TZBTransferInVerifyModel : NSObject
{
    NSString *_verifyId;
    NSString *_securityId;
    NSString *_bizOrderNo;
    NSString *_applyAmount;
}

@property(retain, nonatomic) NSString *applyAmount; // @synthesize applyAmount=_applyAmount;
@property(retain, nonatomic) NSString *bizOrderNo; // @synthesize bizOrderNo=_bizOrderNo;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
- (void).cxx_destruct;
- (id)initVerifyModelWithResult:(id)arg1;

@end

