//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWMessageBody.h"

#import "WXSDWebDataManagerDelegate-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface YWMessageBodyVoice : YWMessageBody <WXSDWebDataManagerDelegate>
{
    _Bool _isTribeMessage;
    NSData *_messageVoiceData;
    double _messageVoiceDuration;
    NSString *_audioText;
    NSMutableArray *_fetchingAttachmentURLs;
    NSString *_audioDataURL;
    CDUnknownBlockType _getVoiceProgressBlock;
    CDUnknownBlockType _getVoiceCompletionBlock;
}

+ (id)validWXMessageType;
+ (id)makeMessageBodyWithWWMessage:(id)arg1;
@property(nonatomic) _Bool isTribeMessage; // @synthesize isTribeMessage=_isTribeMessage;
@property(copy, nonatomic) CDUnknownBlockType getVoiceCompletionBlock; // @synthesize getVoiceCompletionBlock=_getVoiceCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType getVoiceProgressBlock; // @synthesize getVoiceProgressBlock=_getVoiceProgressBlock;
@property(copy, nonatomic) NSString *audioDataURL; // @synthesize audioDataURL=_audioDataURL;
@property(retain, nonatomic) NSMutableArray *fetchingAttachmentURLs; // @synthesize fetchingAttachmentURLs=_fetchingAttachmentURLs;
@property(copy, nonatomic) NSString *audioText; // @synthesize audioText=_audioText;
@property(nonatomic) double messageVoiceDuration; // @synthesize messageVoiceDuration=_messageVoiceDuration;
@property(retain, nonatomic) NSData *messageVoiceData; // @synthesize messageVoiceData=_messageVoiceData;
- (void).cxx_destruct;
- (void)asyncGetVoiceDataWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)verifyContent;
@property(readonly, copy) NSString *description;
- (id)initWithMessageVoiceData:(id)arg1 duration:(double)arg2 audioText:(id)arg3;
- (id)initWithMessageVoiceData:(id)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

