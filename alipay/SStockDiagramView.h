//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CSGTrendView, NSMutableDictionary, NSString, SPankouView, SSegmentButtonView, SStockLoadingView, StockDetailConfig, StockMAView;
@protocol SStockDiagramViewDelegate;

@interface SStockDiagramView : UIView
{
    NSString *_currentBiz;
    unsigned long long _viewType;
    unsigned long long _currentView;
    SSegmentButtonView *_chartSegmentView;
    CSGTrendView *_trendView;
    StockDetailConfig *_config;
    StockMAView *_infoView;
    SPankouView *_pankouView;
    SStockLoadingView *_loadingView;
    NSString *_key;
    id <SStockDiagramViewDelegate> _delegate;
    unsigned long long _currentStatus;
    NSMutableDictionary *_status;
}

+ (double)heightOfView;
@property(retain, nonatomic) NSMutableDictionary *status; // @synthesize status=_status;
@property(nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(nonatomic) __weak id <SStockDiagramViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) SStockLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SPankouView *pankouView; // @synthesize pankouView=_pankouView;
@property(retain, nonatomic) StockMAView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) StockDetailConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) CSGTrendView *trendView; // @synthesize trendView=_trendView;
@property(retain, nonatomic) SSegmentButtonView *chartSegmentView; // @synthesize chartSegmentView=_chartSegmentView;
@property(nonatomic) unsigned long long currentView; // @synthesize currentView=_currentView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didClickNonRecoverdBtn:(id)arg1;
- (id)currentRecoverSelectedValue;
- (void)updateView;
- (void)updateInfoView:(id)arg1;
- (void)updatePanKouView:(id)arg1;
- (void)updateData:(id)arg1 with:(id)arg2 merge:(_Bool)arg3;
- (void)removeAllGestures;
- (void)addGestures;
- (void)reset;
- (void)showErrorView:(_Bool)arg1;
- (id)currentKey;
- (id)initWithFrame:(struct CGRect)arg1;

@end

