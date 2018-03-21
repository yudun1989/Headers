//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer, PSDScene, UIViewController, UIWindow;

@interface NBPushWindowTask : NSObject
{
    _Bool _isFinished;
    _Bool _isNormalPush;
    NSTimer *_timer;
    double _waitRender;
    UIViewController *_currentVC;
    PSDScene *_scene;
    NSMutableArray *_viewControllers;
    UIWindow *_keyWindow;
}

@property(retain, nonatomic) UIWindow *keyWindow; // @synthesize keyWindow=_keyWindow;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) PSDScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(nonatomic) _Bool isNormalPush; // @synthesize isNormalPush=_isNormalPush;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) double waitRender; // @synthesize waitRender=_waitRender;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)run;
- (void)push;
- (id)init;
- (void)dealloc;

@end

