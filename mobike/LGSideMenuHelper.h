//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LGSideMenuHelper : NSObject
{
}

+ (_Bool)isPad;
+ (_Bool)isPhone;
+ (_Bool)isNotRetina;
+ (_Bool)isViewControllerBasedStatusBarAppearance;
+ (void)imageView:(id)arg1 setImageSafe:(id)arg2;
+ (void)statusBarAppearanceUpdateAnimated:(_Bool)arg1 viewController:(id)arg2 duration:(double)arg3 hidden:(_Bool)arg4 style:(long long)arg5 animation:(long long)arg6;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

