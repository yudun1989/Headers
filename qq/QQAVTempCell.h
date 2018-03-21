//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/RichTinyTempCell.h>

@class CAShapeLayer, UIImageView, UIView;

@interface QQAVTempCell : RichTinyTempCell
{
    UIView *_selectView;
    UIImageView *_defaultTempIcon;
    _Bool _isSetCustomLoadingState;
    CAShapeLayer *_drawingPathLayer;
    UIImageView *_iconCover;
    _Bool _enableState;
}

@property(nonatomic) _Bool enableState; // @synthesize enableState=_enableState;
- (void)setCustomThemeColor:(id)arg1 customCoverIcon:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setDrawingPathColor:(id)arg1;
- (void)drawPath;
- (void)setState:(long long)arg1;
- (void)setCustomLoadingState:(_Bool)arg1;
- (void)setItem:(id)arg1;
- (void)setIconCoverShow:(_Bool)arg1;
- (void)setSelectCircleShow:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

