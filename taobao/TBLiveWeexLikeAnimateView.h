//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "WXModuleProtocol-Protocol.h"

@class NSString, TBLiveStarAnimation, WXSDKInstance;

@interface TBLiveWeexLikeAnimateView : WXComponent <WXModuleProtocol>
{
    _Bool _loop;
    _Bool _running;
    double _width;
    double _height;
    double _scale;
    NSString *_bubbleZip;
    double _speed;
    NSString *_scene;
    TBLiveStarAnimation *_animationView;
}

+ (id)wx_export_method_111;
+ (id)wx_export_method_100;
+ (id)wx_export_method_85;
@property(retain, nonatomic) TBLiveStarAnimation *animationView; // @synthesize animationView=_animationView;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(copy, nonatomic) NSString *bubbleZip; // @synthesize bubbleZip=_bubbleZip;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)runAnimate;
- (void)bubble:(id)arg1;
- (void)stop;
- (void)start;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

