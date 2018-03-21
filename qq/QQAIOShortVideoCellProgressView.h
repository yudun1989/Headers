//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QQProgressBar, UIButton;
@protocol QQAIOShortVideoCellProgressViewDelegate;

@interface QQAIOShortVideoCellProgressView : UIView
{
    double _progress;
    long long _status;
    id <QQAIOShortVideoCellProgressViewDelegate> _delegate;
    int _xo;
    QQProgressBar *_progressView;
    UIButton *_statusBtn;
}

@property(nonatomic) long long status; // @dynamic status;
@property(nonatomic) double progress; // @dynamic progress;
- (void)fireStatusBtnEvent;
- (void)onStatusBtnClick:(id)arg1;
- (id)statusImage;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <QQAIOShortVideoCellProgressViewDelegate> delegate; // @dynamic delegate;

@end

