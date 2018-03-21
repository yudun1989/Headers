//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImageView, UIView;

@interface TBMyTaobaoRecommendMenu : NSObject
{
    UIImageView *_imageView;
    struct CGPoint _cornerPoint;
    UIView *_clickMask;
    _Bool _isShowing;
    CDUnknownBlockType _onMenuItemClick;
}

@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(copy, nonatomic) CDUnknownBlockType onMenuItemClick; // @synthesize onMenuItemClick=_onMenuItemClick;
- (void).cxx_destruct;
- (void)onContainerMaskClick:(id)arg1;
- (void)onMenuItemClick:(id)arg1;
- (void)removeFromContainer;
- (void)show:(_Bool)arg1;
- (id)initWithContainer:(id)arg1 cornerPoint:(struct CGPoint)arg2;

@end

