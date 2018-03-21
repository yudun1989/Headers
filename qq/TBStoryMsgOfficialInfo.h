//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBStoryMsgOfficialInfo : NSObject
{
    _Bool _isBigV;
    unsigned int _pushTime;
    unsigned int _urlType;
    unsigned int _jumpType;
    unsigned long long _officialUid;
    NSString *_officialUnionId;
    NSString *_content;
    NSString *_coverUrl;
    NSString *_jumpUrl;
}

@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) unsigned int urlType; // @synthesize urlType=_urlType;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int pushTime; // @synthesize pushTime=_pushTime;
@property(copy, nonatomic) NSString *officialUnionId; // @synthesize officialUnionId=_officialUnionId;
@property(nonatomic) _Bool isBigV; // @synthesize isBigV=_isBigV;
@property(nonatomic) unsigned long long officialUid; // @synthesize officialUid=_officialUid;
- (void)dealloc;

@end

