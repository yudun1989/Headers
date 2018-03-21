//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XFMessageStorageProtocol-Protocol.h"

@class KCMessageObject, NSString;

@interface KCMessageStorage : NSObject <XFMessageStorageProtocol>
{
    KCMessageObject *_object;
}

@property(retain, nonatomic) KCMessageObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)connectionForPath:(id)arg1;
- (id)messageFromObject:(id)arg1;
- (id)storagePathForThreadID:(id)arg1;
- (id)fetchMessageWithDescription:(id)arg1 threadID:(id)arg2 errorPtr:(id *)arg3;
- (id)fetchMessageWithDescription:(id)arg1 threadID:(id)arg2;
- (_Bool)markMessagesAsDelete:(id)arg1 threadID:(id)arg2;
- (_Bool)cleanMessagesForThread:(id)arg1;
- (_Bool)deleteMessagesWhere:(id)arg1 threadID:(id)arg2;
- (_Bool)updateMessage:(id)arg1 withUpdateBlock:(CDUnknownBlockType)arg2;
- (_Bool)saveMessages:(id)arg1 threadID:(id)arg2 replace:(_Bool)arg3 errorPrt:(id *)arg4;
- (id)dbConnectionForThreadID:(id)arg1;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

