//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIViewController;

@interface TBOUGCPublisher : NSObject
{
    NSMutableDictionary *_components;
    UIViewController *_curCtrl;
    UIViewController *_lastSourceViewController;
}

+ (id)handleURLActionRequest:(id)arg1;
+ (id)instance;
@property(readonly, nonatomic) UIViewController *lastSourceViewController; // @synthesize lastSourceViewController=_lastSourceViewController;
- (void).cxx_destruct;
- (id)getComponentWithContext:(id)arg1 parentComponet:(id)arg2 inViewController:(id)arg3 components:(id)arg4;
- (void)createComponentWithContexts:(id)arg1 parentComponet:(id)arg2 inViewController:(id)arg3 components:(id)arg4;
- (void)registerComponent:(id)arg1 withName:(id)arg2;
- (_Bool)registerComponent:(id)arg1;
- (id)handleURLActionRequest:(id)arg1;
- (id)mergeTemplateInfo:(id)arg1 data:(id)arg2;
- (id)init;

@end

