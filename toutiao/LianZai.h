//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface LianZai : ExploreOriginalData
{
    NSString *_abstract;
    NSArray *_actionList;
    NSArray *_chapterList;
    NSDictionary *_coverImageInfo;
    NSArray *_filterWords;
    NSDictionary *_mediaInfo;
    NSString *_openURL;
    NSNumber *_serialID;
    NSNumber *_serialType;
    NSString *_source;
    NSString *_sourceOpenURL;
    NSString *_title;
    NSNumber *_serialStyle;
    NSString *_showMoreText;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) NSString *showMoreText; // @synthesize showMoreText=_showMoreText;
@property(retain, nonatomic) NSNumber *serialStyle; // @synthesize serialStyle=_serialStyle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *sourceOpenURL; // @synthesize sourceOpenURL=_sourceOpenURL;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber *serialType; // @synthesize serialType=_serialType;
@property(retain, nonatomic) NSNumber *serialID; // @synthesize serialID=_serialID;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSDictionary *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(retain, nonatomic) NSDictionary *coverImageInfo; // @synthesize coverImageInfo=_coverImageInfo;
@property(retain, nonatomic) NSArray *chapterList; // @synthesize chapterList=_chapterList;
@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(retain, nonatomic) NSString *abstract; // @synthesize abstract=_abstract;
- (void).cxx_destruct;
- (id)readedInfo;
- (id)readedTitle;
- (id)newestInfo;
- (id)newestTitle;
- (id)coverImageModel;
- (void)updateWithDictionary:(id)arg1;

@end

