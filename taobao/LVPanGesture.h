//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import "LVClassProtocal-Protocol.h"
#import "LVProtocal-Protocol.h"

@class LuaViewCore, NSString;

@interface LVPanGesture : UIPanGestureRecognizer <LVProtocal, LVClassProtocal>
{
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (void)handleGesture:(id)arg1;
- (id)init:(struct lua_State *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

