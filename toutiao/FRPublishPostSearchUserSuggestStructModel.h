//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber;
@protocol FRPublishPostSearchUserStructModel><Optional;

@interface FRPublishPostSearchUserSuggestStructModel : JSONModel
{
    NSNumber *_offset;
    long long _has_more;
    NSArray<FRPublishPostSearchUserStructModel><Optional> *_following;
    NSArray<FRPublishPostSearchUserStructModel><Optional> *_suggest;
}

@property(retain, nonatomic) NSArray<FRPublishPostSearchUserStructModel><Optional> *suggest; // @synthesize suggest=_suggest;
@property(retain, nonatomic) NSArray<FRPublishPostSearchUserStructModel><Optional> *following; // @synthesize following=_following;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

