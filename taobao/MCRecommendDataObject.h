//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCRecommendData-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface MCRecommendDataObject : NSObject <MCRecommendData, NSCoding>
{
    _Bool _moreShow;
    float _priority;
    NSString *_name;
    long long _ttl;
    NSString *_iconUrl;
    NSArray *_list;
    NSString *_recommendType;
    NSString *_moreText;
    NSString *_moreUrl;
}

@property(copy, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(nonatomic) _Bool moreShow; // @synthesize moreShow=_moreShow;
@property(retain, nonatomic) NSString *recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) float priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) long long ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

