//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIView, UIViewController;

@protocol TBUIKitViewControllerTransiteDelegate <NSObject>
- (_Bool)transiteFromController:(UIViewController *)arg1 toController:(UIViewController *)arg2 containerController:(UIViewController *)arg3 parentView:(UIView *)arg4 transitionParams:(NSDictionary *)arg5 transitionOperation:(long long)arg6 willTransite:(void (^)(void))arg7 didTransite:(void (^)(_Bool))arg8;
@end

