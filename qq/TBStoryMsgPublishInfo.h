//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBStoryMsgPublishInfo : NSObject
{
    _Bool _isBigV;
    _Bool _isVideoDeleted;
    unsigned int _publishTime;
    unsigned int _shareGroupProperty;
    unsigned long long _publishUid;
    NSString *_publishUnionId;
    NSString *_shareGroupName;
    NSString *_shareGroupUnionId;
}

@property(nonatomic) unsigned int shareGroupProperty; // @synthesize shareGroupProperty=_shareGroupProperty;
@property(copy, nonatomic) NSString *shareGroupUnionId; // @synthesize shareGroupUnionId=_shareGroupUnionId;
@property(copy, nonatomic) NSString *shareGroupName; // @synthesize shareGroupName=_shareGroupName;
@property(nonatomic) _Bool isVideoDeleted; // @synthesize isVideoDeleted=_isVideoDeleted;
@property(copy, nonatomic) NSString *publishUnionId; // @synthesize publishUnionId=_publishUnionId;
@property(nonatomic) _Bool isBigV; // @synthesize isBigV=_isBigV;
@property(nonatomic) unsigned int publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) unsigned long long publishUid; // @synthesize publishUid=_publishUid;
- (void)dealloc;

@end

