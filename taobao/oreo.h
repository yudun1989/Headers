//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface oreo : NSObject
{
}

+ (void)performBlockOnMainThread:(CDUnknownBlockType)arg1 withParam:(id)arg2;
+ (void)createWeexView:(CDUnknownBlockType)arg1 name:(id)arg2 containerSize:(struct CGSize)arg3 data:(id)arg4 moduleName:(id)arg5 pageName:(id)arg6 config:(id)arg7 updateBlock:(CDUnknownBlockType)arg8;
+ (void)createWeappView:(CDUnknownBlockType)arg1 name:(id)arg2 containerSize:(struct CGSize)arg3 data:(id)arg4 moduleName:(id)arg5 pageName:(id)arg6 config:(id)arg7;
+ (void)registerComponent:(id)arg1 withName:(id)arg2;
+ (void)refreshView:(id)arg1 withData:(id)arg2 clearOldData:(_Bool)arg3 finish:(CDUnknownBlockType)arg4 update:(CDUnknownBlockType)arg5;
+ (void)refreshView:(id)arg1 withData:(id)arg2;
+ (void)refreshView:(id)arg1 withData:(id)arg2 clearOldData:(_Bool)arg3;
+ (void)refreshView:(id)arg1 withData:(id)arg2 clearOldData:(_Bool)arg3 finish:(CDUnknownBlockType)arg4;
+ (void)getViewByConfig:(id)arg1 protocolName:(id)arg2 data:(id)arg3 finish:(CDUnknownBlockType)arg4;
+ (void)getViewByName:(id)arg1 data:(id)arg2 containerSize:(struct CGSize)arg3 finish:(CDUnknownBlockType)arg4 update:(CDUnknownBlockType)arg5;
+ (void)getViewByName:(id)arg1 data:(id)arg2 containerSize:(struct CGSize)arg3 finish:(CDUnknownBlockType)arg4;
+ (void)getViewByName:(id)arg1 data:(id)arg2 finish:(CDUnknownBlockType)arg3;
+ (void)setup;

@end

