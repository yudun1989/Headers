//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSArray, NSDictionary, NSNumber;

@interface Book : ExploreOriginalData
{
    NSArray *_bookList;
    NSNumber *_serialStyle;
    NSDictionary *_moreInfo;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) NSDictionary *moreInfo; // @synthesize moreInfo=_moreInfo;
@property(copy, nonatomic) NSNumber *serialStyle; // @synthesize serialStyle=_serialStyle;
@property(retain, nonatomic) NSArray *bookList; // @synthesize bookList=_bookList;
- (void).cxx_destruct;
- (id)moreInfoModel;
- (id)bookListModels;
- (void)updateWithDictionary:(id)arg1;

@end

