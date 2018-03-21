//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSMutableArray;

@interface AMPCheckPacket : AMPNetPacket
{
    NSMutableArray *_syncIdList;
    unsigned long long _messageType;
    unsigned long long _messageSubType;
}

@property(nonatomic) unsigned long long messageSubType; // @synthesize messageSubType=_messageSubType;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSMutableArray *syncIdList; // @synthesize syncIdList=_syncIdList;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithSyncIdList:(id)arg1 messageType:(unsigned long long)arg2 messageSubType:(unsigned long long)arg3;

@end

