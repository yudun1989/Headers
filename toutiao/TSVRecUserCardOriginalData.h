//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSDictionary, TSVRecUserCardModel;

@interface TSVRecUserCardOriginalData : ExploreOriginalData
{
    NSDictionary *_originalDict;
    TSVRecUserCardModel *_cardModel;
}

+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) TSVRecUserCardModel *cardModel; // @synthesize cardModel=_cardModel;
@property(copy, nonatomic) NSDictionary *originalDict; // @synthesize originalDict=_originalDict;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;

@end

