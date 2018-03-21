//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface QQRelationSearchResult : NSObject
{
    _Bool _isPinyinMatched;
    _Bool _aiEditDistance;
    _Bool _isFunction;
    _Bool _isQiDianMaster;
    _Bool _isQiDianGroup;
    NSString *_searchKeyword;
    NSString *_majorText;
    NSString *_minorText;
    NSString *_typeText;
    NSMutableArray *_matchDiscussMember;
    NSMutableArray *_realMatchDiscussMember;
    NSObject *_model;
    NSString *_matchedText;
    long long _matchedTextType;
    unsigned long long _sortWeightValue;
    unsigned long long _aiDistanceValue;
    NSString *_aiEditTarget;
    long long _recentSessionCount;
    NSString *_withoutMatchedText;
    struct _NSRange _matchRange;
}

@property(nonatomic) _Bool isQiDianGroup; // @synthesize isQiDianGroup=_isQiDianGroup;
@property(nonatomic) _Bool isQiDianMaster; // @synthesize isQiDianMaster=_isQiDianMaster;
@property(retain, nonatomic) NSString *withoutMatchedText; // @synthesize withoutMatchedText=_withoutMatchedText;
@property(nonatomic) _Bool isFunction; // @synthesize isFunction=_isFunction;
@property(nonatomic) long long recentSessionCount; // @synthesize recentSessionCount=_recentSessionCount;
@property(retain, nonatomic) NSString *aiEditTarget; // @synthesize aiEditTarget=_aiEditTarget;
@property(nonatomic) unsigned long long aiDistanceValue; // @synthesize aiDistanceValue=_aiDistanceValue;
@property(nonatomic) _Bool aiEditDistance; // @synthesize aiEditDistance=_aiEditDistance;
@property(nonatomic) unsigned long long sortWeightValue; // @synthesize sortWeightValue=_sortWeightValue;
@property(nonatomic) _Bool isPinyinMatched; // @synthesize isPinyinMatched=_isPinyinMatched;
@property(nonatomic) long long matchedTextType; // @synthesize matchedTextType=_matchedTextType;
@property(retain, nonatomic) NSString *matchedText; // @synthesize matchedText=_matchedText;
@property(nonatomic) struct _NSRange matchRange; // @synthesize matchRange=_matchRange;
@property(retain, nonatomic) NSObject *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *realMatchDiscussMember; // @synthesize realMatchDiscussMember=_realMatchDiscussMember;
@property(retain, nonatomic) NSMutableArray *matchDiscussMember; // @synthesize matchDiscussMember=_matchDiscussMember;
@property(retain, nonatomic) NSString *typeText; // @synthesize typeText=_typeText;
@property(retain, nonatomic) NSString *minorText; // @synthesize minorText=_minorText;
@property(retain, nonatomic) NSString *majorText; // @synthesize majorText=_majorText;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void).cxx_destruct;

@end

