//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface IdOffsetPaire : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasOffsetUpseq;
    _Bool _hasOffsetBizId;
    long long _offsetUpseq;
    long long _offsetBizId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) long long offsetBizId; // @synthesize offsetBizId=_offsetBizId;
@property(nonatomic) long long offsetUpseq; // @synthesize offsetUpseq=_offsetUpseq;
@property(readonly) _Bool hasOffsetBizId; // @synthesize hasOffsetBizId=_hasOffsetBizId;
@property(readonly) _Bool hasOffsetUpseq; // @synthesize hasOffsetUpseq=_hasOffsetUpseq;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
