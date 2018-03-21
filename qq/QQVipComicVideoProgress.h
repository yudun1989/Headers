//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQVIPFunctionComicProgressView.h>

@class UILabel, UIView;

@interface QQVipComicVideoProgress : QQVIPFunctionComicProgressView
{
    _Bool _videoTimeHasHours;
    double _maxWidth;
    double _maxHeight;
    UILabel *_videoTimePassedLabel;
    UILabel *_videoTimeTotalLabel;
    UIView *_totalTimeView;
    UIView *_cacheTimeView;
}

@property(retain, nonatomic) UIView *cacheTimeView; // @synthesize cacheTimeView=_cacheTimeView;
@property(retain, nonatomic) UIView *totalTimeView; // @synthesize totalTimeView=_totalTimeView;
@property(nonatomic) _Bool videoTimeHasHours; // @synthesize videoTimeHasHours=_videoTimeHasHours;
@property(retain, nonatomic) UILabel *videoTimeTotalLabel; // @synthesize videoTimeTotalLabel=_videoTimeTotalLabel;
@property(retain, nonatomic) UILabel *videoTimePassedLabel; // @synthesize videoTimePassedLabel=_videoTimePassedLabel;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProgressText:(long long)arg1 total:(long long)arg2;
- (void)setCacheTimeProgress:(double)arg1;
- (void)commonInit;
- (id)init;

@end

