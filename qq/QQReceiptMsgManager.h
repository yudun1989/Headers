//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQBaseChatViewController;

@interface QQReceiptMsgManager : NSObject
{
    _Bool _isNowReceiptMode;
    _Bool _isSendingImg;
    QQBaseChatViewController *_currentChatVC;
}

+ (id)getInstance;
@property(nonatomic) QQBaseChatViewController *currentChatVC; // @synthesize currentChatVC=_currentChatVC;
@property(nonatomic) _Bool isSendingImg; // @synthesize isSendingImg=_isSendingImg;
@property(nonatomic) _Bool isNowReceiptMode; // @synthesize isNowReceiptMode=_isNowReceiptMode;
- (id)grayTipKeyForModel:(id)arg1;
- (void)setHadShowedGrayTipForModel:(id)arg1;
- (_Bool)shouldShowGrayTipForModel:(id)arg1;
- (void)ReportOutOfTimesIfNeeded;
- (void)checkReceiptMsgSendTimes;
- (void)addSendReceiptMsgTime;
- (int)getSendReceiptMsgLeftTimes;
- (int)getSendReceiptMsgMaxTimes;
- (_Bool)getReceiptMsgEnable;

@end

