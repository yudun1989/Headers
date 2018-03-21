//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSInnerFeedTilesItem : TBJSONModel
{
    NSString *_beginTime;
    NSString *_endTime;
    NSString *_marketUrl;
    NSString *_fairyGifUrl;
    NSString *_ongoingPath;
    NSString *_expiredPath;
}

@property(copy, nonatomic) NSString *expiredPath; // @synthesize expiredPath=_expiredPath;
@property(copy, nonatomic) NSString *ongoingPath; // @synthesize ongoingPath=_ongoingPath;
@property(copy, nonatomic) NSString *fairyGifUrl; // @synthesize fairyGifUrl=_fairyGifUrl;
@property(copy, nonatomic) NSString *marketUrl; // @synthesize marketUrl=_marketUrl;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

