//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface MOPCommentBriefInfo : NSObject
{
    int _totalCount;
    double _averageScore;
    NSArray *_briefTags;
}

+ (Class)briefTagsElementClass;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSArray *briefTags; // @synthesize briefTags=_briefTags;
@property(nonatomic) double averageScore; // @synthesize averageScore=_averageScore;
- (void).cxx_destruct;

@end

