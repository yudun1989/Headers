//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APShareServiceCardControlDelegate-Protocol.h"
#import "SafePayDelegate-Protocol.h"

@class APContactInfo, APShareServiceCardControl, KABAOPRODPresentMsgResult, NSString;

@interface ALPPresentUtil : NSObject <SafePayDelegate, APShareServiceCardControlDelegate>
{
    _Bool _hasStartSPSafePay;
    NSString *_passId;
    APContactInfo *_contactInfo;
    KABAOPRODPresentMsgResult *_presentInfo;
    NSString *_uuid;
    APShareServiceCardControl *_cardControl;
    NSString *_inputText;
    CDUnknownBlockType _successBLock;
    CDUnknownBlockType _failureBLock;
}

+ (id)doPresentWithPassId:(id)arg1 title:(id)arg2 desc:(id)arg3 tips:(id)arg4 imgString:(id)arg5 toUid:(id)arg6 presentInfo:(id)arg7 needInput:(_Bool)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
@property(nonatomic) _Bool hasStartSPSafePay; // @synthesize hasStartSPSafePay=_hasStartSPSafePay;
@property(copy, nonatomic) CDUnknownBlockType failureBLock; // @synthesize failureBLock=_failureBLock;
@property(copy, nonatomic) CDUnknownBlockType successBLock; // @synthesize successBLock=_successBLock;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(retain, nonatomic) APShareServiceCardControl *cardControl; // @synthesize cardControl=_cardControl;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) KABAOPRODPresentMsgResult *presentInfo; // @synthesize presentInfo=_presentInfo;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;
- (void)cardControl:(id)arg1 didClickButton:(int)arg2;
- (void)safepayDidFinishWithResult:(struct MQPResult *)arg1;
- (id)constructParamsFromDic:(id)arg1;
- (_Bool)wakeupSafePay;
- (void)oldPresentPass:(id)arg1;
- (void)newPresentPass;
- (void)_doPresentPassWithToken:(id)arg1 uuid:(id)arg2;
- (void)doPresentPass;
- (_Bool)isH5URL:(id)arg1;
- (id)initWithPassId:(id)arg1 title:(id)arg2 desc:(id)arg3 tips:(id)arg4 imgString:(id)arg5 toUid:(id)arg6 presentInfo:(id)arg7 needInput:(_Bool)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (void)dismiss;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

