//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIORichCellView.h>

@class CAShapeLayer, QQLightCommentView, UIButton, UIView;

@interface QQAIORichImageCellView : QQAIORichCellView
{
    CAShapeLayer *_borderLayer;
    struct CGPoint _thumbCenter;
    UIButton *_lightIcon;
    QQLightCommentView *_lightCommentView;
    UIView *_highligtedView;
}

@property(retain, nonatomic) UIView *highligtedView; // @synthesize highligtedView=_highligtedView;
@property(retain, nonatomic) QQLightCommentView *lightCommentView; // @synthesize lightCommentView=_lightCommentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAioModel:(id)arg1;
- (void)updateCellView;
- (_Bool)cellImageIsFinish;
- (_Bool)shouldShowLightComment;
- (_Bool)canShowLightComment;
- (id)getLightCommentConfig;
- (void)handleClosePicLightComment;
- (void)handleSingleTap;
- (void)handleLongTap:(id)arg1;
- (void)prepareForReuse;
- (id)highlightSuperLayer;
- (void)setHighlighted:(_Bool)arg1;
- (void)willDrawBubble;
- (void)preparePaopao:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

