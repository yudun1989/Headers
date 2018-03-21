//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface QQ2018TableDragCoverView : UIView
{
    UIView *_topPartView;
    UIView *_centerPartView;
    UIView *_bottomPartView;
    UILabel *_bottomLabel;
    UILabel *_topLabel;
    UIImageView *_leftTopImageView;
    UIImageView *_rightTopImageView;
    UIImageView *_bottomImageView;
}

@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImageView *rightTopImageView; // @synthesize rightTopImageView=_rightTopImageView;
@property(retain, nonatomic) UIImageView *leftTopImageView; // @synthesize leftTopImageView=_leftTopImageView;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIView *bottomPartView; // @synthesize bottomPartView=_bottomPartView;
@property(retain, nonatomic) UIView *centerPartView; // @synthesize centerPartView=_centerPartView;
@property(retain, nonatomic) UIView *topPartView; // @synthesize topPartView=_topPartView;
- (void)layoutSubviews;
- (void)reloadSubviewsFrame;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

