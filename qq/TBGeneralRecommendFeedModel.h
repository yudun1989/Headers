//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString, TBGeneralFeedModel;

@interface TBGeneralRecommendFeedModel : QQModel
{
    TBGeneralFeedModel *_recommendFeed;
    unsigned long long _recommendID;
    NSString *_titleWording;
    NSString *_blurb;
}

+ (id)createWithPBData:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *blurb; // @synthesize blurb=_blurb;
@property(retain, nonatomic) NSString *titleWording; // @synthesize titleWording=_titleWording;
@property(nonatomic) unsigned long long recommendID; // @synthesize recommendID=_recommendID;
@property(retain, nonatomic) TBGeneralFeedModel *recommendFeed; // @synthesize recommendFeed=_recommendFeed;
- (void)dealloc;
- (void)removeFakeFeedVideoInfo;

@end

