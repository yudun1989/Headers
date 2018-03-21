//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSInvocation, NSMutableDictionary, UIImageView, UILabel;

@interface QQTabItem : UIControl
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    NSMutableDictionary *_titles;
    NSMutableDictionary *_images;
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_titleColors;
    NSMutableDictionary *_titleShadowColors;
    double _spaceHeightBetweenImageAndTitle;
    CDUnknownBlockType _tabItemDidTapedBlock;
    NSInvocation *_sendTouchActionInvocation;
    NSInvocation *_setUnhighlightedInvocation;
    double _startTime;
    _Bool _disableSendActionDelay;
}

@property(nonatomic) _Bool disableSendActionDelay; // @synthesize disableSendActionDelay=_disableSendActionDelay;
@property(nonatomic) double spaceHeightBetweenImageAndTitle; // @synthesize spaceHeightBetweenImageAndTitle=_spaceHeightBetweenImageAndTitle;
@property(copy, nonatomic) CDUnknownBlockType tabItemDidTapedBlock; // @synthesize tabItemDidTapedBlock=_tabItemDidTapedBlock;
- (void)setHighlighted:(_Bool)arg1;
- (void)sendTouchActionDelay;
- (void)setUnhighlightedAfterDelay:(double)arg1;
- (void)itemTaped:(id)arg1;
@property(readonly, nonatomic, getter=imageView) UIImageView *imageView;
@property(readonly, nonatomic, getter=titleLabel) UILabel *titleLabel;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

