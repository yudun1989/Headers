//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSString, QZPhotoBrowserInteractivePopAnimator, QZPhotoBrowserInteractivePushAnimator, QZPhotoBrowserPercentDrivenInteractive, UIImage, UIPanGestureRecognizer;

@interface QZPhotoBrowserInteractiveAnimatedTransition : NSObject <UINavigationControllerDelegate>
{
    UIImage *_currentImage;
    UIPanGestureRecognizer *_gestureRecognizer;
    QZPhotoBrowserInteractivePushAnimator *_customPush;
    QZPhotoBrowserInteractivePopAnimator *_customPop;
    QZPhotoBrowserPercentDrivenInteractive *_percentIntractive;
    struct CGRect _beforeImageViewFrame;
    struct CGRect _currentImageViewFrame;
}

@property(retain, nonatomic) QZPhotoBrowserPercentDrivenInteractive *percentIntractive; // @synthesize percentIntractive=_percentIntractive;
@property(retain, nonatomic) QZPhotoBrowserInteractivePopAnimator *customPop; // @synthesize customPop=_customPop;
@property(retain, nonatomic) QZPhotoBrowserInteractivePushAnimator *customPush; // @synthesize customPush=_customPush;
@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic) struct CGRect currentImageViewFrame; // @synthesize currentImageViewFrame=_currentImageViewFrame;
@property(nonatomic) struct CGRect beforeImageViewFrame; // @synthesize beforeImageViewFrame=_beforeImageViewFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

