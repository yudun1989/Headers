//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MASConstraint, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol MBKBannerClickedDelegate;

@interface MBKParkingTopBanner : UIView
{
    _Bool _isShow;
    id <MBKBannerClickedDelegate> _delegate;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_content;
    NSString *_targetURL;
    double _offset;
    MASConstraint *_detailLabelHeightConstraint;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) MASConstraint *detailLabelHeightConstraint; // @synthesize detailLabelHeightConstraint=_detailLabelHeightConstraint;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) __weak id <MBKBannerClickedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapClicked:(id)arg1;
- (void)unShow;
- (void)showUpdateWith:(id)arg1 defaultIcon:(id)arg2 title:(id)arg3 content:(id)arg4 clickURL:(id)arg5;
- (void)showUpdateWith:(id)arg1 title:(id)arg2 content:(id)arg3;
- (void)showInView:(id)arg1 offset:(double)arg2;
- (void)layoutSubviews;
- (id)initWith:(id)arg1 defaultIcon:(id)arg2 title:(id)arg3 content:(id)arg4 clickURL:(id)arg5;
- (id)initWith:(id)arg1 title:(id)arg2 content:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
