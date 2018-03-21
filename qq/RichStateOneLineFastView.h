//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class RichStateModel, UIImageView, UILabel;

@interface RichStateOneLineFastView : UIView
{
    UIImageView *_actionIcon;
    RichStateModel *_rich;
    int _xo;
    _Bool _enableHilighted;
    UILabel *_richStateText;
}

+ (struct CGSize)getViewSizeWithStateModel:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
@property(retain, nonatomic) UILabel *richStateText; // @synthesize richStateText=_richStateText;
@property(nonatomic) _Bool enableHilighted; // @synthesize enableHilighted=_enableHilighted;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getRichStateText;
- (long long)getRichStateTextWidth;
- (void)richStateCallback:(id)arg1;
- (void)cleanUp;
- (void)layoutSubviews;
- (void)setRichStateColor:(id)arg1 highlightColor:(id)arg2;
- (void)setRichStateModel:(id)arg1;
- (void)unRegisterNotifications;
- (void)registerNotifications;
- (void)dealloc;
- (void)setRichLabelWithFont:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithFrame:(struct CGRect)arg1 font:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIImageView *actionIcon; // @dynamic actionIcon;
@property(retain, nonatomic) RichStateModel *rich; // @dynamic rich;

@end

