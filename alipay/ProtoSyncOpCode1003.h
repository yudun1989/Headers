//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ProtoSyncOpCode1003 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    NSMutableArray *_bizSyncInfo;
    NSMutableArray *_bucketSyncInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *bucketSyncInfo; // @synthesize bucketSyncInfo=_bucketSyncInfo;
@property(retain, nonatomic) NSMutableArray *bizSyncInfo; // @synthesize bizSyncInfo=_bizSyncInfo;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addBucketSyncInfo:(id)arg1;
- (void)setBucketSyncInfoArray:(id)arg1;
- (void)addBizSyncInfo:(id)arg1;
- (void)setBizSyncInfoArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

