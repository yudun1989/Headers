//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SSThemedImageView, SSThemedLabel, TTImageView, TTWaitingView, UIView;
@protocol TSVShortVideoDataFetchManagerProtocol;

@interface TTHorizontalHuoShanLoadingCell : UICollectionViewCell
{
    _Bool _loading;
    id <TSVShortVideoDataFetchManagerProtocol> _dataFetchManager;
    unsigned long long _style;
    TTImageView *_backgroundImageView;
    TTWaitingView *_loadingView;
    UIView *_showMoreContainerView;
    SSThemedLabel *_showMoreTextLabel;
    SSThemedImageView *_showMoreArrowView;
}

@property(retain, nonatomic) SSThemedImageView *showMoreArrowView; // @synthesize showMoreArrowView=_showMoreArrowView;
@property(retain, nonatomic) SSThemedLabel *showMoreTextLabel; // @synthesize showMoreTextLabel=_showMoreTextLabel;
@property(retain, nonatomic) UIView *showMoreContainerView; // @synthesize showMoreContainerView=_showMoreContainerView;
@property(retain, nonatomic) TTWaitingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TTImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) id <TSVShortVideoDataFetchManagerProtocol> dataFetchManager; // @synthesize dataFetchManager=_dataFetchManager;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)layoutSubviews;

@end

