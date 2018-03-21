//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAnimatedButton.h"

@class AWEMarkViewUIConfigModel, UIImageView, UILabel;

@interface AWEMarkView : AWEAnimatedButton
{
    CDUnknownBlockType _onClickedBlock;
    AWEMarkViewUIConfigModel *_uiConfigModel;
    UIImageView *_containerView;
    UIImageView *_markImageView;
    UILabel *_markLabel;
}

@property(retain, nonatomic) UILabel *markLabel; // @synthesize markLabel=_markLabel;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(retain, nonatomic) UIImageView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AWEMarkViewUIConfigModel *uiConfigModel; // @synthesize uiConfigModel=_uiConfigModel;
@property(copy, nonatomic) CDUnknownBlockType onClickedBlock; // @synthesize onClickedBlock=_onClickedBlock;
- (void).cxx_destruct;
- (void)onButtonClicked;
- (void)setMarkBackgroundColor:(id)arg1;
- (void)setMarkImage:(id)arg1;
- (void)setMarkBackgroundImage:(id)arg1;
- (void)setMarkText:(id)arg1;
- (void)setMarkTextColor:(id)arg1;
- (void)updateRightMargin:(double)arg1;
- (void)updateLeftMargin:(double)arg1;
- (void)setMarkNumberOfLinesZero;
- (void)setupUI;
- (id)init;
- (id)initWithUIConfigModel:(id)arg1;

@end

