//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PEResizeControl;

@interface PECropRectView : UIView
{
    id _delegate;
    _Bool _showsGridMajor;
    _Bool _showsGridMinor;
    int _xo;
    PEResizeControl *_topLeftCornerView;
    PEResizeControl *_topRightCornerView;
    PEResizeControl *_bottomLeftCornerView;
    PEResizeControl *_bottomRightCornerView;
    PEResizeControl *_topEdgeView;
    PEResizeControl *_leftEdgeView;
    PEResizeControl *_bottomEdgeView;
    PEResizeControl *_rightEdgeView;
    struct CGRect _initialRect;
    _Bool _liveResizing;
}

@property(nonatomic, getter=isLiveResizing) _Bool liveResizing; // @synthesize liveResizing=_liveResizing;
- (struct CGRect)cropRectMakeWithResizeControlView:(id)arg1;
- (void)resizeConrolViewDidEndResizing:(id)arg1;
- (void)resizeConrolViewDidResize:(id)arg1;
- (void)resizeConrolViewDidBeginResizing:(id)arg1;
@property(nonatomic) _Bool showsGridMinor; // @dynamic showsGridMinor;
@property(nonatomic) _Bool showsGridMajor; // @dynamic showsGridMajor;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id delegate; // @dynamic delegate;

@end
