//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIImageView, UILabel;

@interface HTSShareProgressLoadingView : UIView
{
    double _progress;
    long long _status;
    UIView *_baseView;
    UIImageView *_progressView;
    CAShapeLayer *_progressLayer;
    UILabel *_progressLabel;
    UILabel *_titleLabel;
    long long _type;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIImageView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupSelfFrame;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_updateProgress;
- (void)_stopLoadingAnim;
- (void)_startLoadingAnim;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_showOnView:(id)arg1 animated:(_Bool)arg2;
- (void)showAnimated:(_Bool)arg1;
- (void)showOnView:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithType:(long long)arg1 title:(id)arg2;

@end

