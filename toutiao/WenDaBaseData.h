//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSArray, NSDictionary, NSNumber, NSString, WDAnswerEntity, WDQuestionEntity;

@interface WenDaBaseData : ExploreOriginalData
{
    NSString *_ansid;
    NSString *_qid;
    NSDictionary *_extra;
    NSDictionary *_showLayer;
    NSNumber *_behotTime;
    NSNumber *_cellType;
    NSNumber *_cursor;
    NSNumber *_showTopSeparator;
    NSNumber *_showBottomSeparator;
    NSNumber *_showDislike;
    NSArray *_filterWords;
    WDQuestionEntity *_question;
    WDAnswerEntity *_answer;
}

+ (id)keyMapping;
+ (void)deleteDBFileIfNeeded;
+ (long long)dbVersion;
+ (unsigned long long)cacheLevel;
+ (id)persistentProperties;
+ (id)dbName;
+ (id)objectWithDictionary:(id)arg1;
@property(retain, nonatomic) WDAnswerEntity *answer; // @synthesize answer=_answer;
@property(retain, nonatomic) WDQuestionEntity *question; // @synthesize question=_question;
@property(copy, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(copy, nonatomic) NSNumber *showDislike; // @synthesize showDislike=_showDislike;
@property(copy, nonatomic) NSNumber *showBottomSeparator; // @synthesize showBottomSeparator=_showBottomSeparator;
@property(copy, nonatomic) NSNumber *showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(copy, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSNumber *cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSNumber *behotTime; // @synthesize behotTime=_behotTime;
@property(copy, nonatomic) NSDictionary *showLayer; // @synthesize showLayer=_showLayer;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(copy, nonatomic) NSString *ansid; // @synthesize ansid=_ansid;
- (void).cxx_destruct;
- (void)save;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

