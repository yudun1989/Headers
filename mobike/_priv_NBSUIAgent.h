//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _priv_NBSUIAgent : NSObject
{
}

+ (void)start;
+ (void)hookFMDB;
+ (void)getViewControllersInImage;
+ (void)hookSubOfController:(id)arg1;
+ (void)nbs_jump_initialize:(SEL)arg1;
+ (void)hook_viewDidLayoutSubviews:(Class)arg1;
+ (void)hook_viewWillLayoutSubviews:(Class)arg1;
+ (void)hook_viewDidAppear:(Class)arg1;
+ (void)hook_viewWillAppear:(Class)arg1;
+ (void)hook_viewDidLoad:(Class)arg1;
+ (void)hookNSDictionary;
+ (void)hookNSArray;
+ (void)hookNSData;
+ (void)hookNSJSONSerialization;
+ (void)hookNSManagedObjectContext;
+ (void)hookUIImage;

@end

