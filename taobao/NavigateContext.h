//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UINavigationController, UIViewController;

@interface NavigateContext : NSObject
{
    UINavigationController *_navigationController;
    UIViewController *_topController;
    NSMutableDictionary *_others;
}

@property(retain, nonatomic) NSMutableDictionary *others; // @synthesize others=_others;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController=_topController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (id)init;

@end

