//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NBSessionManager, UINavigationController, UIWindow;

@interface NBContext : NSObject
{
    UIWindow *_window;
    UINavigationController *_navigationController;
    NBSessionManager *_sessionManager;
}

+ (id)allocPrivate;
+ (void)load;
+ (id)sharedContext;
@property(retain, nonatomic) NBSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)currentSession;
- (id)sessions;
- (void)popSession:(id)arg1;
- (void)pushSession:(id)arg1;
- (void)exitSession:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startSession:(id)arg1 animated:(_Bool)arg2;
- (id)createSession:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)initPrivate;

@end

