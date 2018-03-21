//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, QQMessageModel, UIImage;
@protocol QQXMLRichMessageCellViewDelegate;

@interface QQXMLMessageBaseView : UIView
{
    _Bool _highlighted;
    _Bool _isLongPress;
    _Bool _isHandleTouch;
    NSString *_actionUrl;
    id <QQXMLRichMessageCellViewDelegate> _delegate;
    UIImage *_bgImageNormal;
    UIImage *_bgImageSelected;
    UIImage *_indicatorIcon;
    id _userData;
    int _xo;
    QQMessageModel *_msgRef;
}

@property(nonatomic) QQMessageModel *msgRef; // @synthesize msgRef=_msgRef;
- (void)LongPressedEnded;
- (void)setIsLongPressed;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateIndicatorIconIndexes:(id)arg1;
- (struct CGPoint)indicatorIconLeftTopAnchor;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *actionUrl; // @dynamic actionUrl;
@property(retain, nonatomic) UIImage *bgImageNormal; // @dynamic bgImageNormal;
@property(retain, nonatomic) UIImage *bgImageSelected; // @dynamic bgImageSelected;
@property(nonatomic) id <QQXMLRichMessageCellViewDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) UIImage *indicatorIcon; // @dynamic indicatorIcon;
@property(retain, nonatomic) id userData; // @dynamic userData;

@end

