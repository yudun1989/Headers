//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary;
@protocol QZVideoEndRecommendViewDelegate;

@interface QZVideoEndRecommendView : UIView
{
    NSMutableDictionary *_titileFrames;
    NSMutableDictionary *_photoFrames;
    _Bool _isLastPage;
    long long _recommLayoutMode;
    NSArray *_feedModels;
    long long _pageIndex;
    id <QZVideoEndRecommendViewDelegate> _endRecommendViewDelegate;
    struct CGRect _endVideoRect;
}

@property(nonatomic) id <QZVideoEndRecommendViewDelegate> endRecommendViewDelegate; // @synthesize endRecommendViewDelegate=_endRecommendViewDelegate;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property(retain, nonatomic) NSArray *feedModels; // @synthesize feedModels=_feedModels;
@property(nonatomic) struct CGRect endVideoRect; // @synthesize endVideoRect=_endVideoRect;
@property(nonatomic) long long recommLayoutMode; // @synthesize recommLayoutMode=_recommLayoutMode;

@end

