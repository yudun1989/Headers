//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDetailItemVideoModel, UIView, UIViewController;

@interface AliDetailVideoMemento : NSObject
{
    _Bool _isVideoMuted;
    UIViewController *_weakParentVC;
    UIView *_customButton;
    id _actionHandler;
    AliDetailItemVideoModel *_videoModel;
    CDUnknownBlockType _miniVideoEndPlayingHandler;
    struct CGRect _frame;
}

@property(nonatomic) _Bool isVideoMuted; // @synthesize isVideoMuted=_isVideoMuted;
@property(copy, nonatomic) CDUnknownBlockType miniVideoEndPlayingHandler; // @synthesize miniVideoEndPlayingHandler=_miniVideoEndPlayingHandler;
@property(retain, nonatomic) AliDetailItemVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(copy, nonatomic) id actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) UIView *customButton; // @synthesize customButton=_customButton;
@property(nonatomic) __weak UIViewController *weakParentVC; // @synthesize weakParentVC=_weakParentVC;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;

@end
