//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIViewController;

@interface NavigateInfo : NSObject
{
    _Bool _isSingleton;
    UIViewController *_targetPage;
    NSArray *_preProcess;
    NSString *_fragment;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *fragment; // @synthesize fragment=_fragment;
@property(nonatomic) _Bool isSingleton; // @synthesize isSingleton=_isSingleton;
@property(retain, nonatomic) NSArray *preProcess; // @synthesize preProcess=_preProcess;
@property(retain, nonatomic) UIViewController *targetPage; // @synthesize targetPage=_targetPage;
- (void).cxx_destruct;

@end

