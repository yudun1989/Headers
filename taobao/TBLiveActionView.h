//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBLiveActionView : UIView
{
    UIView *_overlayView;
    CDUnknownBlockType _tapMaskBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapMaskBlock; // @synthesize tapMaskBlock=_tapMaskBlock;
@property(nonatomic) __weak UIView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)showInView:(id)arg1;
- (void)addOverLayView:(id)arg1;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

@end

