//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSArray, NSDictionary, NSString;

@interface PopularHashtagData : ExploreOriginalData
{
    NSArray *_forumModelArray;
    NSString *_hashtagPrimaryID;
    NSString *_title;
    NSDictionary *_showMore;
    NSDictionary *_icon;
    NSArray *_forumList;
}

+ (id)updateWithDictionary:(id)arg1 uniqueID:(id)arg2;
+ (id)objectForCategory:(id)arg1 uniqueID:(id)arg2;
+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(copy, nonatomic) NSArray *forumList; // @synthesize forumList=_forumList;
@property(copy, nonatomic) NSDictionary *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSDictionary *showMore; // @synthesize showMore=_showMore;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *hashtagPrimaryID; // @synthesize hashtagPrimaryID=_hashtagPrimaryID;
- (void).cxx_destruct;
- (id)nightIconURL;
- (id)dayIconURL;
- (id)showMoreSchema;
- (id)showMoreText;
@property(copy, nonatomic) NSArray *forumModelArray; // @synthesize forumModelArray=_forumModelArray;
- (void)updateWithDictionary:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

